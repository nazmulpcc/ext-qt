/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | https://www.php.net/license/3_01.txt                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Nazmul Alam<n@zmul.dev>                                      |
   +----------------------------------------------------------------------+
*/

#ifndef PHP_QT_H
#define PHP_QT_H

#include <QtCore/QString>
#include <QtCore/QObject>
#include <QtCore/QMetaObject>
#include <QtCore/QThread>
#include <QtCore/QCoreApplication>

extern zend_module_entry qt_module_entry;
#define phpext_qt_ptr &qt_module_entry

#define PHP_QT_VERSION "0.1.0"

static zend_object_handlers qt_object_handlers;

template <typename T>
struct qt_container_t
{
   T *native;
   zend_object std{};
};
struct qt_callback_t
{
   zend_fcall_info fci;
   zend_fcall_info_cache fci_cache{};
};
struct qt_callback_wrapper
{
   std::shared_ptr<qt_callback_t> callback;

   explicit qt_callback_wrapper(qt_callback_t *cb) : callback(cb) {}
};

#define QT_Object_P(zv, type) \
   ((qt_container_t<type> *)((char *)(Z_OBJ_P(zv)) - XtOffsetOf(qt_container_t<type>, std)))

static zend_object *qt_obj_create_handler(zend_class_entry *ce)
{
   qt_container_t<QObject> *container = (qt_container_t<QObject> *)zend_object_alloc(sizeof(qt_container_t<QObject>), ce);

   zend_object_std_init(&container->std, ce);
   container->std.handlers = &qt_object_handlers;
   return &container->std;
}
static void qt_obj_free_handler(zend_object *object)
{
   auto *obj = (qt_container_t<QObject> *)((char *)object - XtOffsetOf(qt_container_t<QObject>, std));
   zend_object_std_dtor(object);
}

// Helper function to convert C++ values to zval
template <typename T>
inline void qt_cpp_to_zval(zval *z, const T &value)
{
   ZVAL_NULL(z);
}
template <>
inline void qt_cpp_to_zval<int>(zval *z, const int &value)
{
   ZVAL_LONG(z, value);
}
template <>
inline void qt_cpp_to_zval<bool>(zval *z, const bool &value)
{
   ZVAL_BOOL(z, value);
}
template <>
inline void qt_cpp_to_zval<QString>(zval *z, const QString &value)
{
   zend_string *ztext = zend_string_init(value.toUtf8().data(), value.size(), 0);
   ZVAL_STR(z, ztext);
}
template <typename Func1>
struct SignalParameterTypes;

// For Regular functions
template <typename R, typename... Args>
struct SignalParameterTypes<R(Args...)>
{
   using ParamTypes = std::tuple<Args...>;
};

// For Member function pointers
template <typename R, typename C, typename... Args>
struct SignalParameterTypes<R (C::*)(Args...)>
{
   using ParamTypes = std::tuple<Args...>;
};

template <typename R, typename C, typename... Args>
struct SignalParameterTypes<R (C::*)(Args...) const>
{
   using ParamTypes = std::tuple<Args...>;
};

// Macros to define methods
#define QT_RECEIVE_SINGLE_CALLBACK(callback) \
   zval *callback;                           \
   ZEND_PARSE_PARAMETERS_START(1, 1)         \
   Z_PARAM_ZVAL(callback)                    \
   ZEND_PARSE_PARAMETERS_END();

#define QT_METHOD_FORWARD(classname, native_type, method_name) \
   PHP_METHOD(classname, method_name)                          \
   {                                                           \
      auto *container = QT_Object_P(ZEND_THIS, native_type);   \
      ZEND_PARSE_PARAMETERS_NONE();                            \
      container->native->method_name();                        \
   }

#define QT_METHOD_FORWARD_RETURN_ZVAL(classname, native_type, method_name) \
   PHP_METHOD(classname, method_name)                                      \
   {                                                                       \
      auto *container = QT_Object_P(ZEND_THIS, native_type);               \
      ZEND_PARSE_PARAMETERS_NONE();                                        \
      zval retval;                                                         \
      auto ret = container->native->method_name();                         \
      qt_cpp_to_zval(&retval, ret);                                        \
      RETURN_ZVAL(&retval, 0, 1);                                          \
   }

#define QT_METHOD_FORWARD_STRING(classname, native_type, method_name) \
   PHP_METHOD(classname, method_name)                                 \
   {                                                                  \
      auto *container = QT_Object_P(ZEND_THIS, native_type);          \
      zend_string *text;                                              \
      ZEND_PARSE_PARAMETERS_START(1, 1)                               \
      Z_PARAM_STR(text)                                               \
      ZEND_PARSE_PARAMETERS_END();                                    \
      container->native->method_name(ZSTR_VAL(text));                 \
   }

#define QT_METHOD_FORWARD_BOOL(classname, native_type, method_name) \
   PHP_METHOD(classname, method_name)                               \
   {                                                                \
      auto *container = QT_Object_P(ZEND_THIS, native_type);        \
      bool value;                                                   \
      ZEND_PARSE_PARAMETERS_START(1, 1)                             \
      Z_PARAM_BOOL(value)                                           \
      ZEND_PARSE_PARAMETERS_END();                                  \
      container->native->method_name(value);                        \
   }

#define QT_METHOD_FORWARD_INT(classname, native_type, method_name) \
   PHP_METHOD(classname, method_name)                              \
   {                                                               \
      auto *container = QT_Object_P(ZEND_THIS, native_type);       \
      zend_long value;                                             \
      ZEND_PARSE_PARAMETERS_START(1, 1)                            \
      Z_PARAM_LONG(value)                                          \
      ZEND_PARSE_PARAMETERS_END();                                 \
      container->native->method_name(value);                       \
   }

#define QT_METHOD_FORWARD_INT_ENUM(classname, native_type, method_name, enum) \
   PHP_METHOD(classname, method_name)                                         \
   {                                                                          \
      auto *container = QT_Object_P(ZEND_THIS, native_type);                  \
      zend_long value;                                                        \
      ZEND_PARSE_PARAMETERS_START(1, 1)                                       \
      Z_PARAM_LONG(value)                                                     \
      ZEND_PARSE_PARAMETERS_END();                                            \
      container->native->method_name(static_cast<enum>(value));               \
   }

#define QT_METHOD_FORWARD_SIGNAL(classname, native_type, method_name, signal_name)           \
   PHP_METHOD(classname, method_name)                                                        \
   {                                                                                         \
      zval *callback;                                                                        \
      ZEND_PARSE_PARAMETERS_START(1, 1)                                                      \
      Z_PARAM_ZVAL(callback)                                                                 \
      ZEND_PARSE_PARAMETERS_END();                                                           \
      const auto *container = QT_Object_P(ZEND_THIS, native_type);                           \
      qt_connect_signal_to_callback(container->native, &native_type::signal_name, callback); \
   }

// Helper functions
inline void qt_clear_callback(qt_callback_t *cb)
{
   zend_fcall_info_args_clear(&cb->fci, true);
   zval_ptr_dtor(&cb->fci.function_name);
   efree(cb);
}

/**
 * Create a fci & fcc pair for a given zval. <br>
 * Also, register a callback to clear the fci & fcc when the sender is destroyed.
 * @param sender
 * @param callback
 * @return
 */
inline qt_callback_t *qt_callback_create(const QObject *sender, zval *callback)
{
   auto *cb = static_cast<qt_callback_t *>(emalloc(sizeof(qt_callback_t)));
   char *errstr = nullptr;

   if (zend_fcall_info_init(callback, 0, &cb->fci, &cb->fci_cache, nullptr, &errstr) != SUCCESS)
   {
      zend_error(E_WARNING, "Invalid callback: %s", errstr);
      efree(cb);
      return nullptr;
   }
   Z_TRY_ADDREF(cb->fci.function_name);

   QObject::connect(sender, &QObject::destroyed, [cb]
                    { qt_clear_callback(cb); });

   return cb;
}

template <typename Func1>
inline void qt_connect_signal_to_callback(typename QtPrivate::FunctionPointer<Func1>::Object *sender,
                                          Func1 signal, zval *callback)
{
   auto cb = std::make_shared<qt_callback_t>(*qt_callback_create(sender, callback));
   using ParamTypes = typename SignalParameterTypes<Func1>::ParamTypes;
   constexpr int paramCount = std::tuple_size_v<ParamTypes>;
   auto cb_wrapper = std::make_shared<qt_callback_wrapper>(cb.get());

   QObject::connect(sender, signal, [cb_wrapper, cb, sender, paramCount](auto... args)
                    {
                       zval retval, params[paramCount];
                       int i = 0;
                       (void)std::initializer_list<int>{
                           (qt_cpp_to_zval(&params[i], args), ++i)...};

                       cb->fci.retval = &retval;
                       cb->fci.params = params;
                       cb->fci.param_count = paramCount;
                       zend_call_function(&cb->fci, &cb->fci_cache);
                       zval_ptr_dtor(&retval); });
}

// global variables
extern zend_class_entry *ce_qobject;
extern zend_class_entry *ce_widget_QWidget;
extern zend_class_entry *ce_widget_QLayout;

#if defined(ZTS) && defined(COMPILE_DL_QT)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif /* PHP_QT_H */

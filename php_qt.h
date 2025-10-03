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

#ifdef __cplusplus
#include <QtCore/QAbstractItemModel>
#include <QtCore/QModelIndex>
#include <QtCore/QString>
#include <QtCore/QObject>
#include <QtCore/QMetaObject>
#include <QtCore/QThread>
#include <QtCore/QCoreApplication>
#include <QtCore/QDateTime>
#include <QtCore/QTimeZone>
#include <QtCore/QCalendar>
#include <QtCore/QDate>
#include <QtCore/QRect>
#include <QtCore/QSize>
#include <QtCore/QVariant>
#include <QtWidgets/QWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>

#include <QtGui/QAction>
#include <unordered_map>

#endif

/**
 * Declarations needed for the PHP extension at the C level go here.
 */
#ifdef __cplusplus
extern "C"
{
#endif

#define PHP_QT_VERSION "0.1.0"
   extern zend_module_entry qt_module_entry;
#define phpext_qt_ptr &qt_module_entry

   static zend_object_handlers qt_object_handlers,
       qt_qcalendar_handler,
       qt_qdate_handler,
       qt_qtime_handler,
       qt_qdatetime_handler,
       qt_qtimezone_handler,
       qt_qsize_handler,
       qt_qrect_handler,
       qt_qmodelindex_handler;

   extern zend_class_entry *ce_qcalendar;
   extern zend_class_entry *ce_qdate;
   extern zend_class_entry *ce_qdatetime;
   extern zend_class_entry *ce_qobject;
   extern zend_class_entry *ce_qrect;
   extern zend_class_entry *ce_qsize;
   extern zend_class_entry *ce_qscrollbar;
   extern zend_class_entry *ce_qtextedit;
   extern zend_class_entry *ce_qtime;
   extern zend_class_entry *ce_qtimezone;
   extern zend_class_entry *ce_widget_QWidget;
   extern zend_class_entry *ce_widget_QLayout;
   extern zend_class_entry *ce_qabstractitemmodel;
   extern zend_class_entry *ce_qabstracttablemodel;
   extern zend_class_entry *ce_qabstractlistmodel;
   extern zend_class_entry *ce_qmenu;
   extern zend_class_entry *ce_qmenubar;
   extern zend_class_entry *ce_qmodelindex;

   extern zend_class_entry *ce_qaction;

#if defined(ZTS) && defined(COMPILE_DL_QT)
   ZEND_TSRMLS_CACHE_EXTERN()
#endif

#ifdef __cplusplus
}
#endif

/**
 * C++-specific code (templates, inline C++ functions, Qt usage) goes under #ifdef __cplusplus.
 */
#ifdef __cplusplus

// Registry mapping native QObject* -> PHP wrapper zval (kept with an extra ref)
extern std::unordered_map<QObject *, zval> qt_object_registry;

// Register a native QObject* into the registry and return/create the PHP wrapper zval.
// Implemented in qt.cpp
void register_native_to_zval(QObject *native, zval *z, zend_class_entry *ce);

template <typename T>
struct qt_container_t
{
   T *native;
   bool owned_by_php{true};
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

// Object create handlers
static zend_object *qt_obj_create_handler(zend_class_entry *ce)
{
   qt_container_t<QObject> *container =
       (qt_container_t<QObject> *)zend_object_alloc(sizeof(qt_container_t<QObject>), ce);

   zend_object_std_init(&container->std, ce);
   object_properties_init(&container->std, ce);
   container->std.handlers = &qt_object_handlers;
   return &container->std;
}

static zend_object *qt_qcalendar_create_handler(zend_class_entry *ce)
{
   qt_container_t<QCalendar> *container =
       (qt_container_t<QCalendar> *)zend_object_alloc(sizeof(qt_container_t<QCalendar>), ce);

   zend_object_std_init(&container->std, ce);
   object_properties_init(&container->std, ce);
   container->std.handlers = &qt_qcalendar_handler;
   return &container->std;
}

static zend_object *qt_qdate_create_handler(zend_class_entry *ce)
{
   qt_container_t<QDate> *container =
       (qt_container_t<QDate> *)zend_object_alloc(sizeof(qt_container_t<QDate>), ce);

   zend_object_std_init(&container->std, ce);
   object_properties_init(&container->std, ce);
   container->std.handlers = &qt_qdate_handler;
   return &container->std;
}

static zend_object *qt_qrect_create_handler(zend_class_entry *ce)
{
   qt_container_t<QRect> *container =
       (qt_container_t<QRect> *)zend_object_alloc(sizeof(qt_container_t<QRect>), ce);

   zend_object_std_init(&container->std, ce);
   object_properties_init(&container->std, ce);
   container->std.handlers = &qt_qrect_handler;
   return &container->std;
}

static zend_object *qt_qsize_create_handler(zend_class_entry *ce)
{
   qt_container_t<QSize> *container =
       (qt_container_t<QSize> *)zend_object_alloc(sizeof(qt_container_t<QSize>), ce);

   zend_object_std_init(&container->std, ce);
   object_properties_init(&container->std, ce);
   container->std.handlers = &qt_qsize_handler;
   return &container->std;
}

static zend_object *qt_qtime_create_handler(zend_class_entry *ce)
{
   qt_container_t<QTime> *container =
       (qt_container_t<QTime> *)zend_object_alloc(sizeof(qt_container_t<QTime>), ce);

   zend_object_std_init(&container->std, ce);
   container->std.handlers = &qt_qtime_handler;
   return &container->std;
}

static zend_object *qt_qdatetime_create_handler(zend_class_entry *ce)
{
   qt_container_t<QDateTime> *container =
       (qt_container_t<QDateTime> *)zend_object_alloc(sizeof(qt_container_t<QDateTime>), ce);

   zend_object_std_init(&container->std, ce);
   container->std.handlers = &qt_qdatetime_handler;
   return &container->std;
}

static zend_object *qt_qtimezone_create_handler(zend_class_entry *ce)
{
   qt_container_t<QTimeZone> *container =
       (qt_container_t<QTimeZone> *)zend_object_alloc(sizeof(qt_container_t<QTimeZone>), ce);

   zend_object_std_init(&container->std, ce);
   container->std.handlers = &qt_qtimezone_handler;
   return &container->std;
}

static zend_object *qt_qmodelindex_create_handler(zend_class_entry *ce)
{
   qt_container_t<QModelIndex> *container =
       (qt_container_t<QModelIndex> *)zend_object_alloc(sizeof(qt_container_t<QModelIndex>), ce);

   zend_object_std_init(&container->std, ce);
   container->std.handlers = &qt_qmodelindex_handler;
   return &container->std;
}

static void qt_obj_free_handler(zend_object *object)
{
   auto *obj = (qt_container_t<QObject> *)((char *)object - XtOffsetOf(qt_container_t<QObject>, std));
   if (obj->native)
   {
      auto it = qt_object_registry.find(obj->native);
      if (it != qt_object_registry.end())
      {
         qt_object_registry.erase(it);
      }
      if (obj->owned_by_php)
      {
         delete obj->native;
      }

      obj->native = nullptr;
   }
   zend_object_std_dtor(object);
}

template <typename T>
static void qt_generic_free_handler(zend_object *object)
{
   auto *obj = (qt_container_t<T> *)((char *)object - XtOffsetOf(qt_container_t<T>, std));
   if (obj->native)
   {
      delete obj->native;
      obj->native = nullptr;
   }
   zend_object_std_dtor(object);
}

//
// Conversion helpers
//
template <typename T>
inline void qt_cpp_to_zval(zval *z, const T &value)
{
   php_error_docref(nullptr, E_WARNING, "Failed to convert native QT object to PHP");
   ZVAL_NULL(z);
}

template <typename T>
inline void qt_cpp_to_zval(zval *z, T *value)
{
   php_error_docref(nullptr, E_WARNING, "Failed to convert native QT object to PHP");
   ZVAL_NULL(z);
}

#define RETURN_QT(obj) \
   qt_cpp_to_zval(return_value, obj);

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
template <>
inline void qt_cpp_to_zval<QVariant>(zval *z, const QVariant &value)
{
   switch (value.type())
   {
   case QVariant::Type::Invalid:
      ZVAL_NULL(z);
      break;
   case QVariant::Type::Bool:
      ZVAL_BOOL(z, value.toBool());
      break;
   case QVariant::Type::Int:
   case QVariant::Type::LongLong:
   case QVariant::Type::ULongLong:
      ZVAL_LONG(z, value.toInt());
      break;
   case QVariant::Type::Double:
      ZVAL_DOUBLE(z, value.toDouble());
      break;
   case QVariant::Type::String:
      qt_cpp_to_zval(z, value.toString());
      break;
   default:
      php_error_docref(nullptr, E_WARNING, "Failed to convert QVariant of type %d to PHP", value.type());
      ZVAL_NULL(z);
      break;
   }
}

template <>
inline void qt_cpp_to_zval<double>(zval *z, const double &value)
{
   ZVAL_DOUBLE(z, value);
}

// zval to cpp
QVariant zval_to_qvariant(zval *zv); // forward declaration.

inline QVariant map_array_zval(zval *arr)
{
   if (Z_TYPE_P(arr) != IS_ARRAY)
   {
      return QVariant(); // Or throw an exception, depending on your needs
   }

   HashTable *ht = Z_ARRVAL_P(arr);
   zend_string *key;
   zend_ulong idx;
   zval *value;

   QVariantMap map;
   QVariantList list;
   bool is_sequential = true;
   zend_ulong expected_index = 0;

   ZEND_HASH_FOREACH_KEY_VAL(ht, idx, key, value)
   {
      QVariant qValue = zval_to_qvariant(value);

      if (key)
      {
         // Associative array
         is_sequential = false;
         QString qKey = QString::fromUtf8(key->val, key->len);
         map[qKey] = qValue;
      }
      else
      {
         // Numerical array
         if (idx != expected_index)
         {
            is_sequential = false;
         }
         list.append(qValue);
         expected_index = idx + 1;
      }
   }
   ZEND_HASH_FOREACH_END();

   if (is_sequential)
   {
      return QVariant::fromValue(list);
   }
   else
   {
      return QVariant::fromValue(map);
   }
}

inline QVariant zval_to_qvariant(zval *zv)
{
   switch (Z_TYPE_P(zv))
   {
   case IS_NULL:
      return QVariant();
   case IS_FALSE:
      return QVariant(false);
   case IS_TRUE:
      return QVariant(true);
   case IS_LONG:
      return QVariant((int)Z_LVAL_P(zv));
   case IS_DOUBLE:
      return QVariant(Z_DVAL_P(zv));
   case IS_STRING:
   {
      zend_string *str = Z_STR_P(zv);
      return QVariant(QString::fromUtf8(str->val, str->len));
   }
   case IS_ARRAY:
      return map_array_zval(zv);
   default:
      return QVariant();
   }
}

//
// Signal parameter introspection
//
template <typename Func1>
struct SignalParameterTypes;

// For regular functions
template <typename R, typename... Args>
struct SignalParameterTypes<R(Args...)>
{
   using ParamTypes = std::tuple<Args...>;
};

// For member function pointers
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

//
// Common macros for PHP-Qt method forwarding
//
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

#define QT_METHOD_FORWARD_NATIVE(classname, native_type, method_name, forward_type, ce) \
   ZEND_METHOD(classname, method_name)                                                  \
   {                                                                                    \
      zval *zv;                                                                         \
      ZEND_PARSE_PARAMETERS_START(1, 1)                                                 \
      Z_PARAM_OBJECT_OF_CLASS(zv, ce)                                                   \
      ZEND_PARSE_PARAMETERS_END();                                                      \
      auto *container = QT_Object_P(ZEND_THIS, native_type);                            \
      container->native->method_name(*QT_Object_P(zv, forward_type)->native);           \
   }

#define QT_METHOD_FORWARD_NATIVE_P_REF(classname, native_type, method_name, forward_type, ce, ref) \
   ZEND_METHOD(classname, method_name)                                                             \
   {                                                                                               \
      zval *zv;                                                                                    \
      ZEND_PARSE_PARAMETERS_START(1, 1)                                                            \
      Z_PARAM_OBJECT_OF_CLASS(zv, ce)                                                              \
      ZEND_PARSE_PARAMETERS_END();                                                                 \
      Z_COUNTED_P(zv)->gc.refcount += ref;                                                         \
      auto *container = QT_Object_P(ZEND_THIS, native_type);                                       \
      container->native->method_name(QT_Object_P(zv, forward_type)->native);                       \
   }

#define QT_METHOD_FORWARD_NATIVE_P(classname, native_type, method_name, forward_type, ce) \
   QT_METHOD_FORWARD_NATIVE_P_REF(classname, native_type, method_name, forward_type, ce, 0)

#define QT_METHOD_FORWARD_STRING(classname, native_type, method_name) \
   PHP_METHOD(classname, method_name)                                 \
   {                                                                  \
      auto *container = QT_Object_P(ZEND_THIS, native_type);          \
      zend_string *text;                                              \
      ZEND_PARSE_PARAMETERS_START(1, 1)                               \
      Z_PARAM_STR(text)                                               \
      ZEND_PARSE_PARAMETERS_END();                                    \
      container->native->method_name(QString(ZSTR_VAL(text)));        \
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

#define QT_REGISRER_NATIVE_TO_ZVAL(type, class_entry)                      \
   template <>                                                             \
   inline void qt_cpp_to_zval<type>(zval * z, const type &value)           \
   {                                                                       \
      register_native_to_zval(const_cast<type *>(&value), z, class_entry); \
   }                                                                       \
   template <>                                                             \
   inline void qt_cpp_to_zval<type>(zval * z, type * value)                \
   {                                                                       \
      register_native_to_zval(value, z, class_entry);                      \
   }

#define QT_REGISTER_VALUE_TO_ZVAL(type, class_entry)              \
   template <>                                                    \
   inline void qt_cpp_to_zval<type>(zval * z, const type &value)  \
   {                                                              \
      object_init_ex(z, class_entry);                             \
      auto container = QT_Object_P(z, type);                      \
      container->native = new type(value); /* deep copy */        \
   }                                                              \
   template <>                                                    \
   inline void qt_cpp_to_zval<type>(zval * z, type * value)       \
   {                                                              \
      object_init_ex(z, class_entry);                             \
      auto container = QT_Object_P(z, type);                      \
      container->native = new type(*value); /* copy for safety */ \
   }

template <>
inline void qt_cpp_to_zval<QModelIndex>(zval *z, const QModelIndex &value)
{
   object_init_ex(z, ce_qmodelindex);
   auto container = QT_Object_P(z, QModelIndex);
   container->native = new QModelIndex(value);
}
template <>
inline void qt_cpp_to_zval<QModelIndex>(zval *z, QModelIndex *value)
{
   object_init_ex(z, ce_qmodelindex);
   QT_Object_P(z, QModelIndex)->native = value;
}

//
// Helper functions
//
inline void qt_clear_callback(std::shared_ptr<qt_callback_t> cb)
{
   if (!cb)
      return;
   zend_fcall_info_args_clear(&cb->fci, true);
   zval_ptr_dtor(&cb->fci.function_name);
}

/**
 * Create a qt_callback_t for a given zval callback.
 * Also, registers a cleanup when the sender is destroyed.
 */
inline std::shared_ptr<qt_callback_t> qt_callback_create(const QObject *sender, zval *callback)
{
   auto cb = std::make_shared<qt_callback_t>();
   char *errstr = nullptr;

   if (zend_fcall_info_init(callback, 0, &cb->fci, &cb->fci_cache, nullptr, &errstr) != SUCCESS)
   {
      zend_error(E_WARNING, "Invalid callback: %s", errstr);
      return nullptr;
   }
   Z_TRY_ADDREF(cb->fci.function_name);

   QObject::connect(sender, &QObject::destroyed, [cb]()
                    { qt_clear_callback(cb); });

   return cb;
}

template <typename Func1>
inline void qt_connect_signal_to_callback(
    typename QtPrivate::FunctionPointer<Func1>::Object *sender,
    Func1 signal,
    zval *callback)
{
   auto cb = qt_callback_create(sender, callback);
   if (!cb)
      return;

   using ParamTypes = typename SignalParameterTypes<Func1>::ParamTypes;

   QObject::connect(sender, signal,
                    [cb, sender](auto... args)
                    {
                       constexpr int paramCount = std::tuple_size_v<ParamTypes>;
                       if (QThread::currentThread() != QCoreApplication::instance()->thread())
                       {
                          QMetaObject::invokeMethod(
                              qobject_cast<QObject *>(sender),
                              [cb, args...]()
                              {
                                 constexpr int paramCount = std::tuple_size_v<ParamTypes>;
                                 zval retval;
                                 std::vector<zval> params(paramCount);
                                 int i = 0;
                                 (void)std::initializer_list<int>{
                                     (qt_cpp_to_zval(&params[i], args), ++i)...};

                                 cb->fci.retval = &retval;
                                 cb->fci.params = params.data();
                                 cb->fci.param_count = paramCount;
                                 zend_call_function(&cb->fci, &cb->fci_cache);
                                 zval_ptr_dtor(&retval);
                                 for (int j = 0; j < paramCount; ++j)
                                 {
                                    zval_ptr_dtor(&params[j]);
                                 }
                              },
                              Qt::QueuedConnection);
                       }
                       else
                       {
                          zval retval;
                          std::vector<zval> params(paramCount);
                          int i = 0;
                          (void)std::initializer_list<int>{
                              (qt_cpp_to_zval(&params[i], args), ++i)...};

                          cb->fci.retval = &retval;
                          cb->fci.params = params.data();
                          cb->fci.param_count = paramCount;
                          zend_call_function(&cb->fci, &cb->fci_cache);
                          zval_ptr_dtor(&retval);
                          for (int j = 0; j < paramCount; ++j)
                          {
                             zval_ptr_dtor(&params[j]);
                          }
                       }
                    });
}

// Register conversions
QT_REGISRER_NATIVE_TO_ZVAL(QAbstractItemModel, ce_qabstractitemmodel)
QT_REGISTER_VALUE_TO_ZVAL(QCalendar, ce_qcalendar)
QT_REGISTER_VALUE_TO_ZVAL(QDate, ce_qdate)
QT_REGISTER_VALUE_TO_ZVAL(QDateTime, ce_qdatetime)
QT_REGISTER_VALUE_TO_ZVAL(QRect, ce_qrect)
QT_REGISTER_VALUE_TO_ZVAL(QSize, ce_qsize)
QT_REGISRER_NATIVE_TO_ZVAL(QTextEdit, ce_qtextedit)
QT_REGISTER_VALUE_TO_ZVAL(QTime, ce_qtime)
QT_REGISTER_VALUE_TO_ZVAL(QTimeZone, ce_qtimezone)
QT_REGISRER_NATIVE_TO_ZVAL(QWidget, ce_widget_QWidget)
QT_REGISRER_NATIVE_TO_ZVAL(QMenu, ce_qmenu)
QT_REGISRER_NATIVE_TO_ZVAL(QMenuBar, ce_qmenubar)
QT_REGISRER_NATIVE_TO_ZVAL(QAction, ce_qaction)

#endif /* __cplusplus */

// php helpers
static zend_always_inline zval *zend_call_method_with_params(zend_object *object, const char *function_name, zval *retval,
                                                             int param_count, zval params[])
{
   zend_fcall_info fci;
   zend_fcall_info_cache fcc;
   memset(&fci, 0, sizeof(fci));
   memset(&fcc, 0, sizeof(fcc));
   fci.size = sizeof(fci);
   fci.object = object;
   fci.retval = retval;
   fci.param_count = param_count;
   fci.params = params;

   zval fname;
   ZVAL_STRINGL(&fname, function_name, strlen(function_name));
   fci.function_name = fname;
   zend_call_function(&fci, &fcc);
   zval_ptr_dtor(&fname);
   return retval;
}

#endif /* PHP_QT_H */

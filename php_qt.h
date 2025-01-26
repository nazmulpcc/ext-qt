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

extern zend_module_entry qt_module_entry;
#define phpext_qt_ptr &qt_module_entry

#define PHP_QT_VERSION "0.1.0"

template <typename T>
struct qt_container_t
{
   T *native;
   zend_object std{};
};
#define QT_Object_P(zv, type) \
   ((qt_container_t<type> *)((char *)(Z_OBJ_P(zv)) - XtOffsetOf(qt_container_t<type>, std)))

// global variables
extern zend_class_entry *ce_widget_QWidget;

#if defined(ZTS) && defined(COMPILE_DL_QT)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif /* PHP_QT_H */

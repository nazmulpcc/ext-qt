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

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QWidget>

zend_class_entry *ce_qobject = nullptr;
zend_class_entry *ce_widget_QWidget = nullptr;
zend_class_entry *ce_widget_QLayout = nullptr;

/* For compatibility with older PHP versions */
#ifndef ZEND_PARSE_PARAMETERS_NONE
#define ZEND_PARSE_PARAMETERS_NONE()  \
	ZEND_PARSE_PARAMETERS_START(0, 0) \
	ZEND_PARSE_PARAMETERS_END()
#endif

PHP_RINIT_FUNCTION(qt)
{
#if defined(ZTS) && defined(COMPILE_DL_QT)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	return SUCCESS;
}

PHP_MINIT_FUNCTION(qt)
{
	register_class_Qt_CheckState();
	register_class_Qt_WindowType();

	memcpy(&qt_object_handlers, &std_object_handlers, sizeof(zend_object_handlers));
	qt_object_handlers.offset = XtOffsetOf(qt_container_t<QObject>, std);
	qt_object_handlers.free_obj = qt_obj_free_handler;

	ce_qobject = register_class_Qt_Core_QObject();
	ce_qobject->create_object = qt_obj_create_handler;

	auto ce_widget_QApplication = register_class_Qt_Widgets_QApplication();
	ce_widget_QApplication->create_object = qt_obj_create_handler;

	ce_widget_QWidget = register_class_Qt_Widgets_QWidget(ce_qobject);
	ce_widget_QWidget->create_object = qt_obj_create_handler;

	auto ce_qlabel = register_class_Qt_Widgets_QLabel(ce_widget_QWidget);
	ce_qlabel->create_object = qt_obj_create_handler;

	auto ce_qlineedit = register_class_Qt_Widgets_QLineEdit(ce_widget_QWidget);
	ce_qlineedit->create_object = qt_obj_create_handler;

	auto ce_qabstractbutton = register_class_Qt_Widgets_QAbstractButton(ce_widget_QWidget);
	ce_qabstractbutton->create_object = qt_obj_create_handler;
	auto ce_qcheckbox = register_class_Qt_Widgets_QCheckBox(ce_qabstractbutton);
	ce_qcheckbox->create_object = qt_obj_create_handler;
	auto ce_qpushbutton = register_class_Qt_Widgets_QPushButton(ce_qabstractbutton);
	ce_qpushbutton->create_object = qt_obj_create_handler;
	auto ce_qradiobutton = register_class_Qt_Widgets_QRadioButton(ce_qabstractbutton);
	ce_qradiobutton->create_object = qt_obj_create_handler;

	auto ce_qabstractspinbox = register_class_Qt_Widgets_QAbstractSpinBox(ce_widget_QWidget);
	ce_qabstractspinbox->create_object = qt_obj_create_handler;
	auto ce_qspinbox = register_class_Qt_Widgets_QSpinBox(ce_qabstractspinbox);
	ce_qspinbox->create_object = qt_obj_create_handler;

	auto ce_qmainwindow = register_class_Qt_Widgets_QMainWindow(ce_widget_QWidget);
	ce_qmainwindow->create_object = qt_obj_create_handler;

	ce_widget_QLayout = register_class_Qt_Widgets_QLayout(ce_qobject);
	ce_widget_QLayout->create_object = qt_obj_create_handler;

	auto ce_widget_QBoxLayout = register_class_Qt_Widgets_QBoxLayout(ce_widget_QLayout);
	ce_widget_QBoxLayout->create_object = qt_obj_create_handler;

	auto ce_qhboxlayout = register_class_Qt_Widgets_QHBoxLayout(ce_widget_QBoxLayout);
	ce_qhboxlayout->create_object = qt_obj_create_handler;
	auto ce_qvboxlayout = register_class_Qt_Widgets_QVBoxLayout(ce_widget_QBoxLayout);
	ce_qvboxlayout->create_object = qt_obj_create_handler;

	return SUCCESS;
}

PHP_MINFO_FUNCTION(qt)
{
	php_info_print_table_start();
	php_info_print_table_row(2, "qt support", "enabled");
	php_info_print_table_end();
}

zend_module_entry qt_module_entry = {
	STANDARD_MODULE_HEADER,
	"qt",			/* Extension name */
	NULL,			/* zend_function_entry */
	PHP_MINIT(qt),	/* PHP_MINIT - Module initialization */
	NULL,			/* PHP_MSHUTDOWN - Module shutdown */
	PHP_RINIT(qt),	/* PHP_RINIT - Request initialization */
	NULL,			/* PHP_RSHUTDOWN - Request shutdown */
	PHP_MINFO(qt),	/* PHP_MINFO - Module info */
	PHP_QT_VERSION, /* Version */
	STANDARD_MODULE_PROPERTIES};

#ifdef COMPILE_DL_QT
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(qt)
#endif

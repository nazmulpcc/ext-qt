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

zend_class_entry *ce_qcalendar = nullptr;
zend_class_entry *ce_qdate = nullptr;
zend_class_entry *ce_qdatetime = nullptr;
zend_class_entry *ce_qobject = nullptr;
zend_class_entry *ce_qrect = nullptr;
zend_class_entry *ce_qsize = nullptr;
zend_class_entry *ce_qtime = nullptr;
zend_class_entry *ce_qtimezone = nullptr;
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
	register_class_Qt_Orientation();

	memcpy(&qt_object_handlers, &std_object_handlers, sizeof(zend_object_handlers));
	qt_object_handlers.offset = XtOffsetOf(qt_container_t<QObject>, std);
	qt_object_handlers.clone_obj = nullptr;
	qt_object_handlers.free_obj = qt_obj_free_handler;

	memcpy(&qt_qcalendar_handler, &std_object_handlers, sizeof(zend_object_handlers));
	qt_qcalendar_handler.offset = XtOffsetOf(qt_container_t<QCalendar>, std);
	qt_qcalendar_handler.free_obj = qt_generic_free_handler<QCalendar>;

	memcpy(&qt_qdate_handler, &std_object_handlers, sizeof(zend_object_handlers));
	qt_qdate_handler.offset = XtOffsetOf(qt_container_t<QDate>, std);
	qt_qdate_handler.free_obj = qt_generic_free_handler<QDate>;

	memcpy(&qt_qrect_handler, &std_object_handlers, sizeof(zend_object_handlers));
	qt_qrect_handler.offset = XtOffsetOf(qt_container_t<QRect>, std);
	qt_qrect_handler.free_obj = qt_generic_free_handler<QRect>;

	memcpy(&qt_qsize_handler, &std_object_handlers, sizeof(zend_object_handlers));
	qt_qsize_handler.offset = XtOffsetOf(qt_container_t<QSize>, std);
	qt_qsize_handler.free_obj = qt_generic_free_handler<QSize>;

	memcpy(&qt_qtime_handler, &std_object_handlers, sizeof(zend_object_handlers));
	qt_qtime_handler.offset = XtOffsetOf(qt_container_t<QTime>, std);
	qt_qtime_handler.free_obj = qt_generic_free_handler<QTime>;

	memcpy(&qt_qdatetime_handler, &std_object_handlers, sizeof(zend_object_handlers));
	qt_qdatetime_handler.offset = XtOffsetOf(qt_container_t<QDateTime>, std);
	qt_qdatetime_handler.free_obj = qt_generic_free_handler<QDateTime>;

	memcpy(&qt_qtimezone_handler, &std_object_handlers, sizeof(zend_object_handlers));
	qt_qtimezone_handler.offset = XtOffsetOf(qt_container_t<QTimeZone>, std);
	qt_qtimezone_handler.free_obj = qt_generic_free_handler<QTimeZone>;

	ce_qobject = register_class_Qt_Core_QObject();
	ce_qobject->create_object = qt_obj_create_handler;

	ce_qcalendar = register_class_Qt_Core_QCalendar();
	ce_qcalendar->create_object = qt_qcalendar_create_handler;
	ce_qdate = register_class_Qt_Core_QDate();
	ce_qdate->create_object = qt_qdate_create_handler;
	ce_qdatetime = register_class_Qt_Core_QDateTime();
	ce_qdatetime->create_object = qt_qdatetime_create_handler;
	ce_qrect = register_class_Qt_Core_QRect();
	ce_qrect->create_object = qt_qrect_create_handler;
	ce_qsize = register_class_Qt_Core_QSize();
	ce_qsize->create_object = qt_qsize_create_handler;
	ce_qtime = register_class_Qt_Core_QTime();
	ce_qtime->create_object = qt_qtime_create_handler;
	ce_qtimezone = register_class_Qt_Core_QTimeZone();
	ce_qtimezone->create_object = qt_qtimezone_create_handler;

	auto ce_widget_QApplication = register_class_Qt_Widgets_QApplication();
	ce_widget_QApplication->create_object = qt_obj_create_handler;

	ce_widget_QWidget = register_class_Qt_Widgets_QWidget(ce_qobject);
	ce_widget_QWidget->create_object = qt_obj_create_handler;

	auto ce_qlineedit = register_class_Qt_Widgets_QLineEdit(ce_widget_QWidget);
	ce_qlineedit->create_object = qt_obj_create_handler;

	auto ce_qabstractbutton = register_class_Qt_Widgets_QAbstractButton(ce_widget_QWidget);
	ce_qabstractbutton->create_object = qt_obj_create_handler;
	auto ce_qcheckbox = register_class_Qt_Widgets_QCheckBox(ce_qabstractbutton);
	ce_qcheckbox->create_object = qt_obj_create_handler;
	auto ce_qcombobox = register_class_Qt_Widgets_QComboBox(ce_widget_QWidget);
	ce_qcombobox->create_object = qt_obj_create_handler;
	auto ce_qpushbutton = register_class_Qt_Widgets_QPushButton(ce_qabstractbutton);
	ce_qpushbutton->create_object = qt_obj_create_handler;
	auto ce_qradiobutton = register_class_Qt_Widgets_QRadioButton(ce_qabstractbutton);
	ce_qradiobutton->create_object = qt_obj_create_handler;

	auto ce_qabstractslider = register_class_Qt_Widgets_QAbstractSlider(ce_widget_QWidget);
	ce_qabstractslider->create_object = qt_obj_create_handler;
	auto ce_qdial = register_class_Qt_Widgets_QDial(ce_qabstractslider);
	ce_qdial->create_object = qt_obj_create_handler;
	auto ce_qscrollbar = register_class_Qt_Widgets_QScrollBar(ce_qabstractslider);
	ce_qscrollbar->create_object = qt_obj_create_handler;
	auto ce_qslider = register_class_Qt_Widgets_QSlider(ce_qabstractslider);
	ce_qslider->create_object = qt_obj_create_handler;

	auto ce_qabstractspinbox = register_class_Qt_Widgets_QAbstractSpinBox(ce_widget_QWidget);
	ce_qabstractspinbox->create_object = qt_obj_create_handler;
	auto ce_qspinbox = register_class_Qt_Widgets_QSpinBox(ce_qabstractspinbox);
	ce_qspinbox->create_object = qt_obj_create_handler;
	auto ce_qdatetimeedit = register_class_Qt_Widgets_QDateTimeEdit(ce_qabstractspinbox);
	ce_qdatetimeedit->create_object = qt_obj_create_handler;

	auto ce_qframe = register_class_Qt_Widgets_QFrame(ce_widget_QWidget);
	auto ce_qlabel = register_class_Qt_Widgets_QLabel(ce_qframe);
	ce_qlabel->create_object = qt_obj_create_handler;
	auto ce_qscrollarea = register_class_Qt_Widgets_QScrollArea(ce_qframe);
	ce_qscrollarea->create_object = qt_obj_create_handler;

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

	register_class_Qt_Widgets_QSizePolicy();

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

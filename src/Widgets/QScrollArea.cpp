extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QScrollArea>

ZEND_METHOD(Qt_Widgets_QScrollArea, __construct)
{
    zval *parent = NULL;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();
    QT_Object_P(ZEND_THIS, QScrollArea)->native = new QScrollArea(parent ? QT_Object_P(parent, QWidget)->native : nullptr);
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QScrollArea, QScrollArea, alignment);

ZEND_METHOD(Qt_Widgets_QScrollArea, ensureVisible)
{
    zend_long x, y, xmargin = 50, ymargin = 50;
    ZEND_PARSE_PARAMETERS_START(2, 4)
    Z_PARAM_LONG(x)
    Z_PARAM_LONG(y)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(xmargin)
    Z_PARAM_LONG(ymargin)
    ZEND_PARSE_PARAMETERS_END();
    QT_Object_P(ZEND_THIS, QScrollArea)->native->ensureVisible(x, y, xmargin, ymargin);
}

ZEND_METHOD(Qt_Widgets_QScrollArea, ensureWidgetVisible)
{
    zval *widget;
    zend_long xmargin = 50, ymargin = 50;
    ZEND_PARSE_PARAMETERS_START(1, 3)
    Z_PARAM_OBJECT_OF_CLASS(widget, ce_widget_QWidget)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(xmargin)
    Z_PARAM_LONG(ymargin)
    ZEND_PARSE_PARAMETERS_END();
    QT_Object_P(ZEND_THIS, QScrollArea)->native->ensureWidgetVisible(QT_Object_P(widget, QWidget)->native, xmargin, ymargin);
}

QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QScrollArea, QScrollArea, setAlignment, Qt::AlignmentFlag)
ZEND_METHOD(Qt_Widgets_QScrollArea, setWidget)
{
    zval *widget;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(widget, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();
    QT_Object_P(ZEND_THIS, QScrollArea)->native->setWidget(QT_Object_P(widget, QWidget)->native);
}
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QScrollArea, QScrollArea, setWidgetResizable);

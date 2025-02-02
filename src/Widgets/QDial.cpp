extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QDial>

ZEND_METHOD(Qt_Widgets_QDial, __construct)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native = new QDial(parent_zval ? QT_Object_P(parent_zval, QWidget)->native : nullptr);
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDial, QDial, notchSize);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDial, QDial, notchTarget);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDial, QDial, notchesVisible);

ZEND_METHOD(Qt_Widgets_QDial, setNotchTarget)
{
    double target;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_DOUBLE(target)
    ZEND_PARSE_PARAMETERS_END();

    QT_Object_P(ZEND_THIS, QDial)->native->setNotchTarget(target);
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDial, QDial, wrapping)
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QDial, QDial, setNotchesVisible);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QDial, QDial, setWrapping);
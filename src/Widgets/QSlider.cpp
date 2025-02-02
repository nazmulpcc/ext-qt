extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QSlider>

ZEND_METHOD(Qt_Widgets_QSlider, __construct)
{
    zend_long orientation;
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(orientation)
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSlider);
    container->native = new QSlider(static_cast<Qt::Orientation>(orientation));
    if (parent_zval)
    {
        container->native->setParent(QT_Object_P(parent_zval, QWidget)->native);
    }
}

QT_METHOD_FORWARD_INT(Qt_Widgets_QSlider, QSlider, setTickInterval);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QSlider, QSlider, setTickPosition, QSlider::TickPosition);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSlider, QSlider, tickInterval);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSlider, QSlider, tickPosition);
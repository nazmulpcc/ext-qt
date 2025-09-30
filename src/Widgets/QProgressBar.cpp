extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QProgressBar>

ZEND_METHOD(Qt_Widgets_QProgressBar, __construct)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    QWidget *parent = nullptr;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QWidget);
        parent = parent_container->native;
    }

    auto *container = QT_Object_P(ZEND_THIS, QProgressBar);
    container->native = new QProgressBar(parent);
}
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QProgressBar, QProgressBar, alignment);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QProgressBar, QProgressBar, format);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QProgressBar, QProgressBar, invertedAppearance);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QProgressBar, QProgressBar, isTextVisible);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QProgressBar, QProgressBar, maximum);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QProgressBar, QProgressBar, minimum);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QProgressBar, QProgressBar, orientation);

QT_METHOD_FORWARD(Qt_Widgets_QProgressBar, QProgressBar, resetFormat);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QProgressBar, QProgressBar, setAlignment, Qt::AlignmentFlag);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QProgressBar, QProgressBar, setFormat);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QProgressBar, QProgressBar, setInvertedAppearance);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QProgressBar, QProgressBar, setTextDirection, QProgressBar::Direction);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QProgressBar, QProgressBar, setTextVisible);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QProgressBar, QProgressBar, text);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QProgressBar, QProgressBar, textDirection);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QProgressBar, QProgressBar, value);
QT_METHOD_FORWARD(Qt_Widgets_QProgressBar, QProgressBar, reset);
QT_METHOD_FORWARD_INT(Qt_Widgets_QProgressBar, QProgressBar, setMaximum);
QT_METHOD_FORWARD_INT(Qt_Widgets_QProgressBar, QProgressBar, setMinimum);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QProgressBar, QProgressBar, setOrientation, Qt::Orientation);

ZEND_METHOD(Qt_Widgets_QProgressBar, setRange)
{
    zend_long min, max;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(min)
    Z_PARAM_LONG(max)
    ZEND_PARSE_PARAMETERS_END();
    QT_Object_P(ZEND_THIS, QProgressBar)->native->setRange(min, max);
}

QT_METHOD_FORWARD_INT(Qt_Widgets_QProgressBar, QProgressBar, setValue);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QProgressBar, QProgressBar, onValueChanged, valueChanged);
extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QSpinBox>

ZEND_METHOD(Qt_Widgets_QSpinBox, __construct)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native = new QSpinBox;
    if (parent_zval)
    {
        container->native->setParent(QT_Object_P(parent_zval, QWidget)->native);
    }
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSpinBox, QSpinBox, cleanText);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSpinBox, QSpinBox, displayIntegerBase);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSpinBox, QSpinBox, maximum);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSpinBox, QSpinBox, minimum);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSpinBox, QSpinBox, prefix);
QT_METHOD_FORWARD_INT(Qt_Widgets_QSpinBox, QSpinBox, setDisplayIntegerBase);
QT_METHOD_FORWARD_INT(Qt_Widgets_QSpinBox, QSpinBox, setMaximum);
QT_METHOD_FORWARD_INT(Qt_Widgets_QSpinBox, QSpinBox, setMinimum);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QSpinBox, QSpinBox, setPrefix);

ZEND_METHOD(Qt_Widgets_QSpinBox, setRange)
{
    zend_long min;
    zend_long max;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(min)
    Z_PARAM_LONG(max)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSpinBox);
    container->native->setRange(min, max);
}

QT_METHOD_FORWARD_INT(Qt_Widgets_QSpinBox, QSpinBox, setSingleStep);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QSpinBox, QSpinBox, setStepType, QAbstractSpinBox::StepType);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QSpinBox, QSpinBox, setSuffix);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSpinBox, QSpinBox, singleStep);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSpinBox, QSpinBox, stepType);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSpinBox, QSpinBox, suffix);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSpinBox, QSpinBox, value);
QT_METHOD_FORWARD_INT(Qt_Widgets_QSpinBox, QSpinBox, setValue);

QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QSpinBox, QSpinBox, onTextChanged, textChanged);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QSpinBox, QSpinBox, onValueChanged, valueChanged);
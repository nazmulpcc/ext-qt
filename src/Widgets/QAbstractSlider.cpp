extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QAbstractSlider>

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, hasTracking);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, invertedAppearance);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, invertedControls);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, isSliderDown);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, maximum);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, minimum);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, orientation);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, pageStep);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractSlider, QAbstractSlider, setInvertedAppearance);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractSlider, QAbstractSlider, setInvertedControls);
QT_METHOD_FORWARD_INT(Qt_Widgets_QAbstractSlider, QAbstractSlider, setMaximum);
QT_METHOD_FORWARD_INT(Qt_Widgets_QAbstractSlider, QAbstractSlider, setMinimum);
QT_METHOD_FORWARD_INT(Qt_Widgets_QAbstractSlider, QAbstractSlider, setPageStep);
QT_METHOD_FORWARD_INT(Qt_Widgets_QAbstractSlider, QAbstractSlider, setSingleStep);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractSlider, QAbstractSlider, setSliderDown);
QT_METHOD_FORWARD_INT(Qt_Widgets_QAbstractSlider, QAbstractSlider, setSliderPosition);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractSlider, QAbstractSlider, setTracking);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, singleStep);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, sliderPosition);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QAbstractSlider, QAbstractSlider, triggerAction, QAbstractSlider::SliderAction);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, value);

QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QAbstractSlider, QAbstractSlider, setOrientation, Qt::Orientation);

ZEND_METHOD(Qt_Widgets_QAbstractSlider, setRange)
{
    zend_long min, max;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(min)
    Z_PARAM_LONG(max)
    ZEND_PARSE_PARAMETERS_END();
    QT_Object_P(ZEND_THIS, QAbstractSlider)->native->setRange(min, max);
}

QT_METHOD_FORWARD_INT(Qt_Widgets_QAbstractSlider, QAbstractSlider, setValue);

QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, onActionTriggered, actionTriggered);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, onRangeChanged, rangeChanged);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, onSliderMoved, sliderMoved);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, onSliderPressed, sliderPressed);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, onSliderReleased, sliderReleased);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractSlider, QAbstractSlider, onValueChanged, valueChanged);
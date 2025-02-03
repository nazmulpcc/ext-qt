extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QStackedWidget>

ZEND_METHOD(Qt_Widgets_QStackedWidget, __construct)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native = new QStackedWidget(parent_zval ? QT_Object_P(parent_zval, QWidget)->native : nullptr);
}

QT_METHOD_FORWARD_NATIVE_P(Qt_Widgets_QStackedWidget, QStackedWidget, addWidget, QWidget, ce_widget_QWidget)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QStackedWidget, QStackedWidget, count)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QStackedWidget, QStackedWidget, currentIndex)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QStackedWidget, QStackedWidget, currentWidget)

ZEND_METHOD(Qt_Widgets_QStackedWidget, indexOf)
{
    zval *widget_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(widget_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    RETURN_LONG(QT_Object_P(ZEND_THIS, QStackedWidget)->native->indexOf(QT_Object_P(widget_zval, QWidget)->native));
}

ZEND_METHOD(Qt_Widgets_QStackedWidget, insertWidget)
{
    zend_long index;
    zval *widget_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(index)
    Z_PARAM_OBJECT_OF_CLASS(widget_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    QT_Object_P(ZEND_THIS, QStackedWidget)->native->insertWidget(index, QT_Object_P(widget_zval, QWidget)->native);
}

QT_METHOD_FORWARD_NATIVE_P(Qt_Widgets_QStackedWidget, QStackedWidget, removeWidget, QWidget, ce_widget_QWidget)
QT_METHOD_FORWARD_INT(Qt_Widgets_QStackedWidget, QStackedWidget, setCurrentIndex)
QT_METHOD_FORWARD_NATIVE_P(Qt_Widgets_QStackedWidget, QStackedWidget, setCurrentWidget, QWidget, ce_widget_QWidget)

ZEND_METHOD(Qt_Widgets_QStackedWidget, widget)
{
    zend_long index;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(index)
    ZEND_PARSE_PARAMETERS_END();

    QWidget *widget = QT_Object_P(ZEND_THIS, QStackedWidget)->native->widget(index);
    qt_container_t<QWidget> *container = (qt_container_t<QWidget> *)zend_object_alloc(sizeof(qt_container_t<QWidget>), ce_widget_QWidget);
    zend_object_std_init(&container->std, ce_widget_QWidget);
    object_properties_init(&container->std, ce_widget_QWidget);
    container->native = widget;
    ZVAL_OBJ(return_value, &container->std);
}

QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QStackedWidget, QStackedWidget, onCurrentChanged, currentChanged)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QStackedWidget, QStackedWidget, onWidgetRemoved, widgetRemoved)
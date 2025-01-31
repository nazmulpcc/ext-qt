extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QWidget>
#include <QtWidgets/QLayout>

ZEND_METHOD(Qt_Widgets_QLayout, addWidget)
{
    zval *widget_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(widget_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QLayout);
    auto *widget_container = QT_Object_P(widget_zval, QWidget);

    container->native->addWidget(widget_container->native);
}
ZEND_METHOD(Qt_Widgets_QLayout, removeWidget)
{
    zval *widget_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(widget_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QLayout);
    auto *widget_container = QT_Object_P(widget_zval, QWidget);
    container->native->removeWidget(widget_container->native);
}
ZEND_METHOD(Qt_Widgets_QLayout, setSpacing)
{
    zend_long spacing;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(spacing)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QLayout);
    container->native->setSpacing(spacing);
}

ZEND_METHOD(Qt_Widgets_QLayout, spacing)
{
    auto *container = QT_Object_P(ZEND_THIS, QLayout);
    RETURN_LONG(container->native->spacing());
}

extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QWidget>
#include <QtWidgets/QBoxLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

ZEND_METHOD(Qt_Widgets_QBoxLayout, __construct)
{
    zend_long direction;
    zval *parent_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(direction)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QBoxLayout);
    container->native = new QBoxLayout(static_cast<QBoxLayout::Direction>(direction));
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QWidget);
        container->native->setParent(parent_container->native);
    }
}
ZEND_METHOD(Qt_Widgets_QBoxLayout, addStretch)
{
    zend_long stretch = 0;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(stretch)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QBoxLayout);
    container->native->addStretch(stretch);
}
ZEND_METHOD(Qt_Widgets_QBoxLayout, addSpacing)
{
    zend_long size;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(size)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QBoxLayout);
    container->native->addSpacing(size);
}
ZEND_METHOD(Qt_Widgets_QBoxLayout, setDirection)
{
    zend_long direction;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(direction)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QBoxLayout);
    container->native->setDirection(static_cast<QBoxLayout::Direction>(direction));
}

ZEND_METHOD(Qt_Widgets_QHBoxLayout, __construct)
{
    zval *parent_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QHBoxLayout);
    container->native = new QHBoxLayout;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QWidget);
        container->native->setParent(parent_container->native);
    }
}
ZEND_METHOD(Qt_Widgets_QVBoxLayout, __construct)
{
    zval *parent_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QVBoxLayout);
    container->native = new QVBoxLayout;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QWidget);
        container->native->setParent(parent_container->native);
    }
}
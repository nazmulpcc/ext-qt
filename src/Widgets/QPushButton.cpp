extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QPushButton>

ZEND_METHOD(Qt_Widgets_QPushButton, __construct)
{
    zval *parent_zv = nullptr;
    zend_string *text = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_STR_OR_NULL(text)
    Z_PARAM_OBJECT_OF_CLASS(parent_zv, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QPushButton);
    container->native = new QPushButton();
    if (parent_zv)
    {
        auto *parent = QT_Object_P(parent_zv, QWidget);
        container->native->setParent(parent->native);
    }
    if (text)
    {
        container->native->setText(text->val);
    }
}
QT_METHOD_FORWARD_STRING(Qt_Widgets_QPushButton, QPushButton, setText)

ZEND_METHOD(Qt_Widgets_QPushButton, text)
{
    ZEND_PARSE_PARAMETERS_NONE();

    auto *container = QT_Object_P(getThis(), QPushButton);
    auto text = container->native->text();
    zval retval;
    qt_cpp_to_zval(&retval, text);
    RETURN_ZVAL(&retval, 0, 1);
}

QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QPushButton, QPushButton, onClicked, clicked)

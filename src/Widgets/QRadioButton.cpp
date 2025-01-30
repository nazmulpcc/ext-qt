extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QRadioButton>

ZEND_METHOD(Qt_Widgets_QRadioButton, __construct)
{
    zval *parent_zv = nullptr;
    zend_string *text = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_STR_OR_NULL(text)
    Z_PARAM_OBJECT_OF_CLASS(parent_zv, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QRadioButton);
    container->native = new QRadioButton();
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

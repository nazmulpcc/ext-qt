extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QLabel>

ZEND_METHOD(Qt_Widgets_QLabel, __construct)
{
    zval *parent_zval = nullptr;
    zend_string *text = nullptr;
    zend_long windowFlags = 0;
    bool has_flags = false;

    ZEND_PARSE_PARAMETERS_START(0, 3)
    Z_PARAM_OPTIONAL
    Z_PARAM_STR_OR_NULL(text)
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    Z_PARAM_LONG_OR_NULL(windowFlags, has_flags)
    ZEND_PARSE_PARAMETERS_END();

    QWidget *parent = nullptr;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QLabel);
        parent = parent_container->native;
    }

    auto *container = QT_Object_P(ZEND_THIS, QLabel);
    container->native = new QLabel;
    if (parent != nullptr)
    {
        container->native->setParent(parent);
    }
    if (has_flags)
    {
        container->native->setWindowFlags(static_cast<Qt::WindowType>(windowFlags));
    }
    if (text)
    {
        container->native->setText(text->val);
    }
}
ZEND_METHOD(Qt_Widgets_QLabel, setText)
{
    zend_string *text = nullptr;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_STR(text)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QLabel);
    container->native->setText(text->val);
}
ZEND_METHOD(Qt_Widgets_QLabel, text)
{
    ZEND_PARSE_PARAMETERS_NONE();
    auto *container = QT_Object_P(ZEND_THIS, QLabel);
    RETURN_STRING(container->native->text().toStdString().c_str());
}
extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QMenu>

ZEND_METHOD(Qt_Widgets_QMenu, __construct)
{
    zend_string *text;
    zval *parent_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_STR(text)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    QWidget *parent = nullptr;
    if (parent_zval)
    {
        parent = QT_Object_P(parent_zval, QWidget)->native;
    }
    auto *container = QT_Object_P(ZEND_THIS, QMenu);
    container->native = new QMenu(QString::fromUtf8(text->val, text->len), parent);
}
ZEND_METHOD(Qt_Widgets_QMenu, addMenu)
{
    zend_string *text;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_STR(text)
    ZEND_PARSE_PARAMETERS_END();
    auto *container = QT_Object_P(ZEND_THIS, QMenu);
    auto menu = container->native->addMenu(QString::fromUtf8(text->val, text->len));
    RETURN_QT(menu);
}
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QMenu, QMenu, title)
QT_METHOD_FORWARD_STRING(Qt_Widgets_QMenu, QMenu, setTitle);

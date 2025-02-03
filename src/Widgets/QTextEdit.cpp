extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QTextEdit>

ZEND_METHOD(Qt_Widgets_QTextEdit, __construct)
{
    zval *parent_zv = nullptr;
    zend_string *text = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_STR_OR_NULL(text)
    Z_PARAM_OBJECT_OF_CLASS(parent_zv, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QTextEdit);
    container->native = new QTextEdit();
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

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, acceptRichText);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, alignment);
ZEND_METHOD(Qt_Widgets_QTextEdit, anchorAt)
{
    zend_long x, y;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(x)
    Z_PARAM_LONG(y)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QTextEdit);
    auto anchor = container->native->anchorAt(QPoint(x, y));
    RETURN_STRING(anchor.toUtf8().data());
}
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, autoFormatting);
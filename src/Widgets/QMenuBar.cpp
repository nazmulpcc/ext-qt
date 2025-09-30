extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>

ZEND_METHOD(Qt_Widgets_QMenuBar, __construct)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    QWidget *parent = nullptr;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QWidget);
        parent = parent_container->native;
    }

    auto *container = QT_Object_P(ZEND_THIS, QMenuBar);
    container->native = new QMenuBar(parent);
}
ZEND_METHOD(Qt_Widgets_QMenuBar, addMenu)
{
    zend_string *title;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_STR(title)
    ZEND_PARSE_PARAMETERS_END();
    auto *container = QT_Object_P(ZEND_THIS, QMenuBar);
    auto menu = container->native->addMenu(QString::fromUtf8(title->val, title->len));
    RETURN_QT(menu);
}

QT_METHOD_FORWARD(Qt_Widgets_QMenuBar, QMenuBar, clear);
extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

ZEND_METHOD(Qt_Widgets_QMainWindow, __construct)
{
    zval *parent_zval = nullptr;
    zend_long windowFlags = 0;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    Z_PARAM_LONG(windowFlags)
    ZEND_PARSE_PARAMETERS_END();

    QWidget *parent = nullptr;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QWidget);
        parent = parent_container->native;
    }

    auto *container = QT_Object_P(ZEND_THIS, QMainWindow);
    container->native = new QMainWindow(parent, static_cast<Qt::WindowType>(windowFlags));
}

QT_METHOD_FORWARD_NATIVE_P_REF(Qt_Widgets_QMainWindow, QMainWindow, setCentralWidget, QWidget, ce_widget_QWidget, 1)
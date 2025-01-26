extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QWidget>
#include <QtCore/QString>

ZEND_METHOD(Qt_Widgets_QWidget, __construct)
{
    zval *parent_zval = nullptr;
    zend_long windowFlags = 0;
    bool has_flags = false;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    Z_PARAM_LONG_OR_NULL(windowFlags, has_flags)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native = new QWidget;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QWidget);
        container->native->setParent(parent_container->native);
    }
    if (has_flags)
    {
        container->native->setWindowFlags(static_cast<Qt::WindowType>(windowFlags));
    }
}

QT_METHOD_FORWARD_STRING(Qt_Widgets_QWidget, QWidget, setWindowTitle)

QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, show)
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, showFullScreen)
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, showMaximized)
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, showMinimized)
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, showNormal)

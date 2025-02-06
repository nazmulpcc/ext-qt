extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QWidget>
#include <QtWidgets/QLayout>

QT_METHOD_FORWARD_NATIVE_P_REF(Qt_Widgets_QLayout, QLayout, addWidget, QWidget, ce_widget_QWidget, 1)
QT_METHOD_FORWARD_NATIVE_P_REF(Qt_Widgets_QLayout, QLayout, removeWidget, QWidget, ce_widget_QWidget, -1)
QT_METHOD_FORWARD_INT(Qt_Widgets_QLayout, QLayout, setSpacing)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLayout, QLayout, spacing)
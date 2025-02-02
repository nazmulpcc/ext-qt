extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QAbstractScrollArea>

ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, addScrollBarWidget)
{
    zval *zv;
    zend_long alignment;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_OBJECT_OF_CLASS(zv, ce_widget_QWidget)
    Z_PARAM_LONG(alignment)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QAbstractScrollArea);
    container->native->addScrollBarWidget(QT_Object_P(zv, QWidget)->native, static_cast<Qt::AlignmentFlag>(alignment));
}
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, horizontalScrollBarPolicy);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, maximumViewportSize);
QT_METHOD_FORWARD_NATIVE_P(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, setCornerWidget, QWidget, ce_widget_QWidget);
QT_METHOD_FORWARD_NATIVE_P(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, setHorizontalScrollBar, QScrollBar, ce_qscrollbar);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, setHorizontalScrollBarPolicy, Qt::ScrollBarPolicy);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, setSizeAdjustPolicy, QAbstractScrollArea::SizeAdjustPolicy);
QT_METHOD_FORWARD_NATIVE_P(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, setVerticalScrollBar, QScrollBar, ce_qscrollbar);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, setVerticalScrollBarPolicy, Qt::ScrollBarPolicy);
QT_METHOD_FORWARD_NATIVE_P(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, setViewport, QWidget, ce_widget_QWidget);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, sizeAdjustPolicy);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractScrollArea, QAbstractScrollArea, verticalScrollBarPolicy);
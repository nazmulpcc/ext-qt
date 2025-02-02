extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QFrame>

ZEND_METHOD(Qt_Widgets_QFrame, __construct)
{
    zval *parent_zval = nullptr;
    zend_long flags = 0;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    Z_PARAM_LONG(flags)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native = new QFrame(parent_zval ? QT_Object_P(parent_zval, QWidget)->native : nullptr, static_cast<Qt::WindowType>(flags));
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QFrame, QFrame, frameRect)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QFrame, QFrame, frameShadow);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QFrame, QFrame, frameShape);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QFrame, QFrame, frameStyle);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QFrame, QFrame, frameWidth);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QFrame, QFrame, lineWidth);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QFrame, QFrame, midLineWidth);
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QFrame, QFrame, setFrameRect, QRect, ce_qrect);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QFrame, QFrame, setFrameShadow, QFrame::Shadow);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QFrame, QFrame, setFrameShape, QFrame::Shape);
QT_METHOD_FORWARD_INT(Qt_Widgets_QFrame, QFrame, setFrameStyle);
QT_METHOD_FORWARD_INT(Qt_Widgets_QFrame, QFrame, setLineWidth);
QT_METHOD_FORWARD_INT(Qt_Widgets_QFrame, QFrame, setMidLineWidth);
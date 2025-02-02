extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QScrollBar>

ZEND_METHOD(Qt_Widgets_QScrollBar, __construct)
{
    zend_long orientation = 2;
    zval *parent_zval = NULL;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(orientation)
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto container = QT_Object_P(ZEND_THIS, QScrollBar);

    container->native = new QScrollBar(static_cast<Qt::Orientation>(orientation), parent_zval ? QT_Object_P(parent_zval, QWidget)->native : nullptr);
}
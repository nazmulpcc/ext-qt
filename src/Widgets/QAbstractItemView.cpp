extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QAbstractItemView>

ZEND_METHOD(Qt_Widgets_QAbstractItemView, addScrollBarWidget)
{
    zval *zv;
    zend_long alignment;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_OBJECT_OF_CLASS(zv, ce_widget_QWidget)
    Z_PARAM_LONG(alignment)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QAbstractItemView);
    container->native->addScrollBarWidget(QT_Object_P(zv, QWidget)->native, static_cast<Qt::AlignmentFlag>(alignment));
}
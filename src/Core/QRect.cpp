extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QRect>

ZEND_METHOD(Qt_Core_QRect, __construct)
{
    zend_long x, y, width, height;

    ZEND_PARSE_PARAMETERS_START(4, 4)
    Z_PARAM_LONG(x)
    Z_PARAM_LONG(y)
    Z_PARAM_LONG(width)
    Z_PARAM_LONG(height)
    ZEND_PARSE_PARAMETERS_END();

    auto container = QT_Object_P(getThis(), QRect);
    container->native = new QRect(x, y, width, height);
}
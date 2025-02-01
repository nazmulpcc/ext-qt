extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QSize>

ZEND_METHOD(Qt_Core_QSize, __construct)
{
    zend_long width, height;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(width)
    Z_PARAM_LONG(height)
    ZEND_PARSE_PARAMETERS_END();

    auto container = QT_Object_P(getThis(), QSize);
    container->native = new QSize(width, height);
}
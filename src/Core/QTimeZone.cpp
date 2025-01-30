extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QTimeZone>

ZEND_METHOD(Qt_Core_QTimeZone, __construct)
{
    zend_long offsetSeconds;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(offsetSeconds)
    ZEND_PARSE_PARAMETERS_END();

    auto container = QT_Object_P(getThis(), QTimeZone);
    container->native = new QTimeZone(offsetSeconds);
}
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QTimeZone, QTimeZone, isValid)

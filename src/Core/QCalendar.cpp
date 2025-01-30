extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QCalendar>

ZEND_METHOD(Qt_Core_QCalendar, __construct)
{
    zend_long system;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(system)
    ZEND_PARSE_PARAMETERS_END();

    auto container = QT_Object_P(getThis(), QCalendar);
    container->native = new QCalendar(static_cast<QCalendar::System>(system));
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QCalendar, QCalendar, isValid);

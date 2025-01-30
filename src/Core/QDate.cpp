extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QDate>

ZEND_METHOD(Qt_Core_QDate, __construct)
{
    zend_long year, month, day;

    ZEND_PARSE_PARAMETERS_START(3, 3)
    Z_PARAM_LONG(year)
    Z_PARAM_LONG(month)
    Z_PARAM_LONG(day)
    ZEND_PARSE_PARAMETERS_END();

    auto container = QT_Object_P(getThis(), QDate);
    container->native = new QDate(year, month, day);
}
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QDate, QDate, day);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QDate, QDate, isNull);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QDate, QDate, isValid);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QDate, QDate, month);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QDate, QDate, year);

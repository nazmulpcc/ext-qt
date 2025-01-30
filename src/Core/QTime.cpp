extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QTime>

ZEND_METHOD(Qt_Core_QTime, __construct)
{
    zend_long h;
    zend_long m;
    zend_long s = 0;
    zend_long ms = 0;

    ZEND_PARSE_PARAMETERS_START(2, 4)
    Z_PARAM_LONG(h)
    Z_PARAM_LONG(m)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(s)
    Z_PARAM_LONG(ms)
    ZEND_PARSE_PARAMETERS_END();

    auto container = QT_Object_P(getThis(), QTime);
    container->native = new QTime(h, m, s, ms);
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QTime, QTime, hour);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QTime, QTime, isNull);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QTime, QTime, isValid);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QTime, QTime, minute);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QTime, QTime, msec);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QTime, QTime, second);

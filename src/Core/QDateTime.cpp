extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QDateTime>

ZEND_METHOD(Qt_Core_QDateTime, __construct)
{
    zval *date, *time, *timeZone;
    zend_long system;
    ZEND_PARSE_PARAMETERS_START(3, 3)
    Z_PARAM_OBJECT_OF_CLASS(date, ce_qdate)
    Z_PARAM_OBJECT_OF_CLASS(time, ce_qtime)
    Z_PARAM_OBJECT_OF_CLASS(timeZone, ce_qtimezone)
    ZEND_PARSE_PARAMETERS_END();

    auto container = QT_Object_P(getThis(), QDateTime);
    auto timezone = QT_Object_P(timeZone, QTimeZone);
    container->native = new QDateTime(*QT_Object_P(date, QDate)->native, *QT_Object_P(time, QTime)->native, *timezone->native);
}

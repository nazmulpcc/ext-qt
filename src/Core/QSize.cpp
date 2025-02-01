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

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QSize, QSize, height);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QSize, QSize, isEmpty);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QSize, QSize, isNull);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QSize, QSize, isValid);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QSize, QSize, width);
extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QModelIndex>

ZEND_METHOD(Qt_Core_QModelIndex, __construct)
{
    ZEND_PARSE_PARAMETERS_NONE();
    auto *container = QT_Object_P(getThis(), QModelIndex);
    container->native = new QModelIndex();
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QModelIndex, QModelIndex, column)

ZEND_METHOD(Qt_Core_QModelIndex, data)
{
    zend_long role;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(role)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QModelIndex);
    auto data = container->native->data(role);
    RETURN_QT(&data);
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QModelIndex, QModelIndex, isValid);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QModelIndex, QModelIndex, model);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QModelIndex, QModelIndex, parent);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QModelIndex, QModelIndex, row);

ZEND_METHOD(Qt_Core_QModelIndex, sibling)
{
    zend_long row, column;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(row)
    Z_PARAM_LONG(column)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QModelIndex);
    auto sibling = container->native->sibling(row, column);
    RETURN_QT(&sibling);
}

ZEND_METHOD(Qt_Core_QModelIndex, siblingAtColumn)
{
    zend_long column;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(column)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QModelIndex);
    auto sibling = container->native->siblingAtColumn(column);
    RETURN_QT(&sibling);
}

ZEND_METHOD(Qt_Core_QModelIndex, siblingAtRow)
{
    zend_long row;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(row)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QModelIndex);
    auto sibling = container->native->siblingAtRow(row);
    RETURN_QT(&sibling);
}
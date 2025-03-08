#include "PhpQAbstractItemModel.h"
#include <QtCore/QAbstractTableModel>
#include <QtCore/QModelIndex>
#include <QtCore/QVariant>

ZEND_METHOD(Qt_Core_QAbstractTableModel, __construct)
{
    zval *parent = nullptr;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent, ce_qobject)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractTableModel);
    container->native = new PhpQAbstractTableModel();
    container->native->std = &container->std;
    container->native->setParent(parent ? QT_Object_P(parent, QObject)->native : nullptr);
}

ZEND_METHOD(Qt_Core_QAbstractTableModel, flags)
{
    zval *index = nullptr;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(index, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractTableModel);
    RETURN_LONG(container->native->nativeFlags(*QT_Object_P(index, QModelIndex)->native));
}

ZEND_METHOD(Qt_Core_QAbstractTableModel, index)
{
    zend_long row, column;
    zval *parent = nullptr;
    ZEND_PARSE_PARAMETERS_START(2, 3)
    Z_PARAM_LONG(row)
    Z_PARAM_LONG(column)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractTableModel);
    RETURN_QT(container->native->nativeIndex(row, column, parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

ZEND_METHOD(Qt_Core_QAbstractTableModel, sibling)
{
    zend_long row, column;
    zval *index = nullptr;
    ZEND_PARSE_PARAMETERS_START(3, 3)
    Z_PARAM_LONG(row)
    Z_PARAM_LONG(column)
    Z_PARAM_OBJECT_OF_CLASS(index, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractTableModel);
    RETURN_QT(container->native->sibling(row, column, *QT_Object_P(index, QModelIndex)->native));
}

ZEND_METHOD(Qt_Core_QAbstractTableModel, parent)
{
    // this is just to satisfy the interface
    // In reality, QT always calls QAbstractTableModel::parent private method
}
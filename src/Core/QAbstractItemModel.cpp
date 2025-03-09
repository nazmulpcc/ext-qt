#include <QtCore/QAbstractItemModel>
#include <QtCore/QModelIndex>
#include <QtCore/QVariant>
#include "PhpQAbstractItemModel.h"

ZEND_METHOD(Qt_Core_QAbstractItemModel, __construct)
{
    zval *parent = nullptr;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent, ce_qobject)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    container->native = new PhpQAbstractItemModel();
    container->native->std = &container->std;
    container->native->setParent(parent ? QT_Object_P(parent, QObject)->native : nullptr);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, buddy)
{
    zval *index;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(index, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    auto buddy = container->native->buddy(*QT_Object_P(index, QModelIndex)->native);
    RETURN_QT(buddy);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, canFetchMore)
{
    zval *parent;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->canFetchMore(*QT_Object_P(parent, QModelIndex)->native));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, checkIndex)
{
    zval *index;
    zend_long options = 0;

    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_OBJECT_OF_CLASS(index, ce_qmodelindex)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(options)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->checkIndex(*QT_Object_P(index, QModelIndex)->native, static_cast<QAbstractItemModel::CheckIndexOption>(options)));
}

QT_METHOD_FORWARD_NATIVE(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, clearItemData, QModelIndex, ce_qmodelindex);
QT_METHOD_FORWARD_NATIVE(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, fetchMore, QModelIndex, ce_qmodelindex);

ZEND_METHOD(Qt_Core_QAbstractItemModel, flags)
{
    RETURN_LONG(Qt::NoItemFlags);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, hasChildren)
{
    zval *parent = nullptr;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->hasChildren(parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, hasIndex)
{
    zend_long row, column;
    zval *parent = nullptr;

    ZEND_PARSE_PARAMETERS_START(2, 3)
    Z_PARAM_LONG(row)
    Z_PARAM_LONG(column)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->hasIndex(row, column, parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, headerData)
{
    zend_long section, orientation, role = 0;
    ZEND_PARSE_PARAMETERS_START(2, 3)
    Z_PARAM_LONG(section)
    Z_PARAM_LONG(orientation)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(role)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_QT(container->native->nativeHeaderData(section, static_cast<Qt::Orientation>(orientation), static_cast<Qt::ItemDataRole>(role)));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, insertColumn)
{
    zend_long column;
    zval *parent = nullptr;

    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_LONG(column)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->insertColumn(column, parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, insertColumns)
{
    zend_long column, count;
    zval *parent = nullptr;

    ZEND_PARSE_PARAMETERS_START(2, 3)
    Z_PARAM_LONG(column)
    Z_PARAM_LONG(count)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->insertColumns(column, count, parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, insertRow)
{
    zend_long row;
    zval *parent = nullptr;

    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_LONG(row)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->insertRow(row, parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, insertRows)
{
    zend_long row, count;
    zval *parent = nullptr;

    ZEND_PARSE_PARAMETERS_START(2, 3)
    Z_PARAM_LONG(row)
    Z_PARAM_LONG(count)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->insertRows(row, count, parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

// ZEND_METHOD(Qt_Core_QAbstractItemModel, moveColumn);
// ZEND_METHOD(Qt_Core_QAbstractItemModel, moveColumns);
// ZEND_METHOD(Qt_Core_QAbstractItemModel, moveRow);
// ZEND_METHOD(Qt_Core_QAbstractItemModel, moveRows);
ZEND_METHOD(Qt_Core_QAbstractItemModel, removeColumn)
{
    zend_long column;
    zval *parent = nullptr;

    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_LONG(column)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->removeColumn(column, parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, removeColumns)
{
    zend_long column, count;
    zval *parent = nullptr;

    ZEND_PARSE_PARAMETERS_START(2, 3)
    Z_PARAM_LONG(column)
    Z_PARAM_LONG(count)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->removeColumns(column, count, parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, removeRow)
{
    zend_long row;
    zval *parent = nullptr;

    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_LONG(row)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->removeRow(row, parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, removeRows)
{
    zend_long row, count;
    zval *parent = nullptr;

    ZEND_PARSE_PARAMETERS_START(2, 3)
    Z_PARAM_LONG(row)
    Z_PARAM_LONG(count)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->removeRows(row, count, parent ? *QT_Object_P(parent, QModelIndex)->native : QModelIndex()));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, setData)
{
    RETURN_BOOL(false);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, setHeaderData)
{
    zend_long section, orientation, role = 2;
    zval *value;
    ZEND_PARSE_PARAMETERS_START(3, 4)
    Z_PARAM_LONG(section)
    Z_PARAM_LONG(orientation)
    Z_PARAM_ZVAL(value)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(role)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_BOOL(container->native->setHeaderData(section, static_cast<Qt::Orientation>(orientation), zval_to_qvariant(value), static_cast<Qt::ItemDataRole>(role)));
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, sibling)
{
    zend_long row, column;
    zval *index;
    ZEND_PARSE_PARAMETERS_START(2, 3)
    Z_PARAM_LONG(row)
    Z_PARAM_LONG(column)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(index, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    auto sibling = container->native->sibling(row, column, index ? *QT_Object_P(index, QModelIndex)->native : QModelIndex());
    RETURN_QT(sibling);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, sort)
{
    // @todo: use custom qabstractitemmodel to implement this method
}

QT_METHOD_FORWARD(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, revert);
QT_METHOD_FORWARD(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, submit);

ZEND_METHOD(Qt_Core_QAbstractItemModel, dataChanged)
{
    zval *topLeft, *bottomRight;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_OBJECT_OF_CLASS(topLeft, ce_qmodelindex)
    Z_PARAM_OBJECT_OF_CLASS(bottomRight, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    container->native->dataChanged(*QT_Object_P(topLeft, QModelIndex)->native, *QT_Object_P(bottomRight, QModelIndex)->native);
}

QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onColumnsAboutToBeInserted, columnsAboutToBeInserted);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onColumnsAboutToBeMoved, columnsAboutToBeMoved);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onColumnsAboutToBeRemoved, columnsAboutToBeRemoved);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onColumnsInserted, columnsInserted);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onColumnsMoved, columnsMoved);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onColumnsRemoved, columnsRemoved);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onDataChanged, dataChanged);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onHeaderDataChanged, headerDataChanged);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onLayoutAboutToBeChanged, layoutAboutToBeChanged);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onLayoutChanged, layoutChanged);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onModelAboutToBeReset, modelAboutToBeReset);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onModelReset, modelReset);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onRowsAboutToBeInserted, rowsAboutToBeInserted);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onRowsAboutToBeMoved, rowsAboutToBeMoved);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onRowsAboutToBeRemoved, rowsAboutToBeRemoved);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onRowsInserted, rowsInserted);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onRowsMoved, rowsMoved);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, onRowsRemoved, rowsRemoved);

ZEND_METHOD(Qt_Core_QAbstractItemModel, beginInsertColumns)
{
    zval *parent;
    zend_long first, last;
    ZEND_PARSE_PARAMETERS_START(3, 3)
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    Z_PARAM_LONG(first)
    Z_PARAM_LONG(last)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    container->native->beginInsertColumns(*QT_Object_P(parent, QModelIndex)->native, first, last);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, beginInsertRows)
{
    zval *parent;
    zend_long first, last;
    ZEND_PARSE_PARAMETERS_START(3, 3)
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    Z_PARAM_LONG(first)
    Z_PARAM_LONG(last)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    container->native->beginInsertRows(*QT_Object_P(parent, QModelIndex)->native, first, last);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, beginMoveColumns)
{
    zval *sourceParent, *destinationParent;
    zend_long sourceFirst, sourceLast, destinationColumn;
    ZEND_PARSE_PARAMETERS_START(5, 5)
    Z_PARAM_OBJECT_OF_CLASS(sourceParent, ce_qmodelindex)
    Z_PARAM_LONG(sourceFirst)
    Z_PARAM_LONG(sourceLast)
    Z_PARAM_OBJECT_OF_CLASS(destinationParent, ce_qmodelindex)
    Z_PARAM_LONG(destinationColumn)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    container->native->beginMoveColumns(*QT_Object_P(sourceParent, QModelIndex)->native, sourceFirst, sourceLast, *QT_Object_P(destinationParent, QModelIndex)->native, destinationColumn);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, beginMoveRows)
{
    zval *sourceParent, *destinationParent;
    zend_long sourceFirst, sourceLast, destinationRow;
    ZEND_PARSE_PARAMETERS_START(5, 5)
    Z_PARAM_OBJECT_OF_CLASS(sourceParent, ce_qmodelindex)
    Z_PARAM_LONG(sourceFirst)
    Z_PARAM_LONG(sourceLast)
    Z_PARAM_OBJECT_OF_CLASS(destinationParent, ce_qmodelindex)
    Z_PARAM_LONG(destinationRow)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    container->native->beginMoveRows(*QT_Object_P(sourceParent, QModelIndex)->native, sourceFirst, sourceLast, *QT_Object_P(destinationParent, QModelIndex)->native, destinationRow);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, beginRemoveColumns)
{
    zval *parent;
    zend_long first, last;
    ZEND_PARSE_PARAMETERS_START(3, 3)
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    Z_PARAM_LONG(first)
    Z_PARAM_LONG(last)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    container->native->beginRemoveColumns(*QT_Object_P(parent, QModelIndex)->native, first, last);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, beginRemoveRows)
{
    zval *parent;
    zend_long first, last;
    ZEND_PARSE_PARAMETERS_START(3, 3)
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qmodelindex)
    Z_PARAM_LONG(first)
    Z_PARAM_LONG(last)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    container->native->beginRemoveRows(*QT_Object_P(parent, QModelIndex)->native, first, last);
}

QT_METHOD_FORWARD(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, beginResetModel);

ZEND_METHOD(Qt_Core_QAbstractItemModel, changePersistentIndex)
{
    zval *from, *to;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_OBJECT_OF_CLASS(from, ce_qmodelindex)
    Z_PARAM_OBJECT_OF_CLASS(to, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    container->native->changePersistentIndex(*QT_Object_P(from, QModelIndex)->native, *QT_Object_P(to, QModelIndex)->native);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, createIndex)
{
    zend_long row, column;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(row)
    Z_PARAM_LONG(column)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    RETURN_QT(container->native->createIndex(row, column));
}

QT_METHOD_FORWARD(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, endInsertColumns);
QT_METHOD_FORWARD(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, endInsertRows);
QT_METHOD_FORWARD(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, endMoveColumns);
QT_METHOD_FORWARD(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, endMoveRows);
QT_METHOD_FORWARD(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, endRemoveColumns);
QT_METHOD_FORWARD(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, endRemoveRows);
QT_METHOD_FORWARD(Qt_Core_QAbstractItemModel, PhpQAbstractItemModel, endResetModel);
// ZEND_METHOD(Qt_Core_QAbstractItemModel, persistentIndexList);

ZEND_METHOD(Qt_Core_QAbstractItemModel, rowCount)
{
    ZVAL_LONG(return_value, 0);
}

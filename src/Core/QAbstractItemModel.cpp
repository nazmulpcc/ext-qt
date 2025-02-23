#include "./PhpQAbstractItemModel.h"
#include <QtCore/QAbstractItemModel>
#include <QtCore/QModelIndex>
#include <QtCore/QVariant>
#include "PhpQAbstractItemModel.h"

QVariant zval_to_qvariant(zval *zv);

int PhpQAbstractItemModel::rowCount(const QModelIndex &parent) const
{
    zval retval, zv_parent;
    qt_cpp_to_zval(&zv_parent, parent);
    zend_call_method_with_1_params(this->std, this->std->ce, nullptr, "rowCount", &retval, &zv_parent);
    return (int)zval_get_long(&retval);
}

Qt::ItemFlags PhpQAbstractItemModel::flags(const QModelIndex &index) const
{
    zval retval, zv_index;
    qt_cpp_to_zval(&zv_index, index);
    zend_call_method_with_1_params(this->std, this->std->ce, nullptr, "flags", &retval, &zv_index);
    return (Qt::ItemFlags)(int)zval_get_long(&retval);
}

int PhpQAbstractItemModel::columnCount(const QModelIndex &parent) const
{
    zval retval, zv_parent;
    qt_cpp_to_zval(&zv_parent, parent);
    zend_call_method_with_1_params(this->std, this->std->ce, nullptr, "columnCount", &retval, &zv_parent);
    return (int)zval_get_long(&retval);
}

QModelIndex PhpQAbstractItemModel::index(int row, int column, const QModelIndex &parent) const
{
    zval retval, zv_row, zv_column, zv_parent;
    qt_cpp_to_zval(&zv_row, row);
    qt_cpp_to_zval(&zv_column, column);
    zend_call_method_with_2_params(this->std, this->std->ce, nullptr, "index", &retval, &zv_row, &zv_column);
    return *QT_Object_P(&retval, QModelIndex)->native;
}

QModelIndex PhpQAbstractItemModel::parent(const QModelIndex &child) const
{
    return QModelIndex();
}

QVariant PhpQAbstractItemModel::data(const QModelIndex &index, int role) const
{
    zval retval, zv_index, zv_role;
    qt_cpp_to_zval(&zv_index, index);
    qt_cpp_to_zval(&zv_role, role);
    zend_call_method_with_2_params(this->std, this->std->ce, nullptr, "data", &retval, &zv_index, &zv_role);
    return zval_to_qvariant(&retval);
}

bool PhpQAbstractItemModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    Q_UNUSED(role);
    zval zv_index, zv_value, retval;
    qt_cpp_to_zval(&zv_index, index);
    qt_cpp_to_zval(&zv_value, value);
    zend_call_method_with_2_params(this->std, this->std->ce, nullptr, "setData", &retval, &zv_index, &zv_value);

    return zval_is_true(&retval);
}

ZEND_METHOD(Qt_Core_QAbstractItemModel, __construct)
{
    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractItemModel);
    container->native = new PhpQAbstractItemModel();
    container->native->std = &container->std;
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
    RETURN_QT(container->native->headerData(section, static_cast<Qt::Orientation>(orientation), static_cast<Qt::ItemDataRole>(role)));
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
    QModelIndex *index = (QModelIndex *)malloc(sizeof(QModelIndex));
    *index = container->native->createIndex(row, column);
    RETURN_QT(index);
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

QVariant map_array_zval(zval *arr)
{
    if (Z_TYPE_P(arr) != IS_ARRAY)
    {
        return QVariant(); // Or throw an exception, depending on your needs
    }

    HashTable *ht = Z_ARRVAL_P(arr);
    zend_string *key;
    zend_ulong idx;
    zval *value;

    QVariantMap map;
    QVariantList list;
    bool is_sequential = true;
    zend_ulong expected_index = 0;

    ZEND_HASH_FOREACH_KEY_VAL(ht, idx, key, value)
    {
        QVariant qValue = zval_to_qvariant(value);

        if (key)
        {
            // Associative array
            is_sequential = false;
            QString qKey = QString::fromUtf8(key->val, key->len);
            map[qKey] = qValue;
        }
        else
        {
            // Numerical array
            if (idx != expected_index)
            {
                is_sequential = false;
            }
            list.append(qValue);
            expected_index = idx + 1;
        }
    }
    ZEND_HASH_FOREACH_END();

    if (is_sequential)
    {
        return QVariant::fromValue(list);
    }
    else
    {
        return QVariant::fromValue(map);
    }
}

QVariant zval_to_qvariant(zval *zv)
{
    switch (Z_TYPE_P(zv))
    {
    case IS_NULL:
        return QVariant();
    case IS_FALSE:
        return QVariant(false);
    case IS_TRUE:
        return QVariant(true);
    case IS_LONG:
        return QVariant((int)Z_LVAL_P(zv));
    case IS_DOUBLE:
        return QVariant(Z_DVAL_P(zv));
    case IS_STRING:
    {
        zend_string *str = Z_STR_P(zv);
        return QVariant(QString::fromUtf8(str->val, str->len));
    }
    case IS_ARRAY:
        return map_array_zval(zv);
    default:
        return QVariant();
    }
}
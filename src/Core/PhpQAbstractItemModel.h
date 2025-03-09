#ifndef PHP_QABSTRACTITEMMODEL_H
#define PHP_QABSTRACTITEMMODEL_H

extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
#include <zend_interfaces.h>
}
#include "php_qt.h"

#ifdef __cplusplus
#include <QtCore/QObject>
#include <QtCore/QAbstractItemModel>
#include <QtCore/QAbstractTableModel>
#include <QtCore/QModelIndex>
#include <QtCore/QVariant>

template <typename BaseModel>
class PhpQAbstractModel : public BaseModel
{
public:
    zend_object *std = nullptr;

    explicit PhpQAbstractModel(QObject *parent = nullptr)
        : BaseModel(parent) {}

    // Inline implementations common for all model classes
    inline int rowCount(const QModelIndex &parent = QModelIndex()) const override
    {
        zval retval, zv_parent;
        qt_cpp_to_zval(&zv_parent, parent);
        zend_call_method_with_1_params(this->std, this->std->ce, nullptr, "rowCount", &retval, &zv_parent);
        return (int)zval_get_long(&retval);
    }

    inline int columnCount(const QModelIndex &parent = QModelIndex()) const override
    {
        zval retval, zv_parent;
        qt_cpp_to_zval(&zv_parent, parent);
        zend_call_method_with_1_params(this->std, this->std->ce, nullptr, "columnCount", &retval, &zv_parent);
        return (int)zval_get_long(&retval);
    }

    inline QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override
    {
        zval retval, zv_row, zv_column, zv_parent;
        qt_cpp_to_zval(&zv_row, row);
        qt_cpp_to_zval(&zv_column, column);
        qt_cpp_to_zval(&zv_parent, parent);
        zend_call_method_with_2_params(this->std, this->std->ce, nullptr, "index", &retval, &zv_row, &zv_column);
        return *QT_Object_P(&retval, QModelIndex)->native;
    }

    inline QModelIndex nativeIndex(int row, int column, const QModelIndex &parent = QModelIndex()) const
    {
        return BaseModel::index(row, column, parent);
    }

    inline QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override
    {
        zval retval, zv_index, zv_role;
        qt_cpp_to_zval(&zv_index, index);
        qt_cpp_to_zval(&zv_role, role);
        zend_call_method_with_2_params(this->std, this->std->ce, nullptr, "data", &retval, &zv_index, &zv_role);
        return zval_to_qvariant(&retval);
    }

    inline QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override
    {
        zval retval, params[3];
        qt_cpp_to_zval(&params[0], section);
        qt_cpp_to_zval(&params[1], (int)orientation);
        qt_cpp_to_zval(&params[2], role);
        zend_call_method_with_params(this->std, "headerData", &retval, 3, params);
        return zval_to_qvariant(&retval);
    }

    inline QVariant nativeHeaderData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const
    {
        return BaseModel::headerData(section, orientation, role);
    }

    inline Qt::ItemFlags flags(const QModelIndex &index) const override
    {
        zval retval, zv_index;
        qt_cpp_to_zval(&zv_index, index);
        zend_call_method_with_1_params(this->std, this->std->ce, nullptr, "flags", &retval, &zv_index);
        return (Qt::ItemFlags)(int)zval_get_long(&retval);
    }
    inline Qt::ItemFlags nativeFlags(const QModelIndex &index) const
    {
        return BaseModel::flags(index);
    }

    inline bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override
    {
        Q_UNUSED(role);
        zval zv_index, zv_value, retval;
        qt_cpp_to_zval(&zv_index, index);
        qt_cpp_to_zval(&zv_value, value);
        zend_call_method_with_2_params(this->std, this->std->ce, nullptr, "setData", &retval, &zv_index, &zv_value);
        return zval_is_true(&retval);
    }

    // Inherit common QAbstractItemModel functions from BaseModel
    using BaseModel::beginInsertColumns;
    using BaseModel::beginInsertRows;
    using BaseModel::beginMoveColumns;
    using BaseModel::beginMoveRows;
    using BaseModel::beginRemoveColumns;
    using BaseModel::beginRemoveRows;
    using BaseModel::beginResetModel;
    using BaseModel::changePersistentIndex;
    using BaseModel::createIndex;
    using BaseModel::endInsertColumns;
    using BaseModel::endInsertRows;
    using BaseModel::endMoveColumns;
    using BaseModel::endMoveRows;
    using BaseModel::endRemoveColumns;
    using BaseModel::endRemoveRows;
    using BaseModel::endResetModel;
    using BaseModel::persistentIndexList;
};

class PhpQAbstractItemModel : public PhpQAbstractModel<QAbstractItemModel>
{
public:
    using PhpQAbstractModel<QAbstractItemModel>::PhpQAbstractModel;

    QModelIndex parent(const QModelIndex &child) const override
    {
        zval retval, zv_child;
        qt_cpp_to_zval(&zv_child, child);
        zend_call_method_with_1_params(this->std, this->std->ce, nullptr, "parent", &retval, &zv_child);
        return *QT_Object_P(&retval, QModelIndex)->native;
    }
};

typedef PhpQAbstractModel<QAbstractTableModel> PhpQAbstractTableModel;

#endif // __cplusplus

#endif /* PHP_QABSTRACTITEMMODEL_H */
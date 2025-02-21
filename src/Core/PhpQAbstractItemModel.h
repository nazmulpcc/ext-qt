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

class PhpQAbstractItemModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    zend_object *std = nullptr;
    explicit PhpQAbstractItemModel(QObject *parent = nullptr) : QAbstractItemModel(parent) {};

    // Minimal required virtual functions implementation:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &child) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;

    using QAbstractItemModel::beginInsertColumns;
    using QAbstractItemModel::beginInsertRows;
    using QAbstractItemModel::beginMoveColumns;
    using QAbstractItemModel::beginMoveRows;
    using QAbstractItemModel::beginRemoveColumns;
    using QAbstractItemModel::beginRemoveRows;
    using QAbstractItemModel::beginResetModel;
    using QAbstractItemModel::changePersistentIndex;
    using QAbstractItemModel::createIndex;
    using QAbstractItemModel::endInsertColumns;
    using QAbstractItemModel::endInsertRows;
    using QAbstractItemModel::endMoveColumns;
    using QAbstractItemModel::endMoveRows;
    using QAbstractItemModel::endRemoveColumns;
    using QAbstractItemModel::endRemoveRows;
    using QAbstractItemModel::endResetModel;
    using QAbstractItemModel::persistentIndexList;
};

#endif

#endif /* PHP_QABSTRACTITEMMODEL_H */
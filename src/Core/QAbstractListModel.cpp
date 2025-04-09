#include "PhpQAbstractItemModel.h"
#include <QtCore/QAbstractListModel>
#include <QtCore/QModelIndex>
#include <QtCore/QVariant>

ZEND_METHOD(Qt_Core_QAbstractListModel, __construct)
{
    zval *parent = nullptr;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent, ce_qobject)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQAbstractListModel);
    container->native = new PhpQAbstractListModel();
    container->native->std = &container->std;
    container->native->setParent(parent ? QT_Object_P(parent, QObject)->native : nullptr);
}
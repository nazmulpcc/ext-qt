extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include "../Core/PhpQAbstractItemModel.h"
#include <QtWidgets/QTreeView>

ZEND_METHOD(Qt_Widgets_QTreeView, __construct)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QTreeView);
    container->native = new QTreeView;
    if (parent_zval)
    {
        container->native->setParent(QT_Object_P(parent_zval, QWidget)->native);
    }
}

QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QTreeView, QTreeView, collapse, QModelIndex, ce_qmodelindex);
QT_METHOD_FORWARD(Qt_Widgets_QTreeView, QTreeView, collapseAll);
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QTreeView, QTreeView, expand, QModelIndex, ce_qmodelindex);
QT_METHOD_FORWARD(Qt_Widgets_QTreeView, QTreeView, expandAll);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTreeView, QTreeView, isAnimated);

ZEND_METHOD(Qt_Widgets_QTreeView, isExpanded)
{
    zval *index;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(index, ce_qmodelindex)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QTreeView);
    RETURN_BOOL(container->native->isExpanded(*QT_Object_P(index, QModelIndex)->native));
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTreeView, QTreeView, itemsExpandable);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTreeView, QTreeView, rootIsDecorated);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTreeView, QTreeView, setAnimated);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTreeView, QTreeView, setItemsExpandable);
QT_METHOD_FORWARD_NATIVE_P_REF(Qt_Widgets_QTreeView, QTreeView, setModel, PhpQAbstractItemModel, ce_qabstractitemmodel, 1);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTreeView, QTreeView, setRootIsDecorated);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTreeView, QTreeView, setSortingEnabled);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTreeView, QTreeView, setUniformRowHeights);
ZEND_METHOD(Qt_Widgets_QTreeView, sortByColumn)
{
    zend_long column, order = 0;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(column)
    Z_PARAM_LONG(order)
    ZEND_PARSE_PARAMETERS_END();

    QT_Object_P(ZEND_THIS, QTreeView)->native->sortByColumn(column, static_cast<Qt::SortOrder>(order));
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTreeView, QTreeView, isSortingEnabled);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTreeView, QTreeView, uniformRowHeights);
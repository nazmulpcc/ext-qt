extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include "../Core/PhpQAbstractItemModel.h"
#include <QtWidgets/QTableView>

ZEND_METHOD(Qt_Widgets_QTableView, __construct)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QTableView);
    container->native = new QTableView;
    if (parent_zval)
    {
        container->native->setParent(QT_Object_P(parent_zval, QWidget)->native);
    }
}

ZEND_METHOD(Qt_Widgets_QTableView, setModel)
{
    zval *model_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(model_zval, ce_qabstractitemmodel)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QAbstractItemView);
    auto *model = QT_Object_P(model_zval, PhpQAbstractItemModel);
    container->native->setModel(model->native);
}
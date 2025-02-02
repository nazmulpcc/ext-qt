extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QSplitter>

ZEND_METHOD(Qt_Widgets_QSplitter, __construct)
{
    zval *parent_zval = nullptr;
    zend_long orientation = Qt::Horizontal;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(orientation)
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native = new QSplitter(static_cast<Qt::Orientation>(orientation));
    if (parent_zval)
    {
        container->native->setParent(QT_Object_P(parent_zval, QWidget)->native);
    }
}

ZEND_METHOD(Qt_Widgets_QSplitter, addWidget)
{
    zval *widget_zval = nullptr;
    zend_long stretch = 0;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(widget_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSplitter);
    container->native->addWidget(QT_Object_P(widget_zval, QWidget)->native);
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSplitter, QSplitter, childrenCollapsible)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSplitter, QSplitter, count)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSplitter, QSplitter, handleWidth)

ZEND_METHOD(Qt_Widgets_QSplitter, indexOf)
{
    zval *widget_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(widget_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSplitter);
    RETURN_LONG(container->native->indexOf(QT_Object_P(widget_zval, QWidget)->native));
}

ZEND_METHOD(Qt_Widgets_QSplitter, insertWidget)
{
    zend_long index;
    zval *widget_zval = nullptr;
    zend_long stretch = 0;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(index)
    Z_PARAM_OBJECT_OF_CLASS(widget_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSplitter);
    container->native->insertWidget(index, QT_Object_P(widget_zval, QWidget)->native);
}

ZEND_METHOD(Qt_Widgets_QSplitter, isCollapsible)
{
    zend_long index;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(index)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSplitter);
    RETURN_BOOL(container->native->isCollapsible(index));
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QSplitter, QSplitter, opaqueResize)
QT_METHOD_FORWARD(Qt_Widgets_QSplitter, QSplitter, refresh);

ZEND_METHOD(Qt_Widgets_QSplitter, replaceWidget)
{
    zend_long index;
    zval *widget_zval = nullptr;
    zend_long stretch = 0;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(index)
    Z_PARAM_OBJECT_OF_CLASS(widget_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSplitter);
    container->native->replaceWidget(index, QT_Object_P(widget_zval, QWidget)->native);
}

QT_METHOD_FORWARD_BOOL(Qt_Widgets_QSplitter, QSplitter, setChildrenCollapsible)

ZEND_METHOD(Qt_Widgets_QSplitter, setCollapsible)
{
    zend_long index;
    zend_bool collapsible;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(index)
    Z_PARAM_BOOL(collapsible)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSplitter);
    container->native->setCollapsible(index, collapsible);
}

QT_METHOD_FORWARD_INT(Qt_Widgets_QSplitter, QSplitter, setHandleWidth)

ZEND_METHOD(Qt_Widgets_QSplitter, setOpaqueResize)
{
    zend_bool opaque = true;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_BOOL(opaque)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSplitter);
    container->native->setOpaqueResize(opaque);
}

QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QSplitter, QSplitter, setOrientation, Qt::Orientation)

ZEND_METHOD(Qt_Widgets_QSplitter, setSizes)
{
    zval *sizes_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ARRAY(sizes_zval)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSplitter);
    QList<int> sizes;
    zval *data;
    ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(sizes_zval), data)
    {
        sizes.append(Z_LVAL_P(data));
    }
    ZEND_HASH_FOREACH_END();
    container->native->setSizes(sizes);
}

ZEND_METHOD(Qt_Widgets_QSplitter, setStretchFactor)
{
    zend_long index;
    zend_long stretch;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(index)
    Z_PARAM_LONG(stretch)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QSplitter);
    container->native->setStretchFactor(index, stretch);
}

ZEND_METHOD(Qt_Widgets_QSplitter, sizes)
{
    auto *container = QT_Object_P(ZEND_THIS, QSplitter);
    auto sizes = container->native->sizes();
    array_init(return_value);
    for (auto size : sizes)
    {
        add_next_index_long(return_value, size);
    }
}

QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QSplitter, QSplitter, onSplitterMoved, splitterMoved);

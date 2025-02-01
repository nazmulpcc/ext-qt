extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QComboBox>

ZEND_METHOD(Qt_Widgets_QComboBox, __construct)
{
    zval *parent = NULL;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto container = QT_Object_P(ZEND_THIS, QWidget);
    container->native = new QComboBox(parent ? QT_Object_P(parent, QWidget)->native : nullptr);
}

QT_METHOD_FORWARD_STRING(Qt_Widgets_QComboBox, QComboBox, addItem)

ZEND_METHOD(Qt_Widgets_QComboBox, addItems)
{
    zval *texts_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_ARRAY(texts_zval)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QComboBox);
    for (zend_ulong i = 0; i < zend_hash_num_elements(Z_ARRVAL_P(texts_zval)); i++)
    {
        zval *text_zval;
        if ((text_zval = zend_hash_index_find(Z_ARRVAL_P(texts_zval), i)) != nullptr)
        {
            container->native->addItem(Z_STRVAL_P(text_zval));
        }
    }
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, count)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, currentIndex)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, currentText)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, duplicatesEnabled)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, hasFrame)
QT_METHOD_FORWARD(Qt_Widgets_QComboBox, QComboBox, hidePopup)

ZEND_METHOD(Qt_Widgets_QComboBox, insertItem)
{
    zend_long index;
    zval *text_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(index)
    Z_PARAM_ZVAL(text_zval)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QComboBox);
    container->native->insertItem(index, Z_STRVAL_P(text_zval));
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, insertPolicy)
QT_METHOD_FORWARD_INT(Qt_Widgets_QComboBox, QComboBox, insertSeparator)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, isEditable)

ZEND_METHOD(Qt_Widgets_QComboBox, itemText)
{
    zend_long index;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(index)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QComboBox);
    RETURN_STRING(container->native->itemText(index).toStdString().c_str());
}
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, maxCount)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, maxVisibleItems)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, minimumContentsLength)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, placeholderText)
QT_METHOD_FORWARD_INT(Qt_Widgets_QComboBox, QComboBox, removeItem)
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QComboBox, QComboBox, setDuplicatesEnabled)
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QComboBox, QComboBox, setEditable)
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QComboBox, QComboBox, setFrame)
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QComboBox, QComboBox, setInsertPolicy, QComboBox::InsertPolicy)

ZEND_METHOD(Qt_Widgets_QComboBox, setItemText)
{
    zend_long index;
    zval *text_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(index)
    Z_PARAM_ZVAL(text_zval)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QComboBox);
    container->native->setItemText(index, Z_STRVAL_P(text_zval));
}

QT_METHOD_FORWARD_INT(Qt_Widgets_QComboBox, QComboBox, setMaxCount)
QT_METHOD_FORWARD_INT(Qt_Widgets_QComboBox, QComboBox, setMaxVisibleItems)
QT_METHOD_FORWARD_INT(Qt_Widgets_QComboBox, QComboBox, setMinimumContentsLength)
QT_METHOD_FORWARD_STRING(Qt_Widgets_QComboBox, QComboBox, setPlaceholderText)
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QComboBox, QComboBox, setSizeAdjustPolicy, QComboBox::SizeAdjustPolicy)
QT_METHOD_FORWARD(Qt_Widgets_QComboBox, QComboBox, showPopup)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QComboBox, QComboBox, sizeAdjustPolicy)

QT_METHOD_FORWARD(Qt_Widgets_QComboBox, QComboBox, clear)
QT_METHOD_FORWARD(Qt_Widgets_QComboBox, QComboBox, clearEditText)
QT_METHOD_FORWARD_INT(Qt_Widgets_QComboBox, QComboBox, setCurrentIndex)
QT_METHOD_FORWARD_STRING(Qt_Widgets_QComboBox, QComboBox, setCurrentText)
QT_METHOD_FORWARD_STRING(Qt_Widgets_QComboBox, QComboBox, setEditText)

QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QComboBox, QComboBox, onActivated, activated)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QComboBox, QComboBox, onCurrentIndexChanged, currentIndexChanged)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QComboBox, QComboBox, onCurrentTextChanged, currentTextChanged)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QComboBox, QComboBox, onEditTextChanged, editTextChanged)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QComboBox, QComboBox, onHighlighted, highlighted)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QComboBox, QComboBox, onTextActivated, textActivated)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QComboBox, QComboBox, onTextHighlighted, textHighlighted)
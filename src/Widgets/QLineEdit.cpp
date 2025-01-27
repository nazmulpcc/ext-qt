extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

ZEND_METHOD(Qt_Widgets_QLineEdit, __construct)
{
    zval *parent_zval = nullptr;
    zend_string *text = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_STR_OR_NULL(text)
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QLineEdit);

    container->native = new QLineEdit;
    if (parent_zval)
    {
        container->native->setParent(QT_Object_P(parent_zval, QWidget)->native);
    }
    if (text)
    {
        container->native->setText(text->val);
    }
}

QT_METHOD_FORWARD(Qt_Widgets_QLineEdit, QLineEdit, backspace)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, cursorPosition)
QT_METHOD_FORWARD(Qt_Widgets_QLineEdit, QLineEdit, del)
QT_METHOD_FORWARD(Qt_Widgets_QLineEdit, QLineEdit, deselect)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, displayText)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, echoMode)
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QLineEdit, QLineEdit, end)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, hasSelectedText)
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QLineEdit, QLineEdit, home)
QT_METHOD_FORWARD_STRING(Qt_Widgets_QLineEdit, QLineEdit, insert)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, isClearButtonEnabled)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, isModified)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, isReadOnly)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, maxLength)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, placeholderText)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, selectedText)
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QLineEdit, QLineEdit, setClearButtonEnabled)
QT_METHOD_FORWARD_INT(Qt_Widgets_QLineEdit, QLineEdit, setCursorPosition)
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QLineEdit, QLineEdit, setEchoMode, QLineEdit::EchoMode)
QT_METHOD_FORWARD_INT(Qt_Widgets_QLineEdit, QLineEdit, setMaxLength)
QT_METHOD_FORWARD_STRING(Qt_Widgets_QLineEdit, QLineEdit, setPlaceholderText)
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QLineEdit, QLineEdit, setReadOnly)

ZEND_METHOD(Qt_Widgets_QLineEdit, setSelection)
{
    auto *container = QT_Object_P(ZEND_THIS, QLineEdit);
    zend_long start, length;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(start)
    Z_PARAM_LONG(length)
    ZEND_PARSE_PARAMETERS_END();

    container->native->setSelection(start, length);
}

QT_METHOD_FORWARD_STRING(Qt_Widgets_QLineEdit, QLineEdit, setText)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QLineEdit, QLineEdit, text)

// Signals
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QLineEdit, QLineEdit, onEditingFinished, editingFinished)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QLineEdit, QLineEdit, onReturnPressed, returnPressed)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QLineEdit, QLineEdit, onTextChanged, textChanged)

// slots
QT_METHOD_FORWARD(Qt_Widgets_QLineEdit, QLineEdit, clear)
QT_METHOD_FORWARD(Qt_Widgets_QLineEdit, QLineEdit, copy)
QT_METHOD_FORWARD(Qt_Widgets_QLineEdit, QLineEdit, cut)
QT_METHOD_FORWARD(Qt_Widgets_QLineEdit, QLineEdit, paste)
QT_METHOD_FORWARD(Qt_Widgets_QLineEdit, QLineEdit, redo)
QT_METHOD_FORWARD(Qt_Widgets_QLineEdit, QLineEdit, selectAll)
QT_METHOD_FORWARD(Qt_Widgets_QLineEdit, QLineEdit, undo)

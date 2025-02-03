extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QUrl>
#include <QtWidgets/QTextEdit>

ZEND_METHOD(Qt_Widgets_QTextEdit, __construct)
{
    zval *parent_zv = nullptr;
    zend_string *text = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_STR_OR_NULL(text)
    Z_PARAM_OBJECT_OF_CLASS(parent_zv, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QTextEdit);
    container->native = new QTextEdit();
    if (parent_zv)
    {
        auto *parent = QT_Object_P(parent_zv, QWidget);
        container->native->setParent(parent->native);
    }
    if (text)
    {
        container->native->setText(text->val);
    }
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, acceptRichText);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, alignment);
ZEND_METHOD(Qt_Widgets_QTextEdit, anchorAt)
{
    zend_long x, y;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(x)
    Z_PARAM_LONG(y)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QTextEdit);
    auto anchor = container->native->anchorAt(QPoint(x, y));
    RETURN_STRING(anchor.toUtf8().data());
}
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, autoFormatting);

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, canPaste);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, documentTitle);
QT_METHOD_FORWARD(Qt_Widgets_QTextEdit, QTextEdit, ensureCursorVisible);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, fontFamily);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, fontItalic);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, fontPointSize);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, fontUnderline);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, fontWeight);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, isReadOnly);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, isUndoRedoEnabled);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, lineWrapColumnOrWidth);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, lineWrapMode);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, overwriteMode);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, placeholderText);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTextEdit, QTextEdit, setAcceptRichText);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QTextEdit, QTextEdit, setAutoFormatting, QTextEdit::AutoFormattingFlag);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, setDocumentTitle);
QT_METHOD_FORWARD_INT(Qt_Widgets_QTextEdit, QTextEdit, setLineWrapColumnOrWidth);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QTextEdit, QTextEdit, setLineWrapMode, QTextEdit::LineWrapMode);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTextEdit, QTextEdit, setOverwriteMode);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, setPlaceholderText);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTextEdit, QTextEdit, setReadOnly);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTextEdit, QTextEdit, setTabChangesFocus);

ZEND_METHOD(Qt_Widgets_QTextEdit, setTabStopDistance)
{
    double distance;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_DOUBLE(distance)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QTextEdit);
    container->native->setTabStopDistance(distance);
}

QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QTextEdit, QTextEdit, setTextInteractionFlags, Qt::TextInteractionFlag);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTextEdit, QTextEdit, setUndoRedoEnabled);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QTextEdit, QTextEdit, setWordWrapMode, QTextOption::WrapMode);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, tabChangesFocus);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, tabStopDistance);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, textInteractionFlags);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, toHtml);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, toMarkdown);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, toPlainText);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QTextEdit, QTextEdit, wordWrapMode);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, append);
QT_METHOD_FORWARD(Qt_Widgets_QTextEdit, QTextEdit, clear);
QT_METHOD_FORWARD(Qt_Widgets_QTextEdit, QTextEdit, copy);
QT_METHOD_FORWARD(Qt_Widgets_QTextEdit, QTextEdit, cut);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, insertHtml);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, insertPlainText);
QT_METHOD_FORWARD(Qt_Widgets_QTextEdit, QTextEdit, paste);
QT_METHOD_FORWARD(Qt_Widgets_QTextEdit, QTextEdit, redo);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, scrollToAnchor);
QT_METHOD_FORWARD(Qt_Widgets_QTextEdit, QTextEdit, selectAll);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QTextEdit, QTextEdit, setAlignment, Qt::AlignmentFlag);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, setFontFamily);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTextEdit, QTextEdit, setFontItalic);
ZEND_METHOD(Qt_Widgets_QTextEdit, setFontPointSize)
{
    double size;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_DOUBLE(size)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(getThis(), QTextEdit);
    container->native->setFontPointSize(size);
}
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QTextEdit, QTextEdit, setFontUnderline);
QT_METHOD_FORWARD_INT(Qt_Widgets_QTextEdit, QTextEdit, setFontWeight);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, setHtml);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, setMarkdown);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, setPlainText);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QTextEdit, QTextEdit, setText);
QT_METHOD_FORWARD(Qt_Widgets_QTextEdit, QTextEdit, undo);
QT_METHOD_FORWARD_INT(Qt_Widgets_QTextEdit, QTextEdit, zoomIn);
QT_METHOD_FORWARD_INT(Qt_Widgets_QTextEdit, QTextEdit, zoomOut);

QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QTextEdit, QTextEdit, onCopyAvailable, copyAvailable);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QTextEdit, QTextEdit, onCursorPositionChanged, cursorPositionChanged);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QTextEdit, QTextEdit, onRedoAvailable, redoAvailable);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QTextEdit, QTextEdit, onSelectionChanged, selectionChanged);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QTextEdit, QTextEdit, onTextChanged, textChanged);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QTextEdit, QTextEdit, onUndoAvailable, undoAvailable);
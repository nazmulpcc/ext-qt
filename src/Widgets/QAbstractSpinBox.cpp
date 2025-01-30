extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QAbstractSpinBox>

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, alignment);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, buttonSymbols);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, correctionMode);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, hasAcceptableInput);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, hasFrame);
QT_METHOD_FORWARD(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, interpretText);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, isAccelerated);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, isGroupSeparatorShown);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, isReadOnly);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, keyboardTracking);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, setAccelerated);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, setAlignment, Qt::AlignmentFlag)
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, setButtonSymbols, QAbstractSpinBox::ButtonSymbols);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, setCorrectionMode, QAbstractSpinBox::CorrectionMode);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, setFrame);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, setGroupSeparatorShown);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, setKeyboardTracking);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, setReadOnly);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, setSpecialValueText);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, setWrapping);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, specialValueText);
QT_METHOD_FORWARD_INT(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, stepBy);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, text);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, wrapping);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, onEditingFinished, editingFinished);
QT_METHOD_FORWARD(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, clear);
QT_METHOD_FORWARD(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, selectAll);
QT_METHOD_FORWARD(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, stepDown);
QT_METHOD_FORWARD(Qt_Widgets_QAbstractSpinBox, QAbstractSpinBox, stepUp);
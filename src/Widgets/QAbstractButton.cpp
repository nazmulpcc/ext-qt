extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QAbstractButton>

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractButton, QAbstractButton, autoRepeat);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractButton, QAbstractButton, autoRepeatDelay);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractButton, QAbstractButton, autoRepeatInterval);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractButton, QAbstractButton, setAutoRepeat);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractButton, QAbstractButton, setAutoRepeatDelay);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QAbstractButton, QAbstractButton, setAutoRepeatInterval);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QAbstractButton, QAbstractButton, setText);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QAbstractButton, QAbstractButton, text);
QT_METHOD_FORWARD(Qt_Widgets_QAbstractButton, QAbstractButton, animateClick);
QT_METHOD_FORWARD(Qt_Widgets_QAbstractButton, QAbstractButton, click);
QT_METHOD_FORWARD(Qt_Widgets_QAbstractButton, QAbstractButton, toggle);

QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractButton, QAbstractButton, onClicked, clicked);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractButton, QAbstractButton, onPressed, pressed);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractButton, QAbstractButton, onReleased, released);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QAbstractButton, QAbstractButton, onToggled, toggled);

extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QWidget>
#include <QtCore/QString>

ZEND_METHOD(Qt_Widgets_QWidget, __construct)
{
    zval *parent_zval = nullptr;
    zend_long windowFlags = 0;
    bool has_flags = false;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    Z_PARAM_LONG_OR_NULL(windowFlags, has_flags)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native = new QWidget;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QWidget);
        container->native->setParent(parent_container->native);
    }
    if (has_flags)
    {
        container->native->setWindowFlags(static_cast<Qt::WindowType>(windowFlags));
    }
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, acceptDrops);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, accessibleDescription);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, accessibleName);
// ZEND_METHOD(Qt_Widgets_QWidget, actions);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, activateWindow);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, adjustSize);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, autoFillBackground);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, backgroundRole);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, baseSize);

ZEND_METHOD(Qt_Widgets_QWidget, childAt)
{
    zend_long x, y;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(x)
    Z_PARAM_LONG(y)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    auto child = container->native->childAt(x, y);
    if (child)
    {
        qt_cpp_to_zval(return_value, child);
    }
    else
    {
        RETURN_NULL();
    }
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, childrenRect);

QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, clearFocus);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, clearMask);

ZEND_METHOD(Qt_Widgets_QWidget, contentsMargins)
{
    ZEND_PARSE_PARAMETERS_NONE();
    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    auto margins = container->native->contentsMargins();
    array_init(return_value);
    add_next_index_long(return_value, margins.left());
    add_next_index_long(return_value, margins.top());
    add_next_index_long(return_value, margins.right());
    add_next_index_long(return_value, margins.bottom());
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, contentsRect);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, contextMenuPolicy);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, ensurePolished);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, focusPolicy);

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, frameGeometry);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, frameSize);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, geometry);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, grabKeyboard);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, grabMouse);
// QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, hasEditFocus);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, hasFocus);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, hasMouseTracking);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, hasTabletTracking);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, height);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, inputMethodHints);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, isActiveWindow);

ZEND_METHOD(Qt_Widgets_QWidget, isAncestorOf)
{
    zval *child_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(child_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    RETURN_BOOL(container->native->isAncestorOf(QT_Object_P(child_zval, QWidget)->native));
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, isEnabled);

ZEND_METHOD(Qt_Widgets_QWidget, isEnabledTo)
{
    zval *ancestor_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(ancestor_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    RETURN_BOOL(container->native->isEnabledTo(QT_Object_P(ancestor_zval, QWidget)->native));
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, isFullScreen);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, isHidden);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, isMaximized);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, isMinimized);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, isModal);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, isVisible);

ZEND_METHOD(Qt_Widgets_QWidget, isVisibleTo)
{
    zval *ancestor_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(ancestor_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    RETURN_BOOL(container->native->isVisibleTo(QT_Object_P(ancestor_zval, QWidget)->native));
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, isWindow);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, isWindowModified)

ZEND_METHOD(Qt_Widgets_QWidget, layout)
{
    ZEND_PARSE_PARAMETERS_NONE();
    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    auto layout = container->native->layout();
    if (layout)
    {
        // TODO: Implement this
    }
    RETURN_NULL();
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, layoutDirection);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, maximumHeight);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, maximumSize);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, maximumWidth);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, minimumHeight);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, minimumSize);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, minimumWidth);

ZEND_METHOD(Qt_Widgets_QWidget, move)
{
    zend_long x, y;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(x)
    Z_PARAM_LONG(y)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->move(x, y);
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, nativeParentWidget);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, nextInFocusChain);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, normalGeometry);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, overrideWindowFlags, Qt::WindowType);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, parentWidget);

ZEND_METHOD(Qt_Widgets_QWidget, pos)
{
    ZEND_PARSE_PARAMETERS_NONE();
    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    auto pos = container->native->pos();
    array_init(return_value);
    add_next_index_long(return_value, pos.x());
    add_next_index_long(return_value, pos.y());
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, previousInFocusChain);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, rect);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, releaseKeyboard);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, releaseMouse);
QT_METHOD_FORWARD_INT(Qt_Widgets_QWidget, QWidget, releaseShortcut);

ZEND_METHOD(Qt_Widgets_QWidget, repaint)
{
    zval *region_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(region_zval, ce_qrect)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    if (region_zval)
    {
        container->native->repaint(*QT_Object_P(region_zval, QRect)->native);
    }
    else
    {
        container->native->repaint();
    }
}
ZEND_METHOD(Qt_Widgets_QWidget, resize)
{
    zend_long width, height;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(width)
    Z_PARAM_LONG(height)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->resize(width, height);
}
ZEND_METHOD(Qt_Widgets_QWidget, scroll)
{
    zend_long dx, dy;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(dx)
    Z_PARAM_LONG(dy)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->scroll(dx, dy);
}

QT_METHOD_FORWARD_BOOL(Qt_Widgets_QWidget, QWidget, setAcceptDrops);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QWidget, QWidget, setAccessibleDescription);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QWidget, QWidget, setAccessibleName);
ZEND_METHOD(Qt_Widgets_QWidget, setAttribute);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QWidget, QWidget, setAutoFillBackground);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, setBackgroundRole, QPalette::ColorRole);

ZEND_METHOD(Qt_Widgets_QWidget, setBaseSize)
{
    zend_long width, height;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(width)
    Z_PARAM_LONG(height)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setBaseSize(width, height);
}
ZEND_METHOD(Qt_Widgets_QWidget, setContentsMargins)
{
    zend_long left, top, right, bottom;
    ZEND_PARSE_PARAMETERS_START(4, 4)
    Z_PARAM_LONG(left)
    Z_PARAM_LONG(top)
    Z_PARAM_LONG(right)
    Z_PARAM_LONG(bottom)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setContentsMargins(left, top, right, bottom);
}

QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, setContextMenuPolicy, Qt::ContextMenuPolicy);
// QT_METHOD_FORWARD_BOOL(Qt_Widgets_QWidget, QWidget, setEditFocus);
QT_METHOD_FORWARD_INT(Qt_Widgets_QWidget, QWidget, setFixedHeight);

ZEND_METHOD(Qt_Widgets_QWidget, setFixedSize)
{
    zend_long width, height;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(width)
    Z_PARAM_LONG(height)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setFixedSize(width, height);
}

QT_METHOD_FORWARD_INT(Qt_Widgets_QWidget, QWidget, setFixedWidth);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, setFocus, Qt::FocusReason);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, setFocusPolicy, Qt::FocusPolicy);

ZEND_METHOD(Qt_Widgets_QWidget, setGeometry)
{
    zend_long x, y, width, height;
    ZEND_PARSE_PARAMETERS_START(4, 4)
    Z_PARAM_LONG(x)
    Z_PARAM_LONG(y)
    Z_PARAM_LONG(width)
    Z_PARAM_LONG(height)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setGeometry(x, y, width, height);
}

QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, setInputMethodHints, Qt::InputMethodHint);

QT_METHOD_FORWARD_NATIVE_P_REF(Qt_Widgets_QWidget, QWidget, setLayout, QLayout, ce_widget_QLayout, 1);

QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, setLayoutDirection, Qt::LayoutDirection);
QT_METHOD_FORWARD_INT(Qt_Widgets_QWidget, QWidget, setMaximumHeight);
ZEND_METHOD(Qt_Widgets_QWidget, setMaximumSize)
{
    zend_long width, height;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(width)
    Z_PARAM_LONG(height)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setMaximumSize(width, height);
}
QT_METHOD_FORWARD_INT(Qt_Widgets_QWidget, QWidget, setMaximumWidth);
QT_METHOD_FORWARD_INT(Qt_Widgets_QWidget, QWidget, setMinimumHeight);
ZEND_METHOD(Qt_Widgets_QWidget, setMinimumSize)
{
    zend_long width, height;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(width)
    Z_PARAM_LONG(height)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setMinimumSize(width, height);
}
QT_METHOD_FORWARD_INT(Qt_Widgets_QWidget, QWidget, setMinimumWidth);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QWidget, QWidget, setMouseTracking);
ZEND_METHOD(Qt_Widgets_QWidget, setShortcutAutoRepeat)
{
    zend_long id;
    bool enabled;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(id)
    Z_PARAM_BOOL(enabled)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setShortcutAutoRepeat(id, enabled);
}
ZEND_METHOD(Qt_Widgets_QWidget, setShortcutEnabled)
{
    zend_long id;
    bool enabled;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(id)
    Z_PARAM_BOOL(enabled)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setShortcutEnabled(id, enabled);
}
ZEND_METHOD(Qt_Widgets_QWidget, setSizeIncrement)
{
    zend_long width, height;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(width)
    Z_PARAM_LONG(height)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setSizeIncrement(width, height);
}
ZEND_METHOD(Qt_Widgets_QWidget, setSizePolicy)
{
    zend_long horizontal, vertical;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(horizontal)
    Z_PARAM_LONG(vertical)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setSizePolicy(static_cast<QSizePolicy::Policy>(horizontal), static_cast<QSizePolicy::Policy>(vertical));
}
QT_METHOD_FORWARD_STRING(Qt_Widgets_QWidget, QWidget, setStatusTip);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QWidget, QWidget, setTabletTracking);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QWidget, QWidget, setToolTip);
QT_METHOD_FORWARD_INT(Qt_Widgets_QWidget, QWidget, setToolTipDuration);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QWidget, QWidget, setUpdatesEnabled);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QWidget, QWidget, setWhatsThis);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QWidget, QWidget, setWindowFilePath);

ZEND_METHOD(Qt_Widgets_QWidget, setWindowFlag)
{
    zend_long flag;
    bool on;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(flag)
    Z_PARAM_BOOL(on)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setWindowFlag(static_cast<Qt::WindowType>(flag), on);
}

QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, setWindowFlags, Qt::WindowType);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, setWindowModality, Qt::WindowModality);

ZEND_METHOD(Qt_Widgets_QWidget, setWindowOpacity)
{
    double level;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_DOUBLE(level)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    container->native->setWindowOpacity(level);
}

QT_METHOD_FORWARD_STRING(Qt_Widgets_QWidget, QWidget, setWindowRole); // <--- here
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, setWindowState, Qt::WindowState);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, size);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, sizeIncrement);
// QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QWidget, QWidget, stackUnder, QWidget, ce_widget_QWidget);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, statusTip);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, styleSheet);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, toolTip);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, toolTipDuration);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, underMouse);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QWidget, QWidget, ungrabGesture, Qt::GestureType);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, unsetCursor);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, unsetLayoutDirection);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, updatesEnabled);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, whatsThis);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, width);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, window);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, windowFilePath);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, windowFlags);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, windowModality);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, windowOpacity);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, windowRole);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, windowState);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, windowTitle);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, windowType);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, x);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QWidget, QWidget, y);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, close);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, hide);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, lower);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, raise);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QWidget, QWidget, setDisabled);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QWidget, QWidget, setEnabled);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QWidget, QWidget, setHidden);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QWidget, QWidget, setStyleSheet);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QWidget, QWidget, setWindowModified);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QWidget, QWidget, setWindowTitle);
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, show)
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, showFullScreen)
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, showMaximized)
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, showMinimized)
QT_METHOD_FORWARD(Qt_Widgets_QWidget, QWidget, showNormal)

ZEND_METHOD(Qt_Widgets_QWidget, update)
{
    zval *region_zval = nullptr;
    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(region_zval, ce_qrect)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QWidget);
    if (region_zval)
    {
        container->native->update(*QT_Object_P(region_zval, QRect)->native);
    }
    else
    {
        container->native->update();
    }
}

QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QWidget, QWidget, onCustomContextMenuRequested, customContextMenuRequested);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QWidget, QWidget, onWindowTitleChanged, windowTitleChanged);

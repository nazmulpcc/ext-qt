extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtGui/QAction>

ZEND_METHOD(Qt_Gui_QAction, __construct)
{
    zend_string *text = nullptr;
    zval *parent = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_STR(text)
    Z_PARAM_OBJECT_OF_CLASS(parent, ce_qobject)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QAction);
    container->native = new QAction();
    if (text)
    {
        container->native->setText(QString::fromUtf8(ZSTR_VAL(text), ZSTR_LEN(text)));
    }
    if (parent)
    {
        container->native->setParent(QT_Object_P(parent, QObject)->native);
    }
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Gui_QAction, QAction, isCheckable);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Gui_QAction, QAction, isChecked);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Gui_QAction, QAction, isEnabled);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Gui_QAction, QAction, isSeparator);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Gui_QAction, QAction, isVisible);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Gui_QAction, QAction, shortcut);
QT_METHOD_FORWARD_BOOL(Qt_Gui_QAction, QAction, setCheckable);
QT_METHOD_FORWARD_BOOL(Qt_Gui_QAction, QAction, setChecked);
QT_METHOD_FORWARD_BOOL(Qt_Gui_QAction, QAction, setEnabled);
QT_METHOD_FORWARD_STRING(Qt_Gui_QAction, QAction, setShortcut);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Gui_QAction, QAction, text);
QT_METHOD_FORWARD(Qt_Gui_QAction, QAction, toggle);
QT_METHOD_FORWARD(Qt_Gui_QAction, QAction, trigger);

QT_METHOD_FORWARD_SIGNAL(Qt_Gui_QAction, QAction, onChanged, changed);
QT_METHOD_FORWARD_SIGNAL(Qt_Gui_QAction, QAction, onHovered, hovered);
QT_METHOD_FORWARD_SIGNAL(Qt_Gui_QAction, QAction, onToggled, toggled);
QT_METHOD_FORWARD_SIGNAL(Qt_Gui_QAction, QAction, onTriggered, triggered);
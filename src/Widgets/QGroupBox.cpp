extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QGroupBox>

ZEND_METHOD(Qt_Widgets_QGroupBox, __construct)
{
    zval *parent_zv = nullptr;
    zend_string *text = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_STR_OR_NULL(text)
    Z_PARAM_OBJECT_OF_CLASS(parent_zv, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QGroupBox);
    container->native = new QGroupBox();
    if (parent_zv)
    {
        container->native->setParent(QT_Object_P(parent_zv, QWidget)->native);
    }
    if (text)
    {
        container->native->setTitle(text->val);
    }
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QGroupBox, QGroupBox, alignment)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QGroupBox, QGroupBox, isCheckable);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QGroupBox, QGroupBox, isChecked);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QGroupBox, QGroupBox, isFlat);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QGroupBox, QGroupBox, setAlignment, Qt::AlignmentFlag);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QGroupBox, QGroupBox, setCheckable);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QGroupBox, QGroupBox, setFlat);
QT_METHOD_FORWARD_STRING(Qt_Widgets_QGroupBox, QGroupBox, setTitle);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QGroupBox, QGroupBox, title);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QGroupBox, QGroupBox, setChecked);

QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QGroupBox, QGroupBox, onClicked, clicked);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QGroupBox, QGroupBox, onToggled, toggled);

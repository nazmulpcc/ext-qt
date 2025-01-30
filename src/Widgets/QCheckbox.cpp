extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QCheckBox>

ZEND_METHOD(Qt_Widgets_QCheckBox, __construct)
{
    zend_string *text;
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_STR(text)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QCheckBox);
    container->native = new QCheckBox(ZSTR_VAL(text), parent_zval ? QT_Object_P(parent_zval, QWidget)->native : nullptr);
}

ZEND_METHOD(Qt_Widgets_QCheckBox, checkState)
{
    ZEND_PARSE_PARAMETERS_NONE();
    auto *container = QT_Object_P(ZEND_THIS, QCheckBox);
    RETURN_LONG(container->native->checkState());
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QCheckBox, QCheckBox, isTristate);
ZEND_METHOD(Qt_Widgets_QCheckBox, setCheckState)
{
    zend_long state;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(state)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QCheckBox);
    container->native->setCheckState(static_cast<Qt::CheckState>(state));
}
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QCheckBox, QCheckBox, setTristate);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QCheckBox, QCheckBox, onCheckStateChanged, checkStateChanged);
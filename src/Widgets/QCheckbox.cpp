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

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QCheckBox, QCheckBox, checkState);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QCheckBox, QCheckBox, isTristate);
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QCheckBox, QCheckBox, setCheckState, Qt::CheckState);
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QCheckBox, QCheckBox, setTristate);
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QCheckBox, QCheckBox, onCheckStateChanged, checkStateChanged);
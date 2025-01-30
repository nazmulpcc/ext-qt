extern "C"
{
#include "php.h"
#include "ext/spl/spl_exceptions.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QDateTimeEdit>

ZEND_METHOD(Qt_Widgets_QDateTimeEdit, __construct)
{
    zval *dateTime, *parent = nullptr;
    ZEND_PARSE_PARAMETERS_START(0, 2)
    Z_PARAM_OPTIONAL
    Z_PARAM_ZVAL_OR_NULL(dateTime)
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent, ce_widget_QWidget)
    ZEND_PARSE_PARAMETERS_END();

    QWidget *parentWidget = nullptr;
    auto *container = QT_Object_P(ZEND_THIS, QDateTimeEdit);
    container->native = new QDateTimeEdit;
    if (parent)
    {
        container->native->setParent(QT_Object_P(parent, QWidget)->native);
    }
    if (instanceof_function(Z_OBJCE_P(dateTime), ce_qdatetime))
    {
        container->native->setDateTime(*QT_Object_P(dateTime, QDateTime)->native);
    }
    else if (instanceof_function(Z_OBJCE_P(dateTime), ce_qdate))
    {
        container->native->setDate(*QT_Object_P(dateTime, QDate)->native);
    }
    else if (instanceof_function(Z_OBJCE_P(dateTime), ce_qtime))
    {
        container->native->setTime(*QT_Object_P(dateTime, QTime)->native);
    }
    else
    {
        zend_throw_error(spl_ce_InvalidArgumentException,
                         "Invalid argument, expected Qt\\Core\\QDate, Qt\\Core\\QTime or Qt\\Core\\QDateTime as first argument");
        RETURN_THROWS();
    }
}
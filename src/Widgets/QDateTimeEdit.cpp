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

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, calendar)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, calendarPopup)
QT_METHOD_FORWARD(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, clear)
QT_METHOD_FORWARD(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, clearMaximumDate)
QT_METHOD_FORWARD(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, clearMaximumDateTime)
QT_METHOD_FORWARD(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, clearMaximumTime)
QT_METHOD_FORWARD(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, clearMinimumDate)
QT_METHOD_FORWARD(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, clearMinimumDateTime)
QT_METHOD_FORWARD(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, clearMinimumTime)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, currentSection)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, currentSectionIndex)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, date)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, dateTime)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, displayFormat)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, maximumDate)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, maximumDateTime)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, maximumTime)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, minimumDate)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, minimumDateTime)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, minimumTime)

ZEND_METHOD(Qt_Widgets_QDateTimeEdit, sectionAt)
{
    zend_long index;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(index)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QDateTimeEdit);
    RETURN_LONG(container->native->sectionAt(index));
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, sectionCount)

ZEND_METHOD(Qt_Widgets_QDateTimeEdit, sectionText)
{
    zend_long section;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(section)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QDateTimeEdit);
    RETURN_STRING(container->native->sectionText(static_cast<QDateTimeEdit::Section>(section)).toUtf8().data());
}

QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setCalendar, QCalendar, ce_qcalendar)
QT_METHOD_FORWARD_BOOL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setCalendarPopup)
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setCurrentSection, QDateTimeEdit::Section)
QT_METHOD_FORWARD_INT(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setCurrentSectionIndex)

ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setDateRange)
{
    zval *min, *max;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_OBJECT_OF_CLASS(min, ce_qdate)
    Z_PARAM_OBJECT_OF_CLASS(max, ce_qdate)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QDateTimeEdit);
    container->native->setDateRange(*QT_Object_P(min, QDate)->native, *QT_Object_P(max, QDate)->native);
}
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setDateTimeRange)
{
    zval *min, *max;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_OBJECT_OF_CLASS(min, ce_qdatetime)
    Z_PARAM_OBJECT_OF_CLASS(max, ce_qdatetime)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QDateTimeEdit);
    container->native->setDateTimeRange(*QT_Object_P(min, QDateTime)->native, *QT_Object_P(max, QDateTime)->native);
}

QT_METHOD_FORWARD_STRING(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setDisplayFormat)
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setMaximumDate, QDate, ce_qdate)
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setMaximumDateTime, QDateTime, ce_qdatetime)
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setMaximumTime, QTime, ce_qtime)
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setMinimumDate, QDate, ce_qdate)
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setMinimumDateTime, QDateTime, ce_qdatetime)
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setMinimumTime, QTime, ce_qtime)
QT_METHOD_FORWARD_INT_ENUM(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setSelectedSection, QDateTimeEdit::Section)

ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setTimeRange)
{
    zval *min, *max;
    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_OBJECT_OF_CLASS(min, ce_qtime)
    Z_PARAM_OBJECT_OF_CLASS(max, ce_qtime)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QDateTimeEdit);
    container->native->setTimeRange(*QT_Object_P(min, QTime)->native, *QT_Object_P(max, QTime)->native);
}

QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setTimeZone, QTimeZone, ce_qtimezone)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, time)
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, timeZone)
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setDate, QDate, ce_qdate)
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setDateTime, QDateTime, ce_qdatetime)
QT_METHOD_FORWARD_NATIVE(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, setTime, QTime, ce_qtime)

// Signals
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, onDateChanged, dateChanged)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, onDateTimeChanged, dateTimeChanged)
QT_METHOD_FORWARD_SIGNAL(Qt_Widgets_QDateTimeEdit, QDateTimeEdit, onTimeChanged, timeChanged)
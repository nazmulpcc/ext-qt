/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 4ef649c30abba63e9a7c7791bebebb4d3ad9b92b */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QCalendar___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, system, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QCalendar_isValid, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QDate___construct, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QDate_day, 0, 0, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, calendar, Qt\\Core\\QCalendar, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Core_QDate_isNull arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Core_QDate_isValid arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Core_QDate_month arginfo_class_Qt_Core_QDate_day

#define arginfo_class_Qt_Core_QDate_year arginfo_class_Qt_Core_QDate_day

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QDateTime___construct, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, date, Qt\\Core\\QDate, 0)
	ZEND_ARG_OBJ_INFO(0, time, Qt\\Core\\QTime, 0)
	ZEND_ARG_OBJ_INFO(0, timeZone, Qt\\Core\\QTimeZone, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QObject___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Core\\QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_blockSignals, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, block, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_dumpObjectInfo, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Core_QObject_dumpObjectTree arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Core_QObject_isQuickItemType arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Core_QObject_isWidgetType arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Core_QObject_isWindowType arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_killTimer, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_objectName, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_setObjectName, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_setParent, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, parent, Qt\\Core\\QObject, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Core_QObject_signalsBlocked arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_startTimer, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timerType, IS_LONG, 0, "1")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QTime___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, s, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ms, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QTime_hour, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Core_QTime_isNull arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Core_QTime_isValid arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Core_QTime_minute arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Core_QTime_msec arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Core_QTime_second arginfo_class_Qt_Core_QTime_hour

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QTimeZone___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, offsetSeconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Core_QTimeZone_isValid arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QApplication___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QApplication_exec arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QAbstractButton_autoRepeat arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractButton_autoRepeatDelay arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QAbstractButton_autoRepeatInterval arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QAbstractButton_isChecked arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeatDelay, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, duration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeatInterval, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractButton_setChecked, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractButton_setText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractButton_text arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QAbstractButton_animateClick arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QAbstractButton_click arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QAbstractButton_toggle arginfo_class_Qt_Core_QObject_dumpObjectInfo

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractButton_onClicked, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractButton_onPressed arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QAbstractButton_onReleased arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QAbstractButton_onToggled arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_alignment arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_buttonSymbols arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_correctionMode arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_hasAcceptableInput arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_hasFrame arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_interpretText arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_isAccelerated arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_isGroupSeparatorShown arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_isReadOnly arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_keyboardTracking arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSpinBox_setAccelerated, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSpinBox_setAlignment, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSpinBox_setButtonSymbols, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, buttonSymbols, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSpinBox_setCorrectionMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSpinBox_setFrame, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, frame, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSpinBox_setGroupSeparatorShown, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, show, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_setKeyboardTracking arginfo_class_Qt_Widgets_QAbstractSpinBox_setAccelerated

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSpinBox_setReadOnly, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, readOnly, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_setSpecialValueText arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_setWrapping arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_specialValueText arginfo_class_Qt_Core_QObject_objectName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSpinBox_stepBy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, steps, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_text arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_wrapping arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_onEditingFinished arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_clear arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_selectAll arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_stepDown arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_stepUp arginfo_class_Qt_Core_QObject_dumpObjectInfo

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QBoxLayout___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QBoxLayout_addStretch, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, stretch, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QBoxLayout_addSpacing, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QBoxLayout_setDirection, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QCheckBox___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QCheckBox_checkState arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QCheckBox_isTristate arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QCheckBox_setCheckState, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QCheckBox_setTristate, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tristate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QCheckBox_onCheckStateChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit___construct, 0, 0, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, dateTime, Qt\\Core\\QDate|Qt\\Core\\QTime|Qt\\Core\\QDateTime, MAY_BE_NULL, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_calendar, 0, 0, Qt\\Core\\QCalendar, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDateTimeEdit_calendarPopup arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QDateTimeEdit_clear arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QDateTimeEdit_clearMaximumDate arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QDateTimeEdit_clearMaximumDateTime arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QDateTimeEdit_clearMaximumTime arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QDateTimeEdit_clearMinimumDate arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QDateTimeEdit_clearMinimumDateTime arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QDateTimeEdit_clearMinimumTime arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QDateTimeEdit_currentSection arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QDateTimeEdit_currentSectionIndex arginfo_class_Qt_Core_QTime_hour

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_date, 0, 0, Qt\\Core\\QDate, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_dateTime, 0, 0, Qt\\Core\\QDateTime, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDateTimeEdit_displayFormat arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QDateTimeEdit_maximumDate arginfo_class_Qt_Widgets_QDateTimeEdit_date

#define arginfo_class_Qt_Widgets_QDateTimeEdit_maximumDateTime arginfo_class_Qt_Widgets_QDateTimeEdit_dateTime

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_maximumTime, 0, 0, Qt\\Core\\QTime, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDateTimeEdit_minimumDate arginfo_class_Qt_Widgets_QDateTimeEdit_date

#define arginfo_class_Qt_Widgets_QDateTimeEdit_minimumDateTime arginfo_class_Qt_Widgets_QDateTimeEdit_dateTime

#define arginfo_class_Qt_Widgets_QDateTimeEdit_minimumTime arginfo_class_Qt_Widgets_QDateTimeEdit_maximumTime

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_sectionAt, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDateTimeEdit_sectionCount arginfo_class_Qt_Core_QTime_hour

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_sectionText, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setCalendar, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, calendar, Qt\\Core\\QCalendar, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDateTimeEdit_setCalendarPopup arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setCurrentSection, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setCurrentSectionIndex, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setDateRange, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, min, Qt\\Core\\QDate, 0)
	ZEND_ARG_OBJ_INFO(0, max, Qt\\Core\\QDate, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setDateTimeRange, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, min, Qt\\Core\\QDateTime, 0)
	ZEND_ARG_OBJ_INFO(0, max, Qt\\Core\\QDateTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setDisplayFormat, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setMaximumDate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, max, Qt\\Core\\QDate, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setMaximumDateTime, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, dt, Qt\\Core\\QDateTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setMaximumTime, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, max, Qt\\Core\\QTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setMinimumDate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, min, Qt\\Core\\QDate, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDateTimeEdit_setMinimumDateTime arginfo_class_Qt_Widgets_QDateTimeEdit_setMaximumDateTime

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setMinimumTime, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, min, Qt\\Core\\QTime, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDateTimeEdit_setSelectedSection arginfo_class_Qt_Widgets_QDateTimeEdit_setCurrentSection

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setTimeRange, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, min, Qt\\Core\\QTime, 0)
	ZEND_ARG_OBJ_INFO(0, max, Qt\\Core\\QTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setTimeZone, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, timeZone, Qt\\Core\\QTimeZone, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDateTimeEdit_time arginfo_class_Qt_Widgets_QDateTimeEdit_maximumTime

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_timeZone, 0, 0, Qt\\Core\\QTimeZone, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setDate, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, date, Qt\\Core\\QDate, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setDateTime, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, dateTime, Qt\\Core\\QDateTime, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDateTimeEdit_setTime, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, time, Qt\\Core\\QTime, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDateTimeEdit_onDateChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QDateTimeEdit_onDateTimeChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QDateTimeEdit_onTimeChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QHBoxLayout___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QVBoxLayout___construct arginfo_class_Qt_Widgets_QHBoxLayout___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QWidget___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, windowFlags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_isWindowModified arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setLayout, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, layout, Qt\\Widgets\\QLayout, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setWindowModified, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, modified, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setWindowTitle, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_show arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_showFullScreen arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_showMaximized arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_showMinimized arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_showNormal arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget___destruct arginfo_class_Qt_Widgets_QApplication___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QLabel___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, windowFlags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLabel_setText arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QLabel_text arginfo_class_Qt_Core_QObject_objectName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLayout_addWidget, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, Qt\\Widgets\\QWidget, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLayout_removeWidget arginfo_class_Qt_Widgets_QLayout_addWidget

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLayout_setSpacing, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLayout_spacing arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QLayout___destruct arginfo_class_Qt_Widgets_QApplication___construct

#define arginfo_class_Qt_Widgets_QLineEdit___construct arginfo_class_Qt_Widgets_QCheckBox___construct

#define arginfo_class_Qt_Widgets_QLineEdit_backspace arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_cursorPosition arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QLineEdit_del arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_deselect arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_displayText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QLineEdit_echoMode arginfo_class_Qt_Core_QTime_hour

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_end, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mark, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_hasSelectedText arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QLineEdit_home arginfo_class_Qt_Widgets_QLineEdit_end

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_insert, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, newText, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_isClearButtonEnabled arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QLineEdit_isModified arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QLineEdit_isReadOnly arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QLineEdit_maxLength arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QLineEdit_placeholderText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QLineEdit_selectedText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QLineEdit_setClearButtonEnabled arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setCursorPosition, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_setEchoMode arginfo_class_Qt_Widgets_QAbstractSpinBox_setCorrectionMode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setMaxLength, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setPlaceholderText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, placeholderText, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_setReadOnly arginfo_class_Qt_Widgets_QAbstractSpinBox_setReadOnly

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setSelection, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_setText arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QLineEdit_text arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QLineEdit_onEditingFinished arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QLineEdit_onReturnPressed arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QLineEdit_onTextChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QLineEdit_clear arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_copy arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_cut arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_paste arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_redo arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_selectAll arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_undo arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QMainWindow___construct arginfo_class_Qt_Widgets_QWidget___construct

#define arginfo_class_Qt_Widgets_QMainWindow_setCentralWidget arginfo_class_Qt_Widgets_QLayout_addWidget

#define arginfo_class_Qt_Widgets_QPushButton___construct arginfo_class_Qt_Widgets_QCheckBox___construct

#define arginfo_class_Qt_Widgets_QRadioButton___construct arginfo_class_Qt_Widgets_QCheckBox___construct

#define arginfo_class_Qt_Widgets_QSpinBox___construct arginfo_class_Qt_Widgets_QHBoxLayout___construct

#define arginfo_class_Qt_Widgets_QSpinBox_cleanText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QSpinBox_displayIntegerBase arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QSpinBox_maximum arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QSpinBox_minimum arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QSpinBox_prefix arginfo_class_Qt_Core_QObject_objectName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setDisplayIntegerBase, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setMaximum, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setMinimum, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setPrefix, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setRange, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setSingleStep, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setStepType, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, stepType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setSuffix, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, suffix, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QSpinBox_singleStep arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QSpinBox_stepType arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QSpinBox_suffix arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QSpinBox_value arginfo_class_Qt_Core_QTime_hour

#define arginfo_class_Qt_Widgets_QSpinBox_setValue arginfo_class_Qt_Widgets_QSpinBox_setSingleStep

#define arginfo_class_Qt_Widgets_QSpinBox_onTextChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QSpinBox_onValueChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked


ZEND_METHOD(Qt_Core_QCalendar, __construct);
ZEND_METHOD(Qt_Core_QCalendar, isValid);
ZEND_METHOD(Qt_Core_QDate, __construct);
ZEND_METHOD(Qt_Core_QDate, day);
ZEND_METHOD(Qt_Core_QDate, isNull);
ZEND_METHOD(Qt_Core_QDate, isValid);
ZEND_METHOD(Qt_Core_QDate, month);
ZEND_METHOD(Qt_Core_QDate, year);
ZEND_METHOD(Qt_Core_QDateTime, __construct);
ZEND_METHOD(Qt_Core_QObject, __construct);
ZEND_METHOD(Qt_Core_QObject, blockSignals);
ZEND_METHOD(Qt_Core_QObject, dumpObjectInfo);
ZEND_METHOD(Qt_Core_QObject, dumpObjectTree);
ZEND_METHOD(Qt_Core_QObject, isQuickItemType);
ZEND_METHOD(Qt_Core_QObject, isWidgetType);
ZEND_METHOD(Qt_Core_QObject, isWindowType);
ZEND_METHOD(Qt_Core_QObject, killTimer);
ZEND_METHOD(Qt_Core_QObject, objectName);
ZEND_METHOD(Qt_Core_QObject, setObjectName);
ZEND_METHOD(Qt_Core_QObject, setParent);
ZEND_METHOD(Qt_Core_QObject, signalsBlocked);
ZEND_METHOD(Qt_Core_QObject, startTimer);
ZEND_METHOD(Qt_Core_QTime, __construct);
ZEND_METHOD(Qt_Core_QTime, hour);
ZEND_METHOD(Qt_Core_QTime, isNull);
ZEND_METHOD(Qt_Core_QTime, isValid);
ZEND_METHOD(Qt_Core_QTime, minute);
ZEND_METHOD(Qt_Core_QTime, msec);
ZEND_METHOD(Qt_Core_QTime, second);
ZEND_METHOD(Qt_Core_QTimeZone, __construct);
ZEND_METHOD(Qt_Core_QTimeZone, isValid);
ZEND_METHOD(Qt_Widgets_QApplication, __construct);
ZEND_METHOD(Qt_Widgets_QApplication, exec);
ZEND_METHOD(Qt_Widgets_QAbstractButton, autoRepeat);
ZEND_METHOD(Qt_Widgets_QAbstractButton, autoRepeatDelay);
ZEND_METHOD(Qt_Widgets_QAbstractButton, autoRepeatInterval);
ZEND_METHOD(Qt_Widgets_QAbstractButton, isChecked);
ZEND_METHOD(Qt_Widgets_QAbstractButton, setAutoRepeat);
ZEND_METHOD(Qt_Widgets_QAbstractButton, setAutoRepeatDelay);
ZEND_METHOD(Qt_Widgets_QAbstractButton, setAutoRepeatInterval);
ZEND_METHOD(Qt_Widgets_QAbstractButton, setChecked);
ZEND_METHOD(Qt_Widgets_QAbstractButton, setText);
ZEND_METHOD(Qt_Widgets_QAbstractButton, text);
ZEND_METHOD(Qt_Widgets_QAbstractButton, animateClick);
ZEND_METHOD(Qt_Widgets_QAbstractButton, click);
ZEND_METHOD(Qt_Widgets_QAbstractButton, toggle);
ZEND_METHOD(Qt_Widgets_QAbstractButton, onClicked);
ZEND_METHOD(Qt_Widgets_QAbstractButton, onPressed);
ZEND_METHOD(Qt_Widgets_QAbstractButton, onReleased);
ZEND_METHOD(Qt_Widgets_QAbstractButton, onToggled);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, alignment);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, buttonSymbols);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, correctionMode);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, hasAcceptableInput);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, hasFrame);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, interpretText);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, isAccelerated);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, isGroupSeparatorShown);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, isReadOnly);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, keyboardTracking);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, setAccelerated);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, setAlignment);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, setButtonSymbols);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, setCorrectionMode);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, setFrame);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, setGroupSeparatorShown);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, setKeyboardTracking);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, setReadOnly);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, setSpecialValueText);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, setWrapping);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, specialValueText);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, stepBy);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, text);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, wrapping);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, onEditingFinished);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, clear);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, selectAll);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, stepDown);
ZEND_METHOD(Qt_Widgets_QAbstractSpinBox, stepUp);
ZEND_METHOD(Qt_Widgets_QBoxLayout, __construct);
ZEND_METHOD(Qt_Widgets_QBoxLayout, addStretch);
ZEND_METHOD(Qt_Widgets_QBoxLayout, addSpacing);
ZEND_METHOD(Qt_Widgets_QBoxLayout, setDirection);
ZEND_METHOD(Qt_Widgets_QCheckBox, __construct);
ZEND_METHOD(Qt_Widgets_QCheckBox, checkState);
ZEND_METHOD(Qt_Widgets_QCheckBox, isTristate);
ZEND_METHOD(Qt_Widgets_QCheckBox, setCheckState);
ZEND_METHOD(Qt_Widgets_QCheckBox, setTristate);
ZEND_METHOD(Qt_Widgets_QCheckBox, onCheckStateChanged);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, __construct);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, calendar);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, calendarPopup);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, clear);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, clearMaximumDate);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, clearMaximumDateTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, clearMaximumTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, clearMinimumDate);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, clearMinimumDateTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, clearMinimumTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, currentSection);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, currentSectionIndex);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, date);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, dateTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, displayFormat);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, maximumDate);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, maximumDateTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, maximumTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, minimumDate);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, minimumDateTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, minimumTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, sectionAt);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, sectionCount);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, sectionText);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setCalendar);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setCalendarPopup);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setCurrentSection);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setCurrentSectionIndex);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setDateRange);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setDateTimeRange);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setDisplayFormat);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setMaximumDate);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setMaximumDateTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setMaximumTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setMinimumDate);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setMinimumDateTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setMinimumTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setSelectedSection);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setTimeRange);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setTimeZone);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, time);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, timeZone);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setDate);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setDateTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, setTime);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, onDateChanged);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, onDateTimeChanged);
ZEND_METHOD(Qt_Widgets_QDateTimeEdit, onTimeChanged);
ZEND_METHOD(Qt_Widgets_QHBoxLayout, __construct);
ZEND_METHOD(Qt_Widgets_QVBoxLayout, __construct);
ZEND_METHOD(Qt_Widgets_QWidget, __construct);
ZEND_METHOD(Qt_Widgets_QWidget, isWindowModified);
ZEND_METHOD(Qt_Widgets_QWidget, setLayout);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowModified);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowTitle);
ZEND_METHOD(Qt_Widgets_QWidget, show);
ZEND_METHOD(Qt_Widgets_QWidget, showFullScreen);
ZEND_METHOD(Qt_Widgets_QWidget, showMaximized);
ZEND_METHOD(Qt_Widgets_QWidget, showMinimized);
ZEND_METHOD(Qt_Widgets_QWidget, showNormal);
ZEND_METHOD(Qt_Widgets_QWidget, __destruct);
ZEND_METHOD(Qt_Widgets_QLabel, __construct);
ZEND_METHOD(Qt_Widgets_QLabel, setText);
ZEND_METHOD(Qt_Widgets_QLabel, text);
ZEND_METHOD(Qt_Widgets_QLayout, addWidget);
ZEND_METHOD(Qt_Widgets_QLayout, removeWidget);
ZEND_METHOD(Qt_Widgets_QLayout, setSpacing);
ZEND_METHOD(Qt_Widgets_QLayout, spacing);
ZEND_METHOD(Qt_Widgets_QLayout, __destruct);
ZEND_METHOD(Qt_Widgets_QLineEdit, __construct);
ZEND_METHOD(Qt_Widgets_QLineEdit, backspace);
ZEND_METHOD(Qt_Widgets_QLineEdit, cursorPosition);
ZEND_METHOD(Qt_Widgets_QLineEdit, del);
ZEND_METHOD(Qt_Widgets_QLineEdit, deselect);
ZEND_METHOD(Qt_Widgets_QLineEdit, displayText);
ZEND_METHOD(Qt_Widgets_QLineEdit, echoMode);
ZEND_METHOD(Qt_Widgets_QLineEdit, end);
ZEND_METHOD(Qt_Widgets_QLineEdit, hasSelectedText);
ZEND_METHOD(Qt_Widgets_QLineEdit, home);
ZEND_METHOD(Qt_Widgets_QLineEdit, insert);
ZEND_METHOD(Qt_Widgets_QLineEdit, isClearButtonEnabled);
ZEND_METHOD(Qt_Widgets_QLineEdit, isModified);
ZEND_METHOD(Qt_Widgets_QLineEdit, isReadOnly);
ZEND_METHOD(Qt_Widgets_QLineEdit, maxLength);
ZEND_METHOD(Qt_Widgets_QLineEdit, placeholderText);
ZEND_METHOD(Qt_Widgets_QLineEdit, selectedText);
ZEND_METHOD(Qt_Widgets_QLineEdit, setClearButtonEnabled);
ZEND_METHOD(Qt_Widgets_QLineEdit, setCursorPosition);
ZEND_METHOD(Qt_Widgets_QLineEdit, setEchoMode);
ZEND_METHOD(Qt_Widgets_QLineEdit, setMaxLength);
ZEND_METHOD(Qt_Widgets_QLineEdit, setPlaceholderText);
ZEND_METHOD(Qt_Widgets_QLineEdit, setReadOnly);
ZEND_METHOD(Qt_Widgets_QLineEdit, setSelection);
ZEND_METHOD(Qt_Widgets_QLineEdit, setText);
ZEND_METHOD(Qt_Widgets_QLineEdit, text);
ZEND_METHOD(Qt_Widgets_QLineEdit, onEditingFinished);
ZEND_METHOD(Qt_Widgets_QLineEdit, onReturnPressed);
ZEND_METHOD(Qt_Widgets_QLineEdit, onTextChanged);
ZEND_METHOD(Qt_Widgets_QLineEdit, clear);
ZEND_METHOD(Qt_Widgets_QLineEdit, copy);
ZEND_METHOD(Qt_Widgets_QLineEdit, cut);
ZEND_METHOD(Qt_Widgets_QLineEdit, paste);
ZEND_METHOD(Qt_Widgets_QLineEdit, redo);
ZEND_METHOD(Qt_Widgets_QLineEdit, selectAll);
ZEND_METHOD(Qt_Widgets_QLineEdit, undo);
ZEND_METHOD(Qt_Widgets_QMainWindow, __construct);
ZEND_METHOD(Qt_Widgets_QMainWindow, setCentralWidget);
ZEND_METHOD(Qt_Widgets_QPushButton, __construct);
ZEND_METHOD(Qt_Widgets_QRadioButton, __construct);
ZEND_METHOD(Qt_Widgets_QSpinBox, __construct);
ZEND_METHOD(Qt_Widgets_QSpinBox, cleanText);
ZEND_METHOD(Qt_Widgets_QSpinBox, displayIntegerBase);
ZEND_METHOD(Qt_Widgets_QSpinBox, maximum);
ZEND_METHOD(Qt_Widgets_QSpinBox, minimum);
ZEND_METHOD(Qt_Widgets_QSpinBox, prefix);
ZEND_METHOD(Qt_Widgets_QSpinBox, setDisplayIntegerBase);
ZEND_METHOD(Qt_Widgets_QSpinBox, setMaximum);
ZEND_METHOD(Qt_Widgets_QSpinBox, setMinimum);
ZEND_METHOD(Qt_Widgets_QSpinBox, setPrefix);
ZEND_METHOD(Qt_Widgets_QSpinBox, setRange);
ZEND_METHOD(Qt_Widgets_QSpinBox, setSingleStep);
ZEND_METHOD(Qt_Widgets_QSpinBox, setStepType);
ZEND_METHOD(Qt_Widgets_QSpinBox, setSuffix);
ZEND_METHOD(Qt_Widgets_QSpinBox, singleStep);
ZEND_METHOD(Qt_Widgets_QSpinBox, stepType);
ZEND_METHOD(Qt_Widgets_QSpinBox, suffix);
ZEND_METHOD(Qt_Widgets_QSpinBox, value);
ZEND_METHOD(Qt_Widgets_QSpinBox, setValue);
ZEND_METHOD(Qt_Widgets_QSpinBox, onTextChanged);
ZEND_METHOD(Qt_Widgets_QSpinBox, onValueChanged);


static const zend_function_entry class_Qt_CheckState_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_Qt_WindowType_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_Qt_AlignmentFlag_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Core_QCalendar_methods[] = {
	ZEND_ME(Qt_Core_QCalendar, __construct, arginfo_class_Qt_Core_QCalendar___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QCalendar, isValid, arginfo_class_Qt_Core_QCalendar_isValid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Core_QDate_methods[] = {
	ZEND_ME(Qt_Core_QDate, __construct, arginfo_class_Qt_Core_QDate___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QDate, day, arginfo_class_Qt_Core_QDate_day, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QDate, isNull, arginfo_class_Qt_Core_QDate_isNull, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QDate, isValid, arginfo_class_Qt_Core_QDate_isValid, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QDate, month, arginfo_class_Qt_Core_QDate_month, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QDate, year, arginfo_class_Qt_Core_QDate_year, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Core_QDateTime_methods[] = {
	ZEND_ME(Qt_Core_QDateTime, __construct, arginfo_class_Qt_Core_QDateTime___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Core_QObject_methods[] = {
	ZEND_ME(Qt_Core_QObject, __construct, arginfo_class_Qt_Core_QObject___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, blockSignals, arginfo_class_Qt_Core_QObject_blockSignals, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, dumpObjectInfo, arginfo_class_Qt_Core_QObject_dumpObjectInfo, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, dumpObjectTree, arginfo_class_Qt_Core_QObject_dumpObjectTree, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, isQuickItemType, arginfo_class_Qt_Core_QObject_isQuickItemType, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, isWidgetType, arginfo_class_Qt_Core_QObject_isWidgetType, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, isWindowType, arginfo_class_Qt_Core_QObject_isWindowType, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, killTimer, arginfo_class_Qt_Core_QObject_killTimer, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, objectName, arginfo_class_Qt_Core_QObject_objectName, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, setObjectName, arginfo_class_Qt_Core_QObject_setObjectName, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, setParent, arginfo_class_Qt_Core_QObject_setParent, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, signalsBlocked, arginfo_class_Qt_Core_QObject_signalsBlocked, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QObject, startTimer, arginfo_class_Qt_Core_QObject_startTimer, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Core_QTime_methods[] = {
	ZEND_ME(Qt_Core_QTime, __construct, arginfo_class_Qt_Core_QTime___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QTime, hour, arginfo_class_Qt_Core_QTime_hour, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QTime, isNull, arginfo_class_Qt_Core_QTime_isNull, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QTime, isValid, arginfo_class_Qt_Core_QTime_isValid, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QTime, minute, arginfo_class_Qt_Core_QTime_minute, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QTime, msec, arginfo_class_Qt_Core_QTime_msec, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QTime, second, arginfo_class_Qt_Core_QTime_second, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Core_QTimeZone_methods[] = {
	ZEND_ME(Qt_Core_QTimeZone, __construct, arginfo_class_Qt_Core_QTimeZone___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QTimeZone, isValid, arginfo_class_Qt_Core_QTimeZone_isValid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QApplication_methods[] = {
	ZEND_ME(Qt_Widgets_QApplication, __construct, arginfo_class_Qt_Widgets_QApplication___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QApplication, exec, arginfo_class_Qt_Widgets_QApplication_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QAbstractButton_methods[] = {
	ZEND_ME(Qt_Widgets_QAbstractButton, autoRepeat, arginfo_class_Qt_Widgets_QAbstractButton_autoRepeat, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, autoRepeatDelay, arginfo_class_Qt_Widgets_QAbstractButton_autoRepeatDelay, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, autoRepeatInterval, arginfo_class_Qt_Widgets_QAbstractButton_autoRepeatInterval, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, isChecked, arginfo_class_Qt_Widgets_QAbstractButton_isChecked, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, setAutoRepeat, arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, setAutoRepeatDelay, arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeatDelay, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, setAutoRepeatInterval, arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeatInterval, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, setChecked, arginfo_class_Qt_Widgets_QAbstractButton_setChecked, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, setText, arginfo_class_Qt_Widgets_QAbstractButton_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, text, arginfo_class_Qt_Widgets_QAbstractButton_text, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, animateClick, arginfo_class_Qt_Widgets_QAbstractButton_animateClick, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, click, arginfo_class_Qt_Widgets_QAbstractButton_click, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, toggle, arginfo_class_Qt_Widgets_QAbstractButton_toggle, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, onClicked, arginfo_class_Qt_Widgets_QAbstractButton_onClicked, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, onPressed, arginfo_class_Qt_Widgets_QAbstractButton_onPressed, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, onReleased, arginfo_class_Qt_Widgets_QAbstractButton_onReleased, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractButton, onToggled, arginfo_class_Qt_Widgets_QAbstractButton_onToggled, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QAbstractSpinBox_methods[] = {
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, alignment, arginfo_class_Qt_Widgets_QAbstractSpinBox_alignment, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, buttonSymbols, arginfo_class_Qt_Widgets_QAbstractSpinBox_buttonSymbols, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, correctionMode, arginfo_class_Qt_Widgets_QAbstractSpinBox_correctionMode, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, hasAcceptableInput, arginfo_class_Qt_Widgets_QAbstractSpinBox_hasAcceptableInput, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, hasFrame, arginfo_class_Qt_Widgets_QAbstractSpinBox_hasFrame, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, interpretText, arginfo_class_Qt_Widgets_QAbstractSpinBox_interpretText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, isAccelerated, arginfo_class_Qt_Widgets_QAbstractSpinBox_isAccelerated, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, isGroupSeparatorShown, arginfo_class_Qt_Widgets_QAbstractSpinBox_isGroupSeparatorShown, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, isReadOnly, arginfo_class_Qt_Widgets_QAbstractSpinBox_isReadOnly, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, keyboardTracking, arginfo_class_Qt_Widgets_QAbstractSpinBox_keyboardTracking, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, setAccelerated, arginfo_class_Qt_Widgets_QAbstractSpinBox_setAccelerated, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, setAlignment, arginfo_class_Qt_Widgets_QAbstractSpinBox_setAlignment, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, setButtonSymbols, arginfo_class_Qt_Widgets_QAbstractSpinBox_setButtonSymbols, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, setCorrectionMode, arginfo_class_Qt_Widgets_QAbstractSpinBox_setCorrectionMode, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, setFrame, arginfo_class_Qt_Widgets_QAbstractSpinBox_setFrame, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, setGroupSeparatorShown, arginfo_class_Qt_Widgets_QAbstractSpinBox_setGroupSeparatorShown, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, setKeyboardTracking, arginfo_class_Qt_Widgets_QAbstractSpinBox_setKeyboardTracking, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, setReadOnly, arginfo_class_Qt_Widgets_QAbstractSpinBox_setReadOnly, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, setSpecialValueText, arginfo_class_Qt_Widgets_QAbstractSpinBox_setSpecialValueText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, setWrapping, arginfo_class_Qt_Widgets_QAbstractSpinBox_setWrapping, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, specialValueText, arginfo_class_Qt_Widgets_QAbstractSpinBox_specialValueText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, stepBy, arginfo_class_Qt_Widgets_QAbstractSpinBox_stepBy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, text, arginfo_class_Qt_Widgets_QAbstractSpinBox_text, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, wrapping, arginfo_class_Qt_Widgets_QAbstractSpinBox_wrapping, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, onEditingFinished, arginfo_class_Qt_Widgets_QAbstractSpinBox_onEditingFinished, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, clear, arginfo_class_Qt_Widgets_QAbstractSpinBox_clear, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, selectAll, arginfo_class_Qt_Widgets_QAbstractSpinBox_selectAll, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, stepDown, arginfo_class_Qt_Widgets_QAbstractSpinBox_stepDown, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSpinBox, stepUp, arginfo_class_Qt_Widgets_QAbstractSpinBox_stepUp, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QBoxLayout_methods[] = {
	ZEND_ME(Qt_Widgets_QBoxLayout, __construct, arginfo_class_Qt_Widgets_QBoxLayout___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QBoxLayout, addStretch, arginfo_class_Qt_Widgets_QBoxLayout_addStretch, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QBoxLayout, addSpacing, arginfo_class_Qt_Widgets_QBoxLayout_addSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QBoxLayout, setDirection, arginfo_class_Qt_Widgets_QBoxLayout_setDirection, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QCheckBox_methods[] = {
	ZEND_ME(Qt_Widgets_QCheckBox, __construct, arginfo_class_Qt_Widgets_QCheckBox___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QCheckBox, checkState, arginfo_class_Qt_Widgets_QCheckBox_checkState, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QCheckBox, isTristate, arginfo_class_Qt_Widgets_QCheckBox_isTristate, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QCheckBox, setCheckState, arginfo_class_Qt_Widgets_QCheckBox_setCheckState, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QCheckBox, setTristate, arginfo_class_Qt_Widgets_QCheckBox_setTristate, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QCheckBox, onCheckStateChanged, arginfo_class_Qt_Widgets_QCheckBox_onCheckStateChanged, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QDateTimeEdit_methods[] = {
	ZEND_ME(Qt_Widgets_QDateTimeEdit, __construct, arginfo_class_Qt_Widgets_QDateTimeEdit___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, calendar, arginfo_class_Qt_Widgets_QDateTimeEdit_calendar, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, calendarPopup, arginfo_class_Qt_Widgets_QDateTimeEdit_calendarPopup, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, clear, arginfo_class_Qt_Widgets_QDateTimeEdit_clear, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, clearMaximumDate, arginfo_class_Qt_Widgets_QDateTimeEdit_clearMaximumDate, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, clearMaximumDateTime, arginfo_class_Qt_Widgets_QDateTimeEdit_clearMaximumDateTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, clearMaximumTime, arginfo_class_Qt_Widgets_QDateTimeEdit_clearMaximumTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, clearMinimumDate, arginfo_class_Qt_Widgets_QDateTimeEdit_clearMinimumDate, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, clearMinimumDateTime, arginfo_class_Qt_Widgets_QDateTimeEdit_clearMinimumDateTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, clearMinimumTime, arginfo_class_Qt_Widgets_QDateTimeEdit_clearMinimumTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, currentSection, arginfo_class_Qt_Widgets_QDateTimeEdit_currentSection, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, currentSectionIndex, arginfo_class_Qt_Widgets_QDateTimeEdit_currentSectionIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, date, arginfo_class_Qt_Widgets_QDateTimeEdit_date, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, dateTime, arginfo_class_Qt_Widgets_QDateTimeEdit_dateTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, displayFormat, arginfo_class_Qt_Widgets_QDateTimeEdit_displayFormat, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, maximumDate, arginfo_class_Qt_Widgets_QDateTimeEdit_maximumDate, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, maximumDateTime, arginfo_class_Qt_Widgets_QDateTimeEdit_maximumDateTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, maximumTime, arginfo_class_Qt_Widgets_QDateTimeEdit_maximumTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, minimumDate, arginfo_class_Qt_Widgets_QDateTimeEdit_minimumDate, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, minimumDateTime, arginfo_class_Qt_Widgets_QDateTimeEdit_minimumDateTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, minimumTime, arginfo_class_Qt_Widgets_QDateTimeEdit_minimumTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, sectionAt, arginfo_class_Qt_Widgets_QDateTimeEdit_sectionAt, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, sectionCount, arginfo_class_Qt_Widgets_QDateTimeEdit_sectionCount, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, sectionText, arginfo_class_Qt_Widgets_QDateTimeEdit_sectionText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setCalendar, arginfo_class_Qt_Widgets_QDateTimeEdit_setCalendar, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setCalendarPopup, arginfo_class_Qt_Widgets_QDateTimeEdit_setCalendarPopup, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setCurrentSection, arginfo_class_Qt_Widgets_QDateTimeEdit_setCurrentSection, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setCurrentSectionIndex, arginfo_class_Qt_Widgets_QDateTimeEdit_setCurrentSectionIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setDateRange, arginfo_class_Qt_Widgets_QDateTimeEdit_setDateRange, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setDateTimeRange, arginfo_class_Qt_Widgets_QDateTimeEdit_setDateTimeRange, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setDisplayFormat, arginfo_class_Qt_Widgets_QDateTimeEdit_setDisplayFormat, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setMaximumDate, arginfo_class_Qt_Widgets_QDateTimeEdit_setMaximumDate, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setMaximumDateTime, arginfo_class_Qt_Widgets_QDateTimeEdit_setMaximumDateTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setMaximumTime, arginfo_class_Qt_Widgets_QDateTimeEdit_setMaximumTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setMinimumDate, arginfo_class_Qt_Widgets_QDateTimeEdit_setMinimumDate, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setMinimumDateTime, arginfo_class_Qt_Widgets_QDateTimeEdit_setMinimumDateTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setMinimumTime, arginfo_class_Qt_Widgets_QDateTimeEdit_setMinimumTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setSelectedSection, arginfo_class_Qt_Widgets_QDateTimeEdit_setSelectedSection, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setTimeRange, arginfo_class_Qt_Widgets_QDateTimeEdit_setTimeRange, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setTimeZone, arginfo_class_Qt_Widgets_QDateTimeEdit_setTimeZone, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, time, arginfo_class_Qt_Widgets_QDateTimeEdit_time, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, timeZone, arginfo_class_Qt_Widgets_QDateTimeEdit_timeZone, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setDate, arginfo_class_Qt_Widgets_QDateTimeEdit_setDate, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setDateTime, arginfo_class_Qt_Widgets_QDateTimeEdit_setDateTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, setTime, arginfo_class_Qt_Widgets_QDateTimeEdit_setTime, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, onDateChanged, arginfo_class_Qt_Widgets_QDateTimeEdit_onDateChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, onDateTimeChanged, arginfo_class_Qt_Widgets_QDateTimeEdit_onDateTimeChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDateTimeEdit, onTimeChanged, arginfo_class_Qt_Widgets_QDateTimeEdit_onTimeChanged, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QHBoxLayout_methods[] = {
	ZEND_ME(Qt_Widgets_QHBoxLayout, __construct, arginfo_class_Qt_Widgets_QHBoxLayout___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QVBoxLayout_methods[] = {
	ZEND_ME(Qt_Widgets_QVBoxLayout, __construct, arginfo_class_Qt_Widgets_QVBoxLayout___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QWidget_methods[] = {
	ZEND_ME(Qt_Widgets_QWidget, __construct, arginfo_class_Qt_Widgets_QWidget___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isWindowModified, arginfo_class_Qt_Widgets_QWidget_isWindowModified, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setLayout, arginfo_class_Qt_Widgets_QWidget_setLayout, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowModified, arginfo_class_Qt_Widgets_QWidget_setWindowModified, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowTitle, arginfo_class_Qt_Widgets_QWidget_setWindowTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, show, arginfo_class_Qt_Widgets_QWidget_show, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showFullScreen, arginfo_class_Qt_Widgets_QWidget_showFullScreen, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showMaximized, arginfo_class_Qt_Widgets_QWidget_showMaximized, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showMinimized, arginfo_class_Qt_Widgets_QWidget_showMinimized, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showNormal, arginfo_class_Qt_Widgets_QWidget_showNormal, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, __destruct, arginfo_class_Qt_Widgets_QWidget___destruct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QLabel_methods[] = {
	ZEND_ME(Qt_Widgets_QLabel, __construct, arginfo_class_Qt_Widgets_QLabel___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, setText, arginfo_class_Qt_Widgets_QLabel_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, text, arginfo_class_Qt_Widgets_QLabel_text, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QLayout_methods[] = {
	ZEND_ME(Qt_Widgets_QLayout, addWidget, arginfo_class_Qt_Widgets_QLayout_addWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLayout, removeWidget, arginfo_class_Qt_Widgets_QLayout_removeWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLayout, setSpacing, arginfo_class_Qt_Widgets_QLayout_setSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLayout, spacing, arginfo_class_Qt_Widgets_QLayout_spacing, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLayout, __destruct, arginfo_class_Qt_Widgets_QLayout___destruct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QLineEdit_methods[] = {
	ZEND_ME(Qt_Widgets_QLineEdit, __construct, arginfo_class_Qt_Widgets_QLineEdit___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, backspace, arginfo_class_Qt_Widgets_QLineEdit_backspace, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, cursorPosition, arginfo_class_Qt_Widgets_QLineEdit_cursorPosition, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, del, arginfo_class_Qt_Widgets_QLineEdit_del, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, deselect, arginfo_class_Qt_Widgets_QLineEdit_deselect, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, displayText, arginfo_class_Qt_Widgets_QLineEdit_displayText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, echoMode, arginfo_class_Qt_Widgets_QLineEdit_echoMode, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, end, arginfo_class_Qt_Widgets_QLineEdit_end, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, hasSelectedText, arginfo_class_Qt_Widgets_QLineEdit_hasSelectedText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, home, arginfo_class_Qt_Widgets_QLineEdit_home, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, insert, arginfo_class_Qt_Widgets_QLineEdit_insert, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, isClearButtonEnabled, arginfo_class_Qt_Widgets_QLineEdit_isClearButtonEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, isModified, arginfo_class_Qt_Widgets_QLineEdit_isModified, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, isReadOnly, arginfo_class_Qt_Widgets_QLineEdit_isReadOnly, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, maxLength, arginfo_class_Qt_Widgets_QLineEdit_maxLength, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, placeholderText, arginfo_class_Qt_Widgets_QLineEdit_placeholderText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, selectedText, arginfo_class_Qt_Widgets_QLineEdit_selectedText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, setClearButtonEnabled, arginfo_class_Qt_Widgets_QLineEdit_setClearButtonEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, setCursorPosition, arginfo_class_Qt_Widgets_QLineEdit_setCursorPosition, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, setEchoMode, arginfo_class_Qt_Widgets_QLineEdit_setEchoMode, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, setMaxLength, arginfo_class_Qt_Widgets_QLineEdit_setMaxLength, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, setPlaceholderText, arginfo_class_Qt_Widgets_QLineEdit_setPlaceholderText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, setReadOnly, arginfo_class_Qt_Widgets_QLineEdit_setReadOnly, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, setSelection, arginfo_class_Qt_Widgets_QLineEdit_setSelection, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, setText, arginfo_class_Qt_Widgets_QLineEdit_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, text, arginfo_class_Qt_Widgets_QLineEdit_text, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, onEditingFinished, arginfo_class_Qt_Widgets_QLineEdit_onEditingFinished, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, onReturnPressed, arginfo_class_Qt_Widgets_QLineEdit_onReturnPressed, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, onTextChanged, arginfo_class_Qt_Widgets_QLineEdit_onTextChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, clear, arginfo_class_Qt_Widgets_QLineEdit_clear, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, copy, arginfo_class_Qt_Widgets_QLineEdit_copy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, cut, arginfo_class_Qt_Widgets_QLineEdit_cut, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, paste, arginfo_class_Qt_Widgets_QLineEdit_paste, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, redo, arginfo_class_Qt_Widgets_QLineEdit_redo, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, selectAll, arginfo_class_Qt_Widgets_QLineEdit_selectAll, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLineEdit, undo, arginfo_class_Qt_Widgets_QLineEdit_undo, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QMainWindow_methods[] = {
	ZEND_ME(Qt_Widgets_QMainWindow, __construct, arginfo_class_Qt_Widgets_QMainWindow___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QMainWindow, setCentralWidget, arginfo_class_Qt_Widgets_QMainWindow_setCentralWidget, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QPushButton_methods[] = {
	ZEND_ME(Qt_Widgets_QPushButton, __construct, arginfo_class_Qt_Widgets_QPushButton___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QRadioButton_methods[] = {
	ZEND_ME(Qt_Widgets_QRadioButton, __construct, arginfo_class_Qt_Widgets_QRadioButton___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QSpinBox_methods[] = {
	ZEND_ME(Qt_Widgets_QSpinBox, __construct, arginfo_class_Qt_Widgets_QSpinBox___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, cleanText, arginfo_class_Qt_Widgets_QSpinBox_cleanText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, displayIntegerBase, arginfo_class_Qt_Widgets_QSpinBox_displayIntegerBase, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, maximum, arginfo_class_Qt_Widgets_QSpinBox_maximum, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, minimum, arginfo_class_Qt_Widgets_QSpinBox_minimum, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, prefix, arginfo_class_Qt_Widgets_QSpinBox_prefix, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, setDisplayIntegerBase, arginfo_class_Qt_Widgets_QSpinBox_setDisplayIntegerBase, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, setMaximum, arginfo_class_Qt_Widgets_QSpinBox_setMaximum, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, setMinimum, arginfo_class_Qt_Widgets_QSpinBox_setMinimum, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, setPrefix, arginfo_class_Qt_Widgets_QSpinBox_setPrefix, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, setRange, arginfo_class_Qt_Widgets_QSpinBox_setRange, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, setSingleStep, arginfo_class_Qt_Widgets_QSpinBox_setSingleStep, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, setStepType, arginfo_class_Qt_Widgets_QSpinBox_setStepType, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, setSuffix, arginfo_class_Qt_Widgets_QSpinBox_setSuffix, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, singleStep, arginfo_class_Qt_Widgets_QSpinBox_singleStep, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, stepType, arginfo_class_Qt_Widgets_QSpinBox_stepType, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, suffix, arginfo_class_Qt_Widgets_QSpinBox_suffix, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, value, arginfo_class_Qt_Widgets_QSpinBox_value, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, setValue, arginfo_class_Qt_Widgets_QSpinBox_setValue, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, onTextChanged, arginfo_class_Qt_Widgets_QSpinBox_onTextChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSpinBox, onValueChanged, arginfo_class_Qt_Widgets_QSpinBox_onValueChanged, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_Qt_CheckState(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt", "CheckState", class_Qt_CheckState_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval const_Unchecked_value;
	ZVAL_LONG(&const_Unchecked_value, 0);
	zend_string *const_Unchecked_name = zend_string_init_interned("Unchecked", sizeof("Unchecked") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Unchecked_name, &const_Unchecked_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Unchecked_name);

	zval const_PartiallyChecked_value;
	ZVAL_LONG(&const_PartiallyChecked_value, 1);
	zend_string *const_PartiallyChecked_name = zend_string_init_interned("PartiallyChecked", sizeof("PartiallyChecked") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_PartiallyChecked_name, &const_PartiallyChecked_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_PartiallyChecked_name);

	zval const_Checked_value;
	ZVAL_LONG(&const_Checked_value, 2);
	zend_string *const_Checked_name = zend_string_init_interned("Checked", sizeof("Checked") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Checked_name, &const_Checked_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Checked_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_WindowType(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt", "WindowType", class_Qt_WindowType_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval const_Widget_value;
	ZVAL_LONG(&const_Widget_value, 0);
	zend_string *const_Widget_name = zend_string_init_interned("Widget", sizeof("Widget") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Widget_name, &const_Widget_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Widget_name);

	zval const_Window_value;
	ZVAL_LONG(&const_Window_value, 1);
	zend_string *const_Window_name = zend_string_init_interned("Window", sizeof("Window") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Window_name, &const_Window_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Window_name);

	zval const_Dialog_value;
	ZVAL_LONG(&const_Dialog_value, 2 | 1);
	zend_string *const_Dialog_name = zend_string_init_interned("Dialog", sizeof("Dialog") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Dialog_name, &const_Dialog_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Dialog_name);

	zval const_Sheet_value;
	ZVAL_LONG(&const_Sheet_value, 4 | 1);
	zend_string *const_Sheet_name = zend_string_init_interned("Sheet", sizeof("Sheet") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Sheet_name, &const_Sheet_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Sheet_name);

	zval const_Drawer_value;
	ZVAL_LONG(&const_Drawer_value, 4 | 1 | (2 | 1));
	zend_string *const_Drawer_name = zend_string_init_interned("Drawer", sizeof("Drawer") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Drawer_name, &const_Drawer_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Drawer_name);

	zval const_Popup_value;
	ZVAL_LONG(&const_Popup_value, 8 | 1);
	zend_string *const_Popup_name = zend_string_init_interned("Popup", sizeof("Popup") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Popup_name, &const_Popup_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Popup_name);

	zval const_Tool_value;
	ZVAL_LONG(&const_Tool_value, 8 | 1 | (2 | 1));
	zend_string *const_Tool_name = zend_string_init_interned("Tool", sizeof("Tool") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Tool_name, &const_Tool_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Tool_name);

	zval const_ToolTip_value;
	ZVAL_LONG(&const_ToolTip_value, 8 | 1 | (4 | 1));
	zend_string *const_ToolTip_name = zend_string_init_interned("ToolTip", sizeof("ToolTip") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_ToolTip_name, &const_ToolTip_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_ToolTip_name);

	zval const_SplashScreen_value;
	ZVAL_LONG(&const_SplashScreen_value, 8 | 1 | (4 | 1) | (2 | 1));
	zend_string *const_SplashScreen_name = zend_string_init_interned("SplashScreen", sizeof("SplashScreen") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SplashScreen_name, &const_SplashScreen_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SplashScreen_name);

	zval const_SubWindow_value;
	ZVAL_LONG(&const_SubWindow_value, 128);
	zend_string *const_SubWindow_name = zend_string_init_interned("SubWindow", sizeof("SubWindow") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SubWindow_name, &const_SubWindow_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SubWindow_name);

	zval const_ForeignWindow_value;
	ZVAL_LONG(&const_ForeignWindow_value, 20 | 1);
	zend_string *const_ForeignWindow_name = zend_string_init_interned("ForeignWindow", sizeof("ForeignWindow") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_ForeignWindow_name, &const_ForeignWindow_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_ForeignWindow_name);

	zval const_CoverWindow_value;
	ZVAL_LONG(&const_CoverWindow_value, 40 | 1);
	zend_string *const_CoverWindow_name = zend_string_init_interned("CoverWindow", sizeof("CoverWindow") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_CoverWindow_name, &const_CoverWindow_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_CoverWindow_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_AlignmentFlag(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt", "AlignmentFlag", class_Qt_AlignmentFlag_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval const_AlignLeft_value;
	ZVAL_LONG(&const_AlignLeft_value, 0x1);
	zend_string *const_AlignLeft_name = zend_string_init_interned("AlignLeft", sizeof("AlignLeft") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignLeft_name, &const_AlignLeft_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignLeft_name);

	zval const_AlignRight_value;
	ZVAL_LONG(&const_AlignRight_value, 0x2);
	zend_string *const_AlignRight_name = zend_string_init_interned("AlignRight", sizeof("AlignRight") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignRight_name, &const_AlignRight_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignRight_name);

	zval const_AlignHCenter_value;
	ZVAL_LONG(&const_AlignHCenter_value, 0x4);
	zend_string *const_AlignHCenter_name = zend_string_init_interned("AlignHCenter", sizeof("AlignHCenter") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignHCenter_name, &const_AlignHCenter_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignHCenter_name);

	zval const_AlignJustify_value;
	ZVAL_LONG(&const_AlignJustify_value, 0x8);
	zend_string *const_AlignJustify_name = zend_string_init_interned("AlignJustify", sizeof("AlignJustify") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignJustify_name, &const_AlignJustify_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignJustify_name);

	zval const_AlignTop_value;
	ZVAL_LONG(&const_AlignTop_value, 0x20);
	zend_string *const_AlignTop_name = zend_string_init_interned("AlignTop", sizeof("AlignTop") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignTop_name, &const_AlignTop_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignTop_name);

	zval const_AlignBottom_value;
	ZVAL_LONG(&const_AlignBottom_value, 0x40);
	zend_string *const_AlignBottom_name = zend_string_init_interned("AlignBottom", sizeof("AlignBottom") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignBottom_name, &const_AlignBottom_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignBottom_name);

	zval const_AlignVCenter_value;
	ZVAL_LONG(&const_AlignVCenter_value, 0x80);
	zend_string *const_AlignVCenter_name = zend_string_init_interned("AlignVCenter", sizeof("AlignVCenter") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignVCenter_name, &const_AlignVCenter_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignVCenter_name);

	zval const_AlignBaseline_value;
	ZVAL_LONG(&const_AlignBaseline_value, 0x100);
	zend_string *const_AlignBaseline_name = zend_string_init_interned("AlignBaseline", sizeof("AlignBaseline") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignBaseline_name, &const_AlignBaseline_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignBaseline_name);

	zval const_AlignCenter_value;
	ZVAL_LONG(&const_AlignCenter_value, 0x80 | 0x4);
	zend_string *const_AlignCenter_name = zend_string_init_interned("AlignCenter", sizeof("AlignCenter") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignCenter_name, &const_AlignCenter_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignCenter_name);

	zval const_AlignAbsolute_value;
	ZVAL_LONG(&const_AlignAbsolute_value, 0x10);
	zend_string *const_AlignAbsolute_name = zend_string_init_interned("AlignAbsolute", sizeof("AlignAbsolute") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignAbsolute_name, &const_AlignAbsolute_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignAbsolute_name);

	zval const_AlignLeading_value;
	ZVAL_LONG(&const_AlignLeading_value, 0x1);
	zend_string *const_AlignLeading_name = zend_string_init_interned("AlignLeading", sizeof("AlignLeading") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignLeading_name, &const_AlignLeading_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignLeading_name);

	zval const_AlignTrailing_value;
	ZVAL_LONG(&const_AlignTrailing_value, 0x2);
	zend_string *const_AlignTrailing_name = zend_string_init_interned("AlignTrailing", sizeof("AlignTrailing") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignTrailing_name, &const_AlignTrailing_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignTrailing_name);

	zval const_AlignHorizontal_Mask_value;
	ZVAL_LONG(&const_AlignHorizontal_Mask_value, 0x1 | 0x2 | 0x4 | 0x8 | 0x10);
	zend_string *const_AlignHorizontal_Mask_name = zend_string_init_interned("AlignHorizontal_Mask", sizeof("AlignHorizontal_Mask") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignHorizontal_Mask_name, &const_AlignHorizontal_Mask_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignHorizontal_Mask_name);

	zval const_AlignVertical_Mask_value;
	ZVAL_LONG(&const_AlignVertical_Mask_value, 0x20 | 0x40 | 0x80 | 0x100);
	zend_string *const_AlignVertical_Mask_name = zend_string_init_interned("AlignVertical_Mask", sizeof("AlignVertical_Mask") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AlignVertical_Mask_name, &const_AlignVertical_Mask_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AlignVertical_Mask_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Core_QCalendar(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Core", "QCalendar", class_Qt_Core_QCalendar_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval const_Gregorian_value;
	ZVAL_LONG(&const_Gregorian_value, 0);
	zend_string *const_Gregorian_name = zend_string_init_interned("Gregorian", sizeof("Gregorian") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Gregorian_name, &const_Gregorian_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Gregorian_name);

	zval const_Julian_value;
	ZVAL_LONG(&const_Julian_value, 8);
	zend_string *const_Julian_name = zend_string_init_interned("Julian", sizeof("Julian") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Julian_name, &const_Julian_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Julian_name);

	zval const_Milankovic_value;
	ZVAL_LONG(&const_Milankovic_value, 9);
	zend_string *const_Milankovic_name = zend_string_init_interned("Milankovic", sizeof("Milankovic") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Milankovic_name, &const_Milankovic_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Milankovic_name);

	zval const_Jalali_value;
	ZVAL_LONG(&const_Jalali_value, 10);
	zend_string *const_Jalali_name = zend_string_init_interned("Jalali", sizeof("Jalali") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Jalali_name, &const_Jalali_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Jalali_name);

	zval const_IslamicCivil_value;
	ZVAL_LONG(&const_IslamicCivil_value, 11);
	zend_string *const_IslamicCivil_name = zend_string_init_interned("IslamicCivil", sizeof("IslamicCivil") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_IslamicCivil_name, &const_IslamicCivil_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_IslamicCivil_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Core_QDate(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Core", "QDate", class_Qt_Core_QDate_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Core_QDateTime(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Core", "QDateTime", class_Qt_Core_QDateTime_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Core_QObject(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Core", "QObject", class_Qt_Core_QObject_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Core_QTime(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Core", "QTime", class_Qt_Core_QTime_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Core_QTimeZone(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Core", "QTimeZone", class_Qt_Core_QTimeZone_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QApplication(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QApplication", class_Qt_Widgets_QApplication_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QAbstractButton(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QAbstractButton", class_Qt_Widgets_QAbstractButton_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);
	class_entry->ce_flags |= ZEND_ACC_ABSTRACT;

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QAbstractSpinBox(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QAbstractSpinBox", class_Qt_Widgets_QAbstractSpinBox_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);
	class_entry->ce_flags |= ZEND_ACC_ABSTRACT;

	zval const_UpDownArrows_value;
	ZVAL_LONG(&const_UpDownArrows_value, 0);
	zend_string *const_UpDownArrows_name = zend_string_init_interned("UpDownArrows", sizeof("UpDownArrows") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_UpDownArrows_name, &const_UpDownArrows_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_UpDownArrows_name);

	zval const_PlusMinus_value;
	ZVAL_LONG(&const_PlusMinus_value, 1);
	zend_string *const_PlusMinus_name = zend_string_init_interned("PlusMinus", sizeof("PlusMinus") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_PlusMinus_name, &const_PlusMinus_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_PlusMinus_name);

	zval const_NoButtons_value;
	ZVAL_LONG(&const_NoButtons_value, 2);
	zend_string *const_NoButtons_name = zend_string_init_interned("NoButtons", sizeof("NoButtons") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_NoButtons_name, &const_NoButtons_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_NoButtons_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QBoxLayout(zend_class_entry *class_entry_Qt_Widgets_QLayout)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QBoxLayout", class_Qt_Widgets_QBoxLayout_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QLayout);

	zval const_LeftToRight_value;
	ZVAL_LONG(&const_LeftToRight_value, 0);
	zend_string *const_LeftToRight_name = zend_string_init_interned("LeftToRight", sizeof("LeftToRight") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_LeftToRight_name, &const_LeftToRight_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_LeftToRight_name);

	zval const_RightToLeft_value;
	ZVAL_LONG(&const_RightToLeft_value, 1);
	zend_string *const_RightToLeft_name = zend_string_init_interned("RightToLeft", sizeof("RightToLeft") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_RightToLeft_name, &const_RightToLeft_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_RightToLeft_name);

	zval const_TopToBottom_value;
	ZVAL_LONG(&const_TopToBottom_value, 2);
	zend_string *const_TopToBottom_name = zend_string_init_interned("TopToBottom", sizeof("TopToBottom") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TopToBottom_name, &const_TopToBottom_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TopToBottom_name);

	zval const_BottomToTop_value;
	ZVAL_LONG(&const_BottomToTop_value, 3);
	zend_string *const_BottomToTop_name = zend_string_init_interned("BottomToTop", sizeof("BottomToTop") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_BottomToTop_name, &const_BottomToTop_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_BottomToTop_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QCheckBox(zend_class_entry *class_entry_Qt_Widgets_QAbstractButton)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QCheckBox", class_Qt_Widgets_QCheckBox_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractButton);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QDateTimeEdit(zend_class_entry *class_entry_Qt_Widgets_QAbstractSpinbox)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QDateTimeEdit", class_Qt_Widgets_QDateTimeEdit_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractSpinbox);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QHBoxLayout(zend_class_entry *class_entry_Qt_Widgets_QBoxLayout)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QHBoxLayout", class_Qt_Widgets_QHBoxLayout_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QBoxLayout);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QVBoxLayout(zend_class_entry *class_entry_Qt_Widgets_QBoxLayout)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QVBoxLayout", class_Qt_Widgets_QVBoxLayout_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QBoxLayout);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QWidget(zend_class_entry *class_entry_Qt_Core_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QWidget", class_Qt_Widgets_QWidget_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Core_QObject);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QLabel(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QLabel", class_Qt_Widgets_QLabel_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QLayout(zend_class_entry *class_entry_Qt_Core_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QLayout", class_Qt_Widgets_QLayout_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Core_QObject);
	class_entry->ce_flags |= ZEND_ACC_ABSTRACT;

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QLineEdit(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QLineEdit", class_Qt_Widgets_QLineEdit_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);

	zval const_Normal_value;
	ZVAL_LONG(&const_Normal_value, 0);
	zend_string *const_Normal_name = zend_string_init_interned("Normal", sizeof("Normal") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Normal_name, &const_Normal_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Normal_name);

	zval const_NoEcho_value;
	ZVAL_LONG(&const_NoEcho_value, 1);
	zend_string *const_NoEcho_name = zend_string_init_interned("NoEcho", sizeof("NoEcho") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_NoEcho_name, &const_NoEcho_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_NoEcho_name);

	zval const_Password_value;
	ZVAL_LONG(&const_Password_value, 2);
	zend_string *const_Password_name = zend_string_init_interned("Password", sizeof("Password") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Password_name, &const_Password_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Password_name);

	zval const_PasswordEchoOnEdit_value;
	ZVAL_LONG(&const_PasswordEchoOnEdit_value, 3);
	zend_string *const_PasswordEchoOnEdit_name = zend_string_init_interned("PasswordEchoOnEdit", sizeof("PasswordEchoOnEdit") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_PasswordEchoOnEdit_name, &const_PasswordEchoOnEdit_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_PasswordEchoOnEdit_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QMainWindow(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QMainWindow", class_Qt_Widgets_QMainWindow_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QPushButton(zend_class_entry *class_entry_Qt_Widgets_QAbstractButton)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QPushButton", class_Qt_Widgets_QPushButton_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractButton);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QRadioButton(zend_class_entry *class_entry_Qt_Widgets_QAbstractButton)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QRadioButton", class_Qt_Widgets_QRadioButton_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractButton);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QSpinBox(zend_class_entry *class_entry_Qt_Widgets_QAbstractSpinBox)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QSpinBox", class_Qt_Widgets_QSpinBox_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractSpinBox);

	return class_entry;
}

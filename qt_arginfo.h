/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 57be7727a1e9232ca86f0f6c65211d935a0cb865 */

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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_startTimer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timerType, IS_LONG, 0, "1")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_timerEvent, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timerId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QRect___construct, 0, 0, 4)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QSize___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QSize_height, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Core_QSize_isEmpty arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Core_QSize_isNull arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Core_QSize_isValid arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Core_QSize_width arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QTime___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, s, IS_LONG, 0, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ms, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Core_QTime_hour arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Core_QTime_isNull arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Core_QTime_isValid arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Core_QTime_minute arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Core_QTime_msec arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Core_QTime_second arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QTimeZone___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, offsetSeconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Core_QTimeZone_isValid arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QApplication___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QApplication_exec arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QAbstractButton_autoRepeat arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractButton_autoRepeatDelay arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QAbstractButton_autoRepeatInterval arginfo_class_Qt_Core_QSize_height

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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractScrollArea_addScrollBarWidget, 0, 2, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, Qt\\Widgets\\QWidget, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractScrollArea_horizontalScrollBarPolicy arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QAbstractScrollArea_maximumViewportSize, 0, 0, Qt\\Core\\QSize, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, Qt\\Widgets\\QWidget, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBar, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, scrollBar, Qt\\Widgets\\QScrollBar, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBarPolicy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractScrollArea_setSizeAdjustPolicy arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBarPolicy

#define arginfo_class_Qt_Widgets_QAbstractScrollArea_setVerticalScrollBar arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBar

#define arginfo_class_Qt_Widgets_QAbstractScrollArea_setVerticalScrollBarPolicy arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBarPolicy

#define arginfo_class_Qt_Widgets_QAbstractScrollArea_setViewport arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget

#define arginfo_class_Qt_Widgets_QAbstractScrollArea_sizeAdjustPolicy arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QAbstractScrollArea_verticalScrollBarPolicy arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QAbstractSlider_hasTracking arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractSlider_invertedAppearance arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractSlider_invertedControls arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractSlider_isSliderDown arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QAbstractSlider_maximum arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QAbstractSlider_minimum arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QAbstractSlider_orientation arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QAbstractSlider_pageStep arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSlider_setInvertedAppearance, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, inverted, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractSlider_setInvertedControls arginfo_class_Qt_Widgets_QAbstractSlider_setInvertedAppearance

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSlider_setMaximum, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSlider_setMinimum, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSlider_setPageStep, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractSlider_setSingleStep arginfo_class_Qt_Widgets_QAbstractSlider_setPageStep

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSlider_setSliderDown, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, down, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSlider_setSliderPosition, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractSlider_setTracking arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

#define arginfo_class_Qt_Widgets_QAbstractSlider_singleStep arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QAbstractSlider_sliderPosition arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSlider_triggerAction, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractSlider_value arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSlider_setOrientation, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSlider_setRange, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QAbstractSlider_setValue, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QAbstractSlider_onActionTriggered arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QAbstractSlider_onRangeChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QAbstractSlider_onSliderMoved arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QAbstractSlider_onSliderPressed arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QAbstractSlider_onSliderReleased arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QAbstractSlider_onValueChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_alignment arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_buttonSymbols arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QAbstractSpinBox_correctionMode arginfo_class_Qt_Core_QSize_height

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

#define arginfo_class_Qt_Widgets_QCheckBox_checkState arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QCheckBox_isTristate arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QCheckBox_setCheckState, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QCheckBox_setTristate, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, tristate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QCheckBox_onCheckStateChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QComboBox___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QComboBox_addItem arginfo_class_Qt_Widgets_QAbstractButton_setText

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QComboBox_addItems, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, texts, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QComboBox_count arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QComboBox_currentIndex arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QComboBox_currentText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QComboBox_duplicatesEnabled arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QComboBox_hasFrame arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QComboBox_hidePopup arginfo_class_Qt_Core_QObject_dumpObjectInfo

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QComboBox_insertItem, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QComboBox_insertPolicy arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QComboBox_insertSeparator, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QComboBox_isEditable arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QComboBox_itemText, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QComboBox_maxCount arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QComboBox_maxVisibleItems arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QComboBox_minimumContentsLength arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QComboBox_placeholderText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QComboBox_removeItem arginfo_class_Qt_Widgets_QComboBox_insertSeparator

#define arginfo_class_Qt_Widgets_QComboBox_setDuplicatesEnabled arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QComboBox_setEditable, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, editable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QComboBox_setFrame arginfo_class_Qt_Widgets_QAbstractSpinBox_setFrame

#define arginfo_class_Qt_Widgets_QComboBox_setInsertPolicy arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBarPolicy

#define arginfo_class_Qt_Widgets_QComboBox_setItemText arginfo_class_Qt_Widgets_QComboBox_insertItem

#define arginfo_class_Qt_Widgets_QComboBox_setMaxCount arginfo_class_Qt_Widgets_QAbstractSlider_setMaximum

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QComboBox_setMaxVisibleItems, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, maxItems, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QComboBox_setMinimumContentsLength, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, characters, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QComboBox_setPlaceholderText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, placeholderText, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QComboBox_setSizeAdjustPolicy arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBarPolicy

#define arginfo_class_Qt_Widgets_QComboBox_showPopup arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QComboBox_sizeAdjustPolicy arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QComboBox_clear arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QComboBox_clearEditText arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QComboBox_setCurrentIndex arginfo_class_Qt_Widgets_QComboBox_insertSeparator

#define arginfo_class_Qt_Widgets_QComboBox_setCurrentText arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QComboBox_setEditText arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QComboBox_onActivated arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QComboBox_onCurrentIndexChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QComboBox_onCurrentTextChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QComboBox_onEditTextChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QComboBox_onHighlighted arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QComboBox_onTextActivated arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QComboBox_onTextHighlighted arginfo_class_Qt_Widgets_QAbstractButton_onClicked

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

#define arginfo_class_Qt_Widgets_QDateTimeEdit_currentSection arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QDateTimeEdit_currentSectionIndex arginfo_class_Qt_Core_QSize_height

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

#define arginfo_class_Qt_Widgets_QDateTimeEdit_sectionCount arginfo_class_Qt_Core_QSize_height

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

#define arginfo_class_Qt_Widgets_QDateTimeEdit_setCurrentSectionIndex arginfo_class_Qt_Widgets_QComboBox_insertSeparator

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

#define arginfo_class_Qt_Widgets_QDial___construct arginfo_class_Qt_Widgets_QComboBox___construct

#define arginfo_class_Qt_Widgets_QDial_notchSize arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDial_notchTarget, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDial_notchesVisible arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDial_setNotchTarget, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDial_wrapping arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QDial_setNotchesVisible, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QDial_setWrapping arginfo_class_Qt_Widgets_QAbstractSpinBox_setAccelerated

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QFrame___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, flags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QFrame_frameRect, 0, 0, Qt\\Core\\QRect, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QFrame_frameShadow arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QFrame_frameShape arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QFrame_frameStyle arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QFrame_frameWidth arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QFrame_lineWidth arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QFrame_midLineWidth arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QFrame_setFrameRect, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, rect, Qt\\Core\\QRect, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QFrame_setFrameShadow, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, shadow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QFrame_setFrameShape, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, shape, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QFrame_setFrameStyle, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QFrame_setLineWidth, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QFrame_setMidLineWidth arginfo_class_Qt_Widgets_QFrame_setLineWidth

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QGroupBox___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, title, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QGroupBox_alignment arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QGroupBox_isCheckable arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QGroupBox_isChecked arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QGroupBox_isFlat arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QGroupBox_setAlignment arginfo_class_Qt_Widgets_QAbstractSpinBox_setAlignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QGroupBox_setCheckable, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checkable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QGroupBox_setFlat, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, flat, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QGroupBox_setTitle, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QGroupBox_title arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QGroupBox_setChecked arginfo_class_Qt_Widgets_QAbstractButton_setChecked

#define arginfo_class_Qt_Widgets_QGroupBox_onClicked arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QGroupBox_onToggled arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QHBoxLayout___construct arginfo_class_Qt_Widgets_QComboBox___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QSlider___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, orientation, IS_LONG, 0, "Qt\\Orientation::Vertical")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSlider_setTickInterval, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, ti, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QSlider_setTickPosition arginfo_class_Qt_Widgets_QAbstractSlider_setSliderPosition

#define arginfo_class_Qt_Widgets_QSlider_tickInterval arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QSlider_tickPosition arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QVBoxLayout___construct arginfo_class_Qt_Widgets_QComboBox___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QWidget___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, windowFlags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_acceptDrops arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_accessibleDescription arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QWidget_accessibleName arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QWidget_activateWindow arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_adjustSize arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_autoFillBackground arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_backgroundRole arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QWidget_baseSize, 0, 0, Qt\\Widgets\\Qt\\Core\\QSize, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QWidget_childAt, 0, 2, Qt\\Widgets\\QWidget, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_childrenRect arginfo_class_Qt_Widgets_QFrame_frameRect

#define arginfo_class_Qt_Widgets_QWidget_clearFocus arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_clearMask arginfo_class_Qt_Core_QObject_dumpObjectInfo

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_contentsMargins, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_contentsRect arginfo_class_Qt_Widgets_QFrame_frameRect

#define arginfo_class_Qt_Widgets_QWidget_contextMenuPolicy arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_ensurePolished arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_focusPolicy arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_frameGeometry arginfo_class_Qt_Widgets_QFrame_frameRect

#define arginfo_class_Qt_Widgets_QWidget_frameSize arginfo_class_Qt_Widgets_QWidget_baseSize

#define arginfo_class_Qt_Widgets_QWidget_geometry arginfo_class_Qt_Widgets_QFrame_frameRect

#define arginfo_class_Qt_Widgets_QWidget_grabKeyboard arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_grabMouse arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_hasFocus arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_hasMouseTracking arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_hasTabletTracking arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_height arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_inputMethodHints arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_isActiveWindow arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_isAncestorOf, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, child, Qt\\Widgets\\QWidget, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_isEnabled arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_isEnabledTo, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, ancestor, Qt\\Widgets\\QWidget, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_isFullScreen arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_isHidden arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_isMaximized arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_isMinimized arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_isModal arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_isVisible arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_isVisibleTo arginfo_class_Qt_Widgets_QWidget_isEnabledTo

#define arginfo_class_Qt_Widgets_QWidget_isWindow arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_isWindowModified arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QWidget_layout, 0, 0, Qt\\Widgets\\QLayout, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_layoutDirection arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_maximumHeight arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_maximumSize arginfo_class_Qt_Widgets_QWidget_baseSize

#define arginfo_class_Qt_Widgets_QWidget_maximumWidth arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_minimumHeight arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_minimumSize arginfo_class_Qt_Widgets_QWidget_baseSize

#define arginfo_class_Qt_Widgets_QWidget_minimumWidth arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_move, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QWidget_nativeParentWidget, 0, 0, Qt\\Widgets\\QWidget, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_nextInFocusChain arginfo_class_Qt_Widgets_QWidget_nativeParentWidget

#define arginfo_class_Qt_Widgets_QWidget_normalGeometry arginfo_class_Qt_Widgets_QFrame_frameRect

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_overrideWindowFlags, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_parentWidget arginfo_class_Qt_Widgets_QWidget_nativeParentWidget

#define arginfo_class_Qt_Widgets_QWidget_pos arginfo_class_Qt_Widgets_QWidget_contentsMargins

#define arginfo_class_Qt_Widgets_QWidget_previousInFocusChain arginfo_class_Qt_Widgets_QWidget_nativeParentWidget

#define arginfo_class_Qt_Widgets_QWidget_rect arginfo_class_Qt_Widgets_QFrame_frameRect

#define arginfo_class_Qt_Widgets_QWidget_releaseKeyboard arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_releaseMouse arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_releaseShortcut arginfo_class_Qt_Core_QObject_killTimer

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_repaint, 0, 0, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, rect, Qt\\Core\\Qrect, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_resize, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_scroll, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setAcceptDrops arginfo_class_Qt_Widgets_QAbstractSpinBox_setAccelerated

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setAccessibleDescription, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setAccessibleName arginfo_class_Qt_Core_QObject_setObjectName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setAutoFillBackground, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setBackgroundRole, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setBaseSize, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, basew, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseh, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setContentsMargins, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setContextMenuPolicy arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBarPolicy

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setFixedHeight, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setFixedSize arginfo_class_Qt_Widgets_QWidget_resize

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setFixedWidth, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setFocus, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, reason, IS_LONG, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setFocusPolicy arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBarPolicy

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setGeometry, 0, 4, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setInputMethodHints, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, hints, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setLayout, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, layout, Qt\\Widgets\\QLayout, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setLayoutDirection arginfo_class_Qt_Widgets_QBoxLayout_setDirection

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setMaximumHeight, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, maxh, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setMaximumSize, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, maxw, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxh, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setMaximumWidth, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, maxw, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setMinimumHeight, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, minh, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setMinimumSize, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, minw, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minh, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setMinimumWidth, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, minw, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setMouseTracking arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setShortcutAutoRepeat, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, enable, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setShortcutEnabled arginfo_class_Qt_Widgets_QWidget_setShortcutAutoRepeat

#define arginfo_class_Qt_Widgets_QWidget_setSizeIncrement arginfo_class_Qt_Widgets_QWidget_resize

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setSizePolicy, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, horizontal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, vertical, IS_LONG, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setStatusTip, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, statusTip, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setTabletTracking arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setToolTip, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, toolTip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setToolTipDuration, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setUpdatesEnabled arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setWhatsThis, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, whatsThis, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setWindowFilePath, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, filePath, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setWindowFlag, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, flag, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, on, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setWindowFlags arginfo_class_Qt_Widgets_QWidget_overrideWindowFlags

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setWindowModality, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, windowModality, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setWindowOpacity, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setWindowRole, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setWindowState arginfo_class_Qt_Widgets_QCheckBox_setCheckState

#define arginfo_class_Qt_Widgets_QWidget_size arginfo_class_Qt_Widgets_QAbstractScrollArea_maximumViewportSize

#define arginfo_class_Qt_Widgets_QWidget_sizeIncrement arginfo_class_Qt_Widgets_QAbstractScrollArea_maximumViewportSize

#define arginfo_class_Qt_Widgets_QWidget_statusTip arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QWidget_styleSheet arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QWidget_toolTip arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QWidget_toolTipDuration arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_underMouse arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_ungrabGesture, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, gestureType, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_unsetCursor arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_unsetLayoutDirection arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_updatesEnabled arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QWidget_updateGeometry arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_whatsThis arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QWidget_width arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_window arginfo_class_Qt_Widgets_QWidget_nativeParentWidget

#define arginfo_class_Qt_Widgets_QWidget_windowFilePath arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QWidget_windowFlags arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_windowModality arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_windowOpacity arginfo_class_Qt_Widgets_QDial_notchTarget

#define arginfo_class_Qt_Widgets_QWidget_windowRole arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QWidget_windowState arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_windowTitle arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QWidget_windowType arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_x arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_y arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QWidget_close arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_hide arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_lower arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_raise arginfo_class_Qt_Core_QObject_dumpObjectInfo

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setDisabled, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, disable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setEnabled arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setHidden, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, hide, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setStyleSheet, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, styleSheet, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setWindowModified, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, modified, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_setWindowTitle arginfo_class_Qt_Widgets_QGroupBox_setTitle

#define arginfo_class_Qt_Widgets_QWidget_show arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_showFullScreen arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_showMaximized arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_showMinimized arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QWidget_showNormal arginfo_class_Qt_Core_QObject_dumpObjectInfo

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_update, 0, 0, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, region, Qt\\Core\\QRect, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_onCustomContextMenuRequested arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QWidget_onWindowTitleChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QWidget_focusNextChild arginfo_class_Qt_Core_QCalendar_isValid

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QLabel___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, windowFlags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLabel_setOpenExternalLinks, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, open, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLabel_setText arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QLabel_setTextInteractionFlags arginfo_class_Qt_Widgets_QWidget_overrideWindowFlags

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLabel_setTextFormat, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLabel_setWordWrap arginfo_class_Qt_Widgets_QAbstractSpinBox_setAccelerated

#define arginfo_class_Qt_Widgets_QLabel_text arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QLabel_wordWrap arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QLayout_addWidget arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget

#define arginfo_class_Qt_Widgets_QLayout_removeWidget arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLayout_setSpacing, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLayout_spacing arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QLineEdit___construct arginfo_class_Qt_Widgets_QCheckBox___construct

#define arginfo_class_Qt_Widgets_QLineEdit_backspace arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_cursorPosition arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QLineEdit_del arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_deselect arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_displayText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QLineEdit_echoMode arginfo_class_Qt_Core_QSize_height

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

#define arginfo_class_Qt_Widgets_QLineEdit_maxLength arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QLineEdit_placeholderText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QLineEdit_selectedText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QLineEdit_setClearButtonEnabled arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

#define arginfo_class_Qt_Widgets_QLineEdit_setCursorPosition arginfo_class_Qt_Widgets_QAbstractSlider_setSliderPosition

#define arginfo_class_Qt_Widgets_QLineEdit_setEchoMode arginfo_class_Qt_Widgets_QAbstractSpinBox_setCorrectionMode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setMaxLength, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_setPlaceholderText arginfo_class_Qt_Widgets_QComboBox_setPlaceholderText

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

#define arginfo_class_Qt_Widgets_QMainWindow_setCentralWidget arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget

#define arginfo_class_Qt_Widgets_QPushButton___construct arginfo_class_Qt_Widgets_QCheckBox___construct

#define arginfo_class_Qt_Widgets_QRadioButton___construct arginfo_class_Qt_Widgets_QCheckBox___construct

#define arginfo_class_Qt_Widgets_QScrollArea___construct arginfo_class_Qt_Widgets_QComboBox___construct

#define arginfo_class_Qt_Widgets_QScrollArea_alignment arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QScrollArea_ensureVisible, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, xmargin, IS_LONG, 0, "50")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ymargin, IS_LONG, 0, "50")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QScrollArea_ensureWidgetVisible, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, childWidget, Qt\\Widgets\\QWidget, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, xmargin, IS_LONG, 0, "50")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, ymargin, IS_LONG, 0, "50")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QScrollArea_setAlignment arginfo_class_Qt_Widgets_QAbstractSpinBox_setAlignment

#define arginfo_class_Qt_Widgets_QScrollArea_setWidget arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QScrollArea_setWidgetResizable, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, resizable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QScrollBar___construct arginfo_class_Qt_Widgets_QSlider___construct

#define arginfo_class_Qt_Widgets_QSpinBox___construct arginfo_class_Qt_Widgets_QComboBox___construct

#define arginfo_class_Qt_Widgets_QSpinBox_cleanText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QSpinBox_displayIntegerBase arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QSpinBox_maximum arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QSpinBox_minimum arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QSpinBox_prefix arginfo_class_Qt_Core_QObject_objectName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setDisplayIntegerBase, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QSpinBox_setMaximum arginfo_class_Qt_Widgets_QAbstractSlider_setMaximum

#define arginfo_class_Qt_Widgets_QSpinBox_setMinimum arginfo_class_Qt_Widgets_QAbstractSlider_setMinimum

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setPrefix, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QSpinBox_setRange arginfo_class_Qt_Widgets_QAbstractSlider_setRange

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setSingleStep, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setStepType, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, stepType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSpinBox_setSuffix, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, suffix, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QSpinBox_singleStep arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QSpinBox_stepType arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QSpinBox_suffix arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QSpinBox_value arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QSpinBox_setValue arginfo_class_Qt_Widgets_QSpinBox_setSingleStep

#define arginfo_class_Qt_Widgets_QSpinBox_onTextChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QSpinBox_onValueChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QSplitter___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, orientation, IS_LONG, 0, "Qt\\Orientation::Horizontal")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QSplitter_addWidget arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget

#define arginfo_class_Qt_Widgets_QSplitter_childrenCollapsible arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QSplitter_count arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QSplitter_handleWidth arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSplitter_indexOf, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, widget, Qt\\Widgets\\QWidget, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSplitter_insertWidget, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, widget, Qt\\Widgets\\QWidget, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSplitter_isCollapsible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QSplitter_opaqueResize arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QSplitter_refresh arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QSplitter_replaceWidget arginfo_class_Qt_Widgets_QSplitter_insertWidget

#define arginfo_class_Qt_Widgets_QSplitter_setChildrenCollapsible arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSplitter_setCollapsible, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, collapsible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QSplitter_setHandleWidth arginfo_class_Qt_Widgets_QFrame_setLineWidth

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSplitter_setOpaqueResize, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, opaque, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QSplitter_setOrientation arginfo_class_Qt_Widgets_QAbstractSlider_setOrientation

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSplitter_setSizes, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, sizes, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QSplitter_setStretchFactor, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QSplitter_sizes arginfo_class_Qt_Widgets_QWidget_contentsMargins

#define arginfo_class_Qt_Widgets_QSplitter_onSplitterMoved arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QStackedWidget___construct arginfo_class_Qt_Widgets_QComboBox___construct

#define arginfo_class_Qt_Widgets_QStackedWidget_addWidget arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget

#define arginfo_class_Qt_Widgets_QStackedWidget_count arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QStackedWidget_currentIndex arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QStackedWidget_currentWidget arginfo_class_Qt_Widgets_QWidget_nativeParentWidget

#define arginfo_class_Qt_Widgets_QStackedWidget_indexOf arginfo_class_Qt_Widgets_QSplitter_indexOf

#define arginfo_class_Qt_Widgets_QStackedWidget_insertWidget arginfo_class_Qt_Widgets_QSplitter_insertWidget

#define arginfo_class_Qt_Widgets_QStackedWidget_removeWidget arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget

#define arginfo_class_Qt_Widgets_QStackedWidget_setCurrentIndex arginfo_class_Qt_Widgets_QComboBox_insertSeparator

#define arginfo_class_Qt_Widgets_QStackedWidget_setCurrentWidget arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_Qt_Widgets_QStackedWidget_widget, 0, 1, Qt\\Widgets\\QWidget, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QStackedWidget_onCurrentChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QStackedWidget_onWidgetRemoved arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QTextEdit___construct arginfo_class_Qt_Widgets_QCheckBox___construct

#define arginfo_class_Qt_Widgets_QTextEdit_acceptRichText arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QTextEdit_alignment arginfo_class_Qt_Core_QSize_height

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_anchorAt, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QTextEdit_autoFormatting arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QTextEdit_canPaste arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QTextEdit_documentTitle arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QTextEdit_ensureCursorVisible arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QTextEdit_fontFamily arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QTextEdit_fontItalic arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QTextEdit_fontPointSize arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QTextEdit_fontUnderline arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QTextEdit_fontWeight arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QTextEdit_isReadOnly arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QTextEdit_isUndoRedoEnabled arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QTextEdit_lineWrapColumnOrWidth arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QTextEdit_lineWrapMode arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QTextEdit_overwriteMode arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QTextEdit_placeholderText arginfo_class_Qt_Core_QObject_objectName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_setAcceptRichText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, accept, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_setAutoFormatting, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, features, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QTextEdit_setDocumentTitle arginfo_class_Qt_Widgets_QGroupBox_setTitle

#define arginfo_class_Qt_Widgets_QTextEdit_setLineWrapColumnOrWidth arginfo_class_Qt_Widgets_QWidget_setFixedWidth

#define arginfo_class_Qt_Widgets_QTextEdit_setLineWrapMode arginfo_class_Qt_Widgets_QAbstractSpinBox_setCorrectionMode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_setOverwriteMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, overwrite, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QTextEdit_setPlaceholderText arginfo_class_Qt_Widgets_QComboBox_setPlaceholderText

#define arginfo_class_Qt_Widgets_QTextEdit_setReadOnly arginfo_class_Qt_Widgets_QAbstractSpinBox_setReadOnly

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_setTabChangesFocus, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_setTabStopDistance, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, distance, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QTextEdit_setTextInteractionFlags arginfo_class_Qt_Widgets_QWidget_overrideWindowFlags

#define arginfo_class_Qt_Widgets_QTextEdit_setUndoRedoEnabled arginfo_class_Qt_Widgets_QAbstractButton_setAutoRepeat

#define arginfo_class_Qt_Widgets_QTextEdit_setWordWrapMode arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBarPolicy

#define arginfo_class_Qt_Widgets_QTextEdit_tabChangesFocus arginfo_class_Qt_Core_QCalendar_isValid

#define arginfo_class_Qt_Widgets_QTextEdit_tabStopDistance arginfo_class_Qt_Widgets_QDial_notchTarget

#define arginfo_class_Qt_Widgets_QTextEdit_textInteractionFlags arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QTextEdit_toHtml arginfo_class_Qt_Core_QObject_objectName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_toMarkdown, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, features, IS_LONG, 0, "2")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QTextEdit_toPlainText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QTextEdit_wordWrapMode arginfo_class_Qt_Core_QSize_height

#define arginfo_class_Qt_Widgets_QTextEdit_append arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QTextEdit_clear arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QTextEdit_copy arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QTextEdit_cut arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QTextEdit_insertHtml arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QTextEdit_insertPlainText arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QTextEdit_paste arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QTextEdit_redo arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QTextEdit_scrollToAnchor arginfo_class_Qt_Core_QObject_setObjectName

#define arginfo_class_Qt_Widgets_QTextEdit_selectAll arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QTextEdit_setAlignment arginfo_class_Qt_Widgets_QAbstractSpinBox_setAlignment

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_setFontFamily, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_setFontItalic, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, italic, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_setFontPointSize, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_setFontUnderline, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, underline, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_setFontWeight, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QTextEdit_setHtml arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QTextEdit_setMarkdown arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QTextEdit_setPlainText arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QTextEdit_setText arginfo_class_Qt_Widgets_QAbstractButton_setText

#define arginfo_class_Qt_Widgets_QTextEdit_undo arginfo_class_Qt_Core_QObject_dumpObjectInfo

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QTextEdit_zoomIn, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, range, IS_LONG, 0, "1")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QTextEdit_zoomOut arginfo_class_Qt_Widgets_QTextEdit_zoomIn

#define arginfo_class_Qt_Widgets_QTextEdit_onCopyAvailable arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QTextEdit_onCursorPositionChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QTextEdit_onRedoAvailable arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QTextEdit_onSelectionChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QTextEdit_onTextChanged arginfo_class_Qt_Widgets_QAbstractButton_onClicked

#define arginfo_class_Qt_Widgets_QTextEdit_onUndoAvailable arginfo_class_Qt_Widgets_QAbstractButton_onClicked


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
ZEND_METHOD(Qt_Core_QObject, timerEvent);
ZEND_METHOD(Qt_Core_QRect, __construct);
ZEND_METHOD(Qt_Core_QSize, __construct);
ZEND_METHOD(Qt_Core_QSize, height);
ZEND_METHOD(Qt_Core_QSize, isEmpty);
ZEND_METHOD(Qt_Core_QSize, isNull);
ZEND_METHOD(Qt_Core_QSize, isValid);
ZEND_METHOD(Qt_Core_QSize, width);
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
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, addScrollBarWidget);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, horizontalScrollBarPolicy);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, maximumViewportSize);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, setCornerWidget);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, setHorizontalScrollBar);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, setHorizontalScrollBarPolicy);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, setSizeAdjustPolicy);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, setVerticalScrollBar);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, setVerticalScrollBarPolicy);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, setViewport);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, sizeAdjustPolicy);
ZEND_METHOD(Qt_Widgets_QAbstractScrollArea, verticalScrollBarPolicy);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, hasTracking);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, invertedAppearance);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, invertedControls);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, isSliderDown);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, maximum);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, minimum);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, orientation);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, pageStep);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setInvertedAppearance);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setInvertedControls);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setMaximum);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setMinimum);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setPageStep);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setSingleStep);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setSliderDown);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setSliderPosition);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setTracking);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, singleStep);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, sliderPosition);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, triggerAction);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, value);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setOrientation);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setRange);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, setValue);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, onActionTriggered);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, onRangeChanged);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, onSliderMoved);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, onSliderPressed);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, onSliderReleased);
ZEND_METHOD(Qt_Widgets_QAbstractSlider, onValueChanged);
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
ZEND_METHOD(Qt_Widgets_QComboBox, __construct);
ZEND_METHOD(Qt_Widgets_QComboBox, addItem);
ZEND_METHOD(Qt_Widgets_QComboBox, addItems);
ZEND_METHOD(Qt_Widgets_QComboBox, count);
ZEND_METHOD(Qt_Widgets_QComboBox, currentIndex);
ZEND_METHOD(Qt_Widgets_QComboBox, currentText);
ZEND_METHOD(Qt_Widgets_QComboBox, duplicatesEnabled);
ZEND_METHOD(Qt_Widgets_QComboBox, hasFrame);
ZEND_METHOD(Qt_Widgets_QComboBox, hidePopup);
ZEND_METHOD(Qt_Widgets_QComboBox, insertItem);
ZEND_METHOD(Qt_Widgets_QComboBox, insertPolicy);
ZEND_METHOD(Qt_Widgets_QComboBox, insertSeparator);
ZEND_METHOD(Qt_Widgets_QComboBox, isEditable);
ZEND_METHOD(Qt_Widgets_QComboBox, itemText);
ZEND_METHOD(Qt_Widgets_QComboBox, maxCount);
ZEND_METHOD(Qt_Widgets_QComboBox, maxVisibleItems);
ZEND_METHOD(Qt_Widgets_QComboBox, minimumContentsLength);
ZEND_METHOD(Qt_Widgets_QComboBox, placeholderText);
ZEND_METHOD(Qt_Widgets_QComboBox, removeItem);
ZEND_METHOD(Qt_Widgets_QComboBox, setDuplicatesEnabled);
ZEND_METHOD(Qt_Widgets_QComboBox, setEditable);
ZEND_METHOD(Qt_Widgets_QComboBox, setFrame);
ZEND_METHOD(Qt_Widgets_QComboBox, setInsertPolicy);
ZEND_METHOD(Qt_Widgets_QComboBox, setItemText);
ZEND_METHOD(Qt_Widgets_QComboBox, setMaxCount);
ZEND_METHOD(Qt_Widgets_QComboBox, setMaxVisibleItems);
ZEND_METHOD(Qt_Widgets_QComboBox, setMinimumContentsLength);
ZEND_METHOD(Qt_Widgets_QComboBox, setPlaceholderText);
ZEND_METHOD(Qt_Widgets_QComboBox, setSizeAdjustPolicy);
ZEND_METHOD(Qt_Widgets_QComboBox, showPopup);
ZEND_METHOD(Qt_Widgets_QComboBox, sizeAdjustPolicy);
ZEND_METHOD(Qt_Widgets_QComboBox, clear);
ZEND_METHOD(Qt_Widgets_QComboBox, clearEditText);
ZEND_METHOD(Qt_Widgets_QComboBox, setCurrentIndex);
ZEND_METHOD(Qt_Widgets_QComboBox, setCurrentText);
ZEND_METHOD(Qt_Widgets_QComboBox, setEditText);
ZEND_METHOD(Qt_Widgets_QComboBox, onActivated);
ZEND_METHOD(Qt_Widgets_QComboBox, onCurrentIndexChanged);
ZEND_METHOD(Qt_Widgets_QComboBox, onCurrentTextChanged);
ZEND_METHOD(Qt_Widgets_QComboBox, onEditTextChanged);
ZEND_METHOD(Qt_Widgets_QComboBox, onHighlighted);
ZEND_METHOD(Qt_Widgets_QComboBox, onTextActivated);
ZEND_METHOD(Qt_Widgets_QComboBox, onTextHighlighted);
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
ZEND_METHOD(Qt_Widgets_QDial, __construct);
ZEND_METHOD(Qt_Widgets_QDial, notchSize);
ZEND_METHOD(Qt_Widgets_QDial, notchTarget);
ZEND_METHOD(Qt_Widgets_QDial, notchesVisible);
ZEND_METHOD(Qt_Widgets_QDial, setNotchTarget);
ZEND_METHOD(Qt_Widgets_QDial, wrapping);
ZEND_METHOD(Qt_Widgets_QDial, setNotchesVisible);
ZEND_METHOD(Qt_Widgets_QDial, setWrapping);
ZEND_METHOD(Qt_Widgets_QFrame, __construct);
ZEND_METHOD(Qt_Widgets_QFrame, frameRect);
ZEND_METHOD(Qt_Widgets_QFrame, frameShadow);
ZEND_METHOD(Qt_Widgets_QFrame, frameShape);
ZEND_METHOD(Qt_Widgets_QFrame, frameStyle);
ZEND_METHOD(Qt_Widgets_QFrame, frameWidth);
ZEND_METHOD(Qt_Widgets_QFrame, lineWidth);
ZEND_METHOD(Qt_Widgets_QFrame, midLineWidth);
ZEND_METHOD(Qt_Widgets_QFrame, setFrameRect);
ZEND_METHOD(Qt_Widgets_QFrame, setFrameShadow);
ZEND_METHOD(Qt_Widgets_QFrame, setFrameShape);
ZEND_METHOD(Qt_Widgets_QFrame, setFrameStyle);
ZEND_METHOD(Qt_Widgets_QFrame, setLineWidth);
ZEND_METHOD(Qt_Widgets_QFrame, setMidLineWidth);
ZEND_METHOD(Qt_Widgets_QGroupBox, __construct);
ZEND_METHOD(Qt_Widgets_QGroupBox, alignment);
ZEND_METHOD(Qt_Widgets_QGroupBox, isCheckable);
ZEND_METHOD(Qt_Widgets_QGroupBox, isChecked);
ZEND_METHOD(Qt_Widgets_QGroupBox, isFlat);
ZEND_METHOD(Qt_Widgets_QGroupBox, setAlignment);
ZEND_METHOD(Qt_Widgets_QGroupBox, setCheckable);
ZEND_METHOD(Qt_Widgets_QGroupBox, setFlat);
ZEND_METHOD(Qt_Widgets_QGroupBox, setTitle);
ZEND_METHOD(Qt_Widgets_QGroupBox, title);
ZEND_METHOD(Qt_Widgets_QGroupBox, setChecked);
ZEND_METHOD(Qt_Widgets_QGroupBox, onClicked);
ZEND_METHOD(Qt_Widgets_QGroupBox, onToggled);
ZEND_METHOD(Qt_Widgets_QHBoxLayout, __construct);
ZEND_METHOD(Qt_Widgets_QSlider, __construct);
ZEND_METHOD(Qt_Widgets_QSlider, setTickInterval);
ZEND_METHOD(Qt_Widgets_QSlider, setTickPosition);
ZEND_METHOD(Qt_Widgets_QSlider, tickInterval);
ZEND_METHOD(Qt_Widgets_QSlider, tickPosition);
ZEND_METHOD(Qt_Widgets_QVBoxLayout, __construct);
ZEND_METHOD(Qt_Widgets_QWidget, __construct);
ZEND_METHOD(Qt_Widgets_QWidget, acceptDrops);
ZEND_METHOD(Qt_Widgets_QWidget, accessibleDescription);
ZEND_METHOD(Qt_Widgets_QWidget, accessibleName);
ZEND_METHOD(Qt_Widgets_QWidget, activateWindow);
ZEND_METHOD(Qt_Widgets_QWidget, adjustSize);
ZEND_METHOD(Qt_Widgets_QWidget, autoFillBackground);
ZEND_METHOD(Qt_Widgets_QWidget, backgroundRole);
ZEND_METHOD(Qt_Widgets_QWidget, baseSize);
ZEND_METHOD(Qt_Widgets_QWidget, childAt);
ZEND_METHOD(Qt_Widgets_QWidget, childrenRect);
ZEND_METHOD(Qt_Widgets_QWidget, clearFocus);
ZEND_METHOD(Qt_Widgets_QWidget, clearMask);
ZEND_METHOD(Qt_Widgets_QWidget, contentsMargins);
ZEND_METHOD(Qt_Widgets_QWidget, contentsRect);
ZEND_METHOD(Qt_Widgets_QWidget, contextMenuPolicy);
ZEND_METHOD(Qt_Widgets_QWidget, ensurePolished);
ZEND_METHOD(Qt_Widgets_QWidget, focusPolicy);
ZEND_METHOD(Qt_Widgets_QWidget, frameGeometry);
ZEND_METHOD(Qt_Widgets_QWidget, frameSize);
ZEND_METHOD(Qt_Widgets_QWidget, geometry);
ZEND_METHOD(Qt_Widgets_QWidget, grabKeyboard);
ZEND_METHOD(Qt_Widgets_QWidget, grabMouse);
ZEND_METHOD(Qt_Widgets_QWidget, hasFocus);
ZEND_METHOD(Qt_Widgets_QWidget, hasMouseTracking);
ZEND_METHOD(Qt_Widgets_QWidget, hasTabletTracking);
ZEND_METHOD(Qt_Widgets_QWidget, height);
ZEND_METHOD(Qt_Widgets_QWidget, inputMethodHints);
ZEND_METHOD(Qt_Widgets_QWidget, isActiveWindow);
ZEND_METHOD(Qt_Widgets_QWidget, isAncestorOf);
ZEND_METHOD(Qt_Widgets_QWidget, isEnabled);
ZEND_METHOD(Qt_Widgets_QWidget, isEnabledTo);
ZEND_METHOD(Qt_Widgets_QWidget, isFullScreen);
ZEND_METHOD(Qt_Widgets_QWidget, isHidden);
ZEND_METHOD(Qt_Widgets_QWidget, isMaximized);
ZEND_METHOD(Qt_Widgets_QWidget, isMinimized);
ZEND_METHOD(Qt_Widgets_QWidget, isModal);
ZEND_METHOD(Qt_Widgets_QWidget, isVisible);
ZEND_METHOD(Qt_Widgets_QWidget, isVisibleTo);
ZEND_METHOD(Qt_Widgets_QWidget, isWindow);
ZEND_METHOD(Qt_Widgets_QWidget, isWindowModified);
ZEND_METHOD(Qt_Widgets_QWidget, layout);
ZEND_METHOD(Qt_Widgets_QWidget, layoutDirection);
ZEND_METHOD(Qt_Widgets_QWidget, maximumHeight);
ZEND_METHOD(Qt_Widgets_QWidget, maximumSize);
ZEND_METHOD(Qt_Widgets_QWidget, maximumWidth);
ZEND_METHOD(Qt_Widgets_QWidget, minimumHeight);
ZEND_METHOD(Qt_Widgets_QWidget, minimumSize);
ZEND_METHOD(Qt_Widgets_QWidget, minimumWidth);
ZEND_METHOD(Qt_Widgets_QWidget, move);
ZEND_METHOD(Qt_Widgets_QWidget, nativeParentWidget);
ZEND_METHOD(Qt_Widgets_QWidget, nextInFocusChain);
ZEND_METHOD(Qt_Widgets_QWidget, normalGeometry);
ZEND_METHOD(Qt_Widgets_QWidget, overrideWindowFlags);
ZEND_METHOD(Qt_Widgets_QWidget, parentWidget);
ZEND_METHOD(Qt_Widgets_QWidget, pos);
ZEND_METHOD(Qt_Widgets_QWidget, previousInFocusChain);
ZEND_METHOD(Qt_Widgets_QWidget, rect);
ZEND_METHOD(Qt_Widgets_QWidget, releaseKeyboard);
ZEND_METHOD(Qt_Widgets_QWidget, releaseMouse);
ZEND_METHOD(Qt_Widgets_QWidget, releaseShortcut);
ZEND_METHOD(Qt_Widgets_QWidget, repaint);
ZEND_METHOD(Qt_Widgets_QWidget, resize);
ZEND_METHOD(Qt_Widgets_QWidget, scroll);
ZEND_METHOD(Qt_Widgets_QWidget, setAcceptDrops);
ZEND_METHOD(Qt_Widgets_QWidget, setAccessibleDescription);
ZEND_METHOD(Qt_Widgets_QWidget, setAccessibleName);
ZEND_METHOD(Qt_Widgets_QWidget, setAutoFillBackground);
ZEND_METHOD(Qt_Widgets_QWidget, setBackgroundRole);
ZEND_METHOD(Qt_Widgets_QWidget, setBaseSize);
ZEND_METHOD(Qt_Widgets_QWidget, setContentsMargins);
ZEND_METHOD(Qt_Widgets_QWidget, setContextMenuPolicy);
ZEND_METHOD(Qt_Widgets_QWidget, setFixedHeight);
ZEND_METHOD(Qt_Widgets_QWidget, setFixedSize);
ZEND_METHOD(Qt_Widgets_QWidget, setFixedWidth);
ZEND_METHOD(Qt_Widgets_QWidget, setFocus);
ZEND_METHOD(Qt_Widgets_QWidget, setFocusPolicy);
ZEND_METHOD(Qt_Widgets_QWidget, setGeometry);
ZEND_METHOD(Qt_Widgets_QWidget, setInputMethodHints);
ZEND_METHOD(Qt_Widgets_QWidget, setLayout);
ZEND_METHOD(Qt_Widgets_QWidget, setLayoutDirection);
ZEND_METHOD(Qt_Widgets_QWidget, setMaximumHeight);
ZEND_METHOD(Qt_Widgets_QWidget, setMaximumSize);
ZEND_METHOD(Qt_Widgets_QWidget, setMaximumWidth);
ZEND_METHOD(Qt_Widgets_QWidget, setMinimumHeight);
ZEND_METHOD(Qt_Widgets_QWidget, setMinimumSize);
ZEND_METHOD(Qt_Widgets_QWidget, setMinimumWidth);
ZEND_METHOD(Qt_Widgets_QWidget, setMouseTracking);
ZEND_METHOD(Qt_Widgets_QWidget, setShortcutAutoRepeat);
ZEND_METHOD(Qt_Widgets_QWidget, setShortcutEnabled);
ZEND_METHOD(Qt_Widgets_QWidget, setSizeIncrement);
ZEND_METHOD(Qt_Widgets_QWidget, setSizePolicy);
ZEND_METHOD(Qt_Widgets_QWidget, setStatusTip);
ZEND_METHOD(Qt_Widgets_QWidget, setTabletTracking);
ZEND_METHOD(Qt_Widgets_QWidget, setToolTip);
ZEND_METHOD(Qt_Widgets_QWidget, setToolTipDuration);
ZEND_METHOD(Qt_Widgets_QWidget, setUpdatesEnabled);
ZEND_METHOD(Qt_Widgets_QWidget, setWhatsThis);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowFilePath);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowFlag);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowFlags);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowModality);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowOpacity);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowRole);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowState);
ZEND_METHOD(Qt_Widgets_QWidget, size);
ZEND_METHOD(Qt_Widgets_QWidget, sizeIncrement);
ZEND_METHOD(Qt_Widgets_QWidget, statusTip);
ZEND_METHOD(Qt_Widgets_QWidget, styleSheet);
ZEND_METHOD(Qt_Widgets_QWidget, toolTip);
ZEND_METHOD(Qt_Widgets_QWidget, toolTipDuration);
ZEND_METHOD(Qt_Widgets_QWidget, underMouse);
ZEND_METHOD(Qt_Widgets_QWidget, ungrabGesture);
ZEND_METHOD(Qt_Widgets_QWidget, unsetCursor);
ZEND_METHOD(Qt_Widgets_QWidget, unsetLayoutDirection);
ZEND_METHOD(Qt_Widgets_QWidget, updatesEnabled);
ZEND_METHOD(Qt_Widgets_QWidget, updateGeometry);
ZEND_METHOD(Qt_Widgets_QWidget, whatsThis);
ZEND_METHOD(Qt_Widgets_QWidget, width);
ZEND_METHOD(Qt_Widgets_QWidget, window);
ZEND_METHOD(Qt_Widgets_QWidget, windowFilePath);
ZEND_METHOD(Qt_Widgets_QWidget, windowFlags);
ZEND_METHOD(Qt_Widgets_QWidget, windowModality);
ZEND_METHOD(Qt_Widgets_QWidget, windowOpacity);
ZEND_METHOD(Qt_Widgets_QWidget, windowRole);
ZEND_METHOD(Qt_Widgets_QWidget, windowState);
ZEND_METHOD(Qt_Widgets_QWidget, windowTitle);
ZEND_METHOD(Qt_Widgets_QWidget, windowType);
ZEND_METHOD(Qt_Widgets_QWidget, x);
ZEND_METHOD(Qt_Widgets_QWidget, y);
ZEND_METHOD(Qt_Widgets_QWidget, close);
ZEND_METHOD(Qt_Widgets_QWidget, hide);
ZEND_METHOD(Qt_Widgets_QWidget, lower);
ZEND_METHOD(Qt_Widgets_QWidget, raise);
ZEND_METHOD(Qt_Widgets_QWidget, setDisabled);
ZEND_METHOD(Qt_Widgets_QWidget, setEnabled);
ZEND_METHOD(Qt_Widgets_QWidget, setHidden);
ZEND_METHOD(Qt_Widgets_QWidget, setStyleSheet);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowModified);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowTitle);
ZEND_METHOD(Qt_Widgets_QWidget, show);
ZEND_METHOD(Qt_Widgets_QWidget, showFullScreen);
ZEND_METHOD(Qt_Widgets_QWidget, showMaximized);
ZEND_METHOD(Qt_Widgets_QWidget, showMinimized);
ZEND_METHOD(Qt_Widgets_QWidget, showNormal);
ZEND_METHOD(Qt_Widgets_QWidget, update);
ZEND_METHOD(Qt_Widgets_QWidget, onCustomContextMenuRequested);
ZEND_METHOD(Qt_Widgets_QWidget, onWindowTitleChanged);
ZEND_METHOD(Qt_Widgets_QWidget, focusNextChild);
ZEND_METHOD(Qt_Widgets_QLabel, __construct);
ZEND_METHOD(Qt_Widgets_QLabel, setOpenExternalLinks);
ZEND_METHOD(Qt_Widgets_QLabel, setText);
ZEND_METHOD(Qt_Widgets_QLabel, setTextInteractionFlags);
ZEND_METHOD(Qt_Widgets_QLabel, setTextFormat);
ZEND_METHOD(Qt_Widgets_QLabel, setWordWrap);
ZEND_METHOD(Qt_Widgets_QLabel, text);
ZEND_METHOD(Qt_Widgets_QLabel, wordWrap);
ZEND_METHOD(Qt_Widgets_QLayout, addWidget);
ZEND_METHOD(Qt_Widgets_QLayout, removeWidget);
ZEND_METHOD(Qt_Widgets_QLayout, setSpacing);
ZEND_METHOD(Qt_Widgets_QLayout, spacing);
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
ZEND_METHOD(Qt_Widgets_QScrollArea, __construct);
ZEND_METHOD(Qt_Widgets_QScrollArea, alignment);
ZEND_METHOD(Qt_Widgets_QScrollArea, ensureVisible);
ZEND_METHOD(Qt_Widgets_QScrollArea, ensureWidgetVisible);
ZEND_METHOD(Qt_Widgets_QScrollArea, setAlignment);
ZEND_METHOD(Qt_Widgets_QScrollArea, setWidget);
ZEND_METHOD(Qt_Widgets_QScrollArea, setWidgetResizable);
ZEND_METHOD(Qt_Widgets_QScrollBar, __construct);
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
ZEND_METHOD(Qt_Widgets_QSplitter, __construct);
ZEND_METHOD(Qt_Widgets_QSplitter, addWidget);
ZEND_METHOD(Qt_Widgets_QSplitter, childrenCollapsible);
ZEND_METHOD(Qt_Widgets_QSplitter, count);
ZEND_METHOD(Qt_Widgets_QSplitter, handleWidth);
ZEND_METHOD(Qt_Widgets_QSplitter, indexOf);
ZEND_METHOD(Qt_Widgets_QSplitter, insertWidget);
ZEND_METHOD(Qt_Widgets_QSplitter, isCollapsible);
ZEND_METHOD(Qt_Widgets_QSplitter, opaqueResize);
ZEND_METHOD(Qt_Widgets_QSplitter, refresh);
ZEND_METHOD(Qt_Widgets_QSplitter, replaceWidget);
ZEND_METHOD(Qt_Widgets_QSplitter, setChildrenCollapsible);
ZEND_METHOD(Qt_Widgets_QSplitter, setCollapsible);
ZEND_METHOD(Qt_Widgets_QSplitter, setHandleWidth);
ZEND_METHOD(Qt_Widgets_QSplitter, setOpaqueResize);
ZEND_METHOD(Qt_Widgets_QSplitter, setOrientation);
ZEND_METHOD(Qt_Widgets_QSplitter, setSizes);
ZEND_METHOD(Qt_Widgets_QSplitter, setStretchFactor);
ZEND_METHOD(Qt_Widgets_QSplitter, sizes);
ZEND_METHOD(Qt_Widgets_QSplitter, onSplitterMoved);
ZEND_METHOD(Qt_Widgets_QStackedWidget, __construct);
ZEND_METHOD(Qt_Widgets_QStackedWidget, addWidget);
ZEND_METHOD(Qt_Widgets_QStackedWidget, count);
ZEND_METHOD(Qt_Widgets_QStackedWidget, currentIndex);
ZEND_METHOD(Qt_Widgets_QStackedWidget, currentWidget);
ZEND_METHOD(Qt_Widgets_QStackedWidget, indexOf);
ZEND_METHOD(Qt_Widgets_QStackedWidget, insertWidget);
ZEND_METHOD(Qt_Widgets_QStackedWidget, removeWidget);
ZEND_METHOD(Qt_Widgets_QStackedWidget, setCurrentIndex);
ZEND_METHOD(Qt_Widgets_QStackedWidget, setCurrentWidget);
ZEND_METHOD(Qt_Widgets_QStackedWidget, widget);
ZEND_METHOD(Qt_Widgets_QStackedWidget, onCurrentChanged);
ZEND_METHOD(Qt_Widgets_QStackedWidget, onWidgetRemoved);
ZEND_METHOD(Qt_Widgets_QTextEdit, __construct);
ZEND_METHOD(Qt_Widgets_QTextEdit, acceptRichText);
ZEND_METHOD(Qt_Widgets_QTextEdit, alignment);
ZEND_METHOD(Qt_Widgets_QTextEdit, anchorAt);
ZEND_METHOD(Qt_Widgets_QTextEdit, autoFormatting);
ZEND_METHOD(Qt_Widgets_QTextEdit, canPaste);
ZEND_METHOD(Qt_Widgets_QTextEdit, documentTitle);
ZEND_METHOD(Qt_Widgets_QTextEdit, ensureCursorVisible);
ZEND_METHOD(Qt_Widgets_QTextEdit, fontFamily);
ZEND_METHOD(Qt_Widgets_QTextEdit, fontItalic);
ZEND_METHOD(Qt_Widgets_QTextEdit, fontPointSize);
ZEND_METHOD(Qt_Widgets_QTextEdit, fontUnderline);
ZEND_METHOD(Qt_Widgets_QTextEdit, fontWeight);
ZEND_METHOD(Qt_Widgets_QTextEdit, isReadOnly);
ZEND_METHOD(Qt_Widgets_QTextEdit, isUndoRedoEnabled);
ZEND_METHOD(Qt_Widgets_QTextEdit, lineWrapColumnOrWidth);
ZEND_METHOD(Qt_Widgets_QTextEdit, lineWrapMode);
ZEND_METHOD(Qt_Widgets_QTextEdit, overwriteMode);
ZEND_METHOD(Qt_Widgets_QTextEdit, placeholderText);
ZEND_METHOD(Qt_Widgets_QTextEdit, setAcceptRichText);
ZEND_METHOD(Qt_Widgets_QTextEdit, setAutoFormatting);
ZEND_METHOD(Qt_Widgets_QTextEdit, setDocumentTitle);
ZEND_METHOD(Qt_Widgets_QTextEdit, setLineWrapColumnOrWidth);
ZEND_METHOD(Qt_Widgets_QTextEdit, setLineWrapMode);
ZEND_METHOD(Qt_Widgets_QTextEdit, setOverwriteMode);
ZEND_METHOD(Qt_Widgets_QTextEdit, setPlaceholderText);
ZEND_METHOD(Qt_Widgets_QTextEdit, setReadOnly);
ZEND_METHOD(Qt_Widgets_QTextEdit, setTabChangesFocus);
ZEND_METHOD(Qt_Widgets_QTextEdit, setTabStopDistance);
ZEND_METHOD(Qt_Widgets_QTextEdit, setTextInteractionFlags);
ZEND_METHOD(Qt_Widgets_QTextEdit, setUndoRedoEnabled);
ZEND_METHOD(Qt_Widgets_QTextEdit, setWordWrapMode);
ZEND_METHOD(Qt_Widgets_QTextEdit, tabChangesFocus);
ZEND_METHOD(Qt_Widgets_QTextEdit, tabStopDistance);
ZEND_METHOD(Qt_Widgets_QTextEdit, textInteractionFlags);
ZEND_METHOD(Qt_Widgets_QTextEdit, toHtml);
ZEND_METHOD(Qt_Widgets_QTextEdit, toMarkdown);
ZEND_METHOD(Qt_Widgets_QTextEdit, toPlainText);
ZEND_METHOD(Qt_Widgets_QTextEdit, wordWrapMode);
ZEND_METHOD(Qt_Widgets_QTextEdit, append);
ZEND_METHOD(Qt_Widgets_QTextEdit, clear);
ZEND_METHOD(Qt_Widgets_QTextEdit, copy);
ZEND_METHOD(Qt_Widgets_QTextEdit, cut);
ZEND_METHOD(Qt_Widgets_QTextEdit, insertHtml);
ZEND_METHOD(Qt_Widgets_QTextEdit, insertPlainText);
ZEND_METHOD(Qt_Widgets_QTextEdit, paste);
ZEND_METHOD(Qt_Widgets_QTextEdit, redo);
ZEND_METHOD(Qt_Widgets_QTextEdit, scrollToAnchor);
ZEND_METHOD(Qt_Widgets_QTextEdit, selectAll);
ZEND_METHOD(Qt_Widgets_QTextEdit, setAlignment);
ZEND_METHOD(Qt_Widgets_QTextEdit, setFontFamily);
ZEND_METHOD(Qt_Widgets_QTextEdit, setFontItalic);
ZEND_METHOD(Qt_Widgets_QTextEdit, setFontPointSize);
ZEND_METHOD(Qt_Widgets_QTextEdit, setFontUnderline);
ZEND_METHOD(Qt_Widgets_QTextEdit, setFontWeight);
ZEND_METHOD(Qt_Widgets_QTextEdit, setHtml);
ZEND_METHOD(Qt_Widgets_QTextEdit, setMarkdown);
ZEND_METHOD(Qt_Widgets_QTextEdit, setPlainText);
ZEND_METHOD(Qt_Widgets_QTextEdit, setText);
ZEND_METHOD(Qt_Widgets_QTextEdit, undo);
ZEND_METHOD(Qt_Widgets_QTextEdit, zoomIn);
ZEND_METHOD(Qt_Widgets_QTextEdit, zoomOut);
ZEND_METHOD(Qt_Widgets_QTextEdit, onCopyAvailable);
ZEND_METHOD(Qt_Widgets_QTextEdit, onCursorPositionChanged);
ZEND_METHOD(Qt_Widgets_QTextEdit, onRedoAvailable);
ZEND_METHOD(Qt_Widgets_QTextEdit, onSelectionChanged);
ZEND_METHOD(Qt_Widgets_QTextEdit, onTextChanged);
ZEND_METHOD(Qt_Widgets_QTextEdit, onUndoAvailable);


static const zend_function_entry class_Qt_CheckState_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Orientation_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_Qt_WindowType_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_Qt_AlignmentFlag_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_Qt_TextFormat_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_Qt_TextInteractionFlag_methods[] = {
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
	ZEND_ME(Qt_Core_QObject, timerEvent, arginfo_class_Qt_Core_QObject_timerEvent, ZEND_ACC_PROTECTED)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Core_QRect_methods[] = {
	ZEND_ME(Qt_Core_QRect, __construct, arginfo_class_Qt_Core_QRect___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Core_QSize_methods[] = {
	ZEND_ME(Qt_Core_QSize, __construct, arginfo_class_Qt_Core_QSize___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QSize, height, arginfo_class_Qt_Core_QSize_height, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QSize, isEmpty, arginfo_class_Qt_Core_QSize_isEmpty, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QSize, isNull, arginfo_class_Qt_Core_QSize_isNull, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QSize, isValid, arginfo_class_Qt_Core_QSize_isValid, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Core_QSize, width, arginfo_class_Qt_Core_QSize_width, ZEND_ACC_PUBLIC)
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


static const zend_function_entry class_Qt_Widgets_QAbstractScrollArea_methods[] = {
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, addScrollBarWidget, arginfo_class_Qt_Widgets_QAbstractScrollArea_addScrollBarWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, horizontalScrollBarPolicy, arginfo_class_Qt_Widgets_QAbstractScrollArea_horizontalScrollBarPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, maximumViewportSize, arginfo_class_Qt_Widgets_QAbstractScrollArea_maximumViewportSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, setCornerWidget, arginfo_class_Qt_Widgets_QAbstractScrollArea_setCornerWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, setHorizontalScrollBar, arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBar, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, setHorizontalScrollBarPolicy, arginfo_class_Qt_Widgets_QAbstractScrollArea_setHorizontalScrollBarPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, setSizeAdjustPolicy, arginfo_class_Qt_Widgets_QAbstractScrollArea_setSizeAdjustPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, setVerticalScrollBar, arginfo_class_Qt_Widgets_QAbstractScrollArea_setVerticalScrollBar, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, setVerticalScrollBarPolicy, arginfo_class_Qt_Widgets_QAbstractScrollArea_setVerticalScrollBarPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, setViewport, arginfo_class_Qt_Widgets_QAbstractScrollArea_setViewport, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, sizeAdjustPolicy, arginfo_class_Qt_Widgets_QAbstractScrollArea_sizeAdjustPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractScrollArea, verticalScrollBarPolicy, arginfo_class_Qt_Widgets_QAbstractScrollArea_verticalScrollBarPolicy, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QAbstractSlider_methods[] = {
	ZEND_ME(Qt_Widgets_QAbstractSlider, hasTracking, arginfo_class_Qt_Widgets_QAbstractSlider_hasTracking, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, invertedAppearance, arginfo_class_Qt_Widgets_QAbstractSlider_invertedAppearance, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, invertedControls, arginfo_class_Qt_Widgets_QAbstractSlider_invertedControls, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, isSliderDown, arginfo_class_Qt_Widgets_QAbstractSlider_isSliderDown, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, maximum, arginfo_class_Qt_Widgets_QAbstractSlider_maximum, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, minimum, arginfo_class_Qt_Widgets_QAbstractSlider_minimum, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, orientation, arginfo_class_Qt_Widgets_QAbstractSlider_orientation, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, pageStep, arginfo_class_Qt_Widgets_QAbstractSlider_pageStep, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setInvertedAppearance, arginfo_class_Qt_Widgets_QAbstractSlider_setInvertedAppearance, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setInvertedControls, arginfo_class_Qt_Widgets_QAbstractSlider_setInvertedControls, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setMaximum, arginfo_class_Qt_Widgets_QAbstractSlider_setMaximum, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setMinimum, arginfo_class_Qt_Widgets_QAbstractSlider_setMinimum, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setPageStep, arginfo_class_Qt_Widgets_QAbstractSlider_setPageStep, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setSingleStep, arginfo_class_Qt_Widgets_QAbstractSlider_setSingleStep, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setSliderDown, arginfo_class_Qt_Widgets_QAbstractSlider_setSliderDown, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setSliderPosition, arginfo_class_Qt_Widgets_QAbstractSlider_setSliderPosition, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setTracking, arginfo_class_Qt_Widgets_QAbstractSlider_setTracking, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, singleStep, arginfo_class_Qt_Widgets_QAbstractSlider_singleStep, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, sliderPosition, arginfo_class_Qt_Widgets_QAbstractSlider_sliderPosition, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, triggerAction, arginfo_class_Qt_Widgets_QAbstractSlider_triggerAction, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, value, arginfo_class_Qt_Widgets_QAbstractSlider_value, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setOrientation, arginfo_class_Qt_Widgets_QAbstractSlider_setOrientation, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setRange, arginfo_class_Qt_Widgets_QAbstractSlider_setRange, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, setValue, arginfo_class_Qt_Widgets_QAbstractSlider_setValue, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, onActionTriggered, arginfo_class_Qt_Widgets_QAbstractSlider_onActionTriggered, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, onRangeChanged, arginfo_class_Qt_Widgets_QAbstractSlider_onRangeChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, onSliderMoved, arginfo_class_Qt_Widgets_QAbstractSlider_onSliderMoved, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, onSliderPressed, arginfo_class_Qt_Widgets_QAbstractSlider_onSliderPressed, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, onSliderReleased, arginfo_class_Qt_Widgets_QAbstractSlider_onSliderReleased, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QAbstractSlider, onValueChanged, arginfo_class_Qt_Widgets_QAbstractSlider_onValueChanged, ZEND_ACC_PUBLIC)
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


static const zend_function_entry class_Qt_Widgets_QComboBox_methods[] = {
	ZEND_ME(Qt_Widgets_QComboBox, __construct, arginfo_class_Qt_Widgets_QComboBox___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, addItem, arginfo_class_Qt_Widgets_QComboBox_addItem, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, addItems, arginfo_class_Qt_Widgets_QComboBox_addItems, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, count, arginfo_class_Qt_Widgets_QComboBox_count, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, currentIndex, arginfo_class_Qt_Widgets_QComboBox_currentIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, currentText, arginfo_class_Qt_Widgets_QComboBox_currentText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, duplicatesEnabled, arginfo_class_Qt_Widgets_QComboBox_duplicatesEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, hasFrame, arginfo_class_Qt_Widgets_QComboBox_hasFrame, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, hidePopup, arginfo_class_Qt_Widgets_QComboBox_hidePopup, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, insertItem, arginfo_class_Qt_Widgets_QComboBox_insertItem, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, insertPolicy, arginfo_class_Qt_Widgets_QComboBox_insertPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, insertSeparator, arginfo_class_Qt_Widgets_QComboBox_insertSeparator, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, isEditable, arginfo_class_Qt_Widgets_QComboBox_isEditable, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, itemText, arginfo_class_Qt_Widgets_QComboBox_itemText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, maxCount, arginfo_class_Qt_Widgets_QComboBox_maxCount, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, maxVisibleItems, arginfo_class_Qt_Widgets_QComboBox_maxVisibleItems, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, minimumContentsLength, arginfo_class_Qt_Widgets_QComboBox_minimumContentsLength, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, placeholderText, arginfo_class_Qt_Widgets_QComboBox_placeholderText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, removeItem, arginfo_class_Qt_Widgets_QComboBox_removeItem, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setDuplicatesEnabled, arginfo_class_Qt_Widgets_QComboBox_setDuplicatesEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setEditable, arginfo_class_Qt_Widgets_QComboBox_setEditable, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setFrame, arginfo_class_Qt_Widgets_QComboBox_setFrame, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setInsertPolicy, arginfo_class_Qt_Widgets_QComboBox_setInsertPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setItemText, arginfo_class_Qt_Widgets_QComboBox_setItemText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setMaxCount, arginfo_class_Qt_Widgets_QComboBox_setMaxCount, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setMaxVisibleItems, arginfo_class_Qt_Widgets_QComboBox_setMaxVisibleItems, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setMinimumContentsLength, arginfo_class_Qt_Widgets_QComboBox_setMinimumContentsLength, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setPlaceholderText, arginfo_class_Qt_Widgets_QComboBox_setPlaceholderText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setSizeAdjustPolicy, arginfo_class_Qt_Widgets_QComboBox_setSizeAdjustPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, showPopup, arginfo_class_Qt_Widgets_QComboBox_showPopup, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, sizeAdjustPolicy, arginfo_class_Qt_Widgets_QComboBox_sizeAdjustPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, clear, arginfo_class_Qt_Widgets_QComboBox_clear, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, clearEditText, arginfo_class_Qt_Widgets_QComboBox_clearEditText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setCurrentIndex, arginfo_class_Qt_Widgets_QComboBox_setCurrentIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setCurrentText, arginfo_class_Qt_Widgets_QComboBox_setCurrentText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, setEditText, arginfo_class_Qt_Widgets_QComboBox_setEditText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, onActivated, arginfo_class_Qt_Widgets_QComboBox_onActivated, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, onCurrentIndexChanged, arginfo_class_Qt_Widgets_QComboBox_onCurrentIndexChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, onCurrentTextChanged, arginfo_class_Qt_Widgets_QComboBox_onCurrentTextChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, onEditTextChanged, arginfo_class_Qt_Widgets_QComboBox_onEditTextChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, onHighlighted, arginfo_class_Qt_Widgets_QComboBox_onHighlighted, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, onTextActivated, arginfo_class_Qt_Widgets_QComboBox_onTextActivated, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QComboBox, onTextHighlighted, arginfo_class_Qt_Widgets_QComboBox_onTextHighlighted, ZEND_ACC_PUBLIC)
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


static const zend_function_entry class_Qt_Widgets_QDial_methods[] = {
	ZEND_ME(Qt_Widgets_QDial, __construct, arginfo_class_Qt_Widgets_QDial___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDial, notchSize, arginfo_class_Qt_Widgets_QDial_notchSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDial, notchTarget, arginfo_class_Qt_Widgets_QDial_notchTarget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDial, notchesVisible, arginfo_class_Qt_Widgets_QDial_notchesVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDial, setNotchTarget, arginfo_class_Qt_Widgets_QDial_setNotchTarget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDial, wrapping, arginfo_class_Qt_Widgets_QDial_wrapping, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDial, setNotchesVisible, arginfo_class_Qt_Widgets_QDial_setNotchesVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QDial, setWrapping, arginfo_class_Qt_Widgets_QDial_setWrapping, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QFrame_methods[] = {
	ZEND_ME(Qt_Widgets_QFrame, __construct, arginfo_class_Qt_Widgets_QFrame___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, frameRect, arginfo_class_Qt_Widgets_QFrame_frameRect, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, frameShadow, arginfo_class_Qt_Widgets_QFrame_frameShadow, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, frameShape, arginfo_class_Qt_Widgets_QFrame_frameShape, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, frameStyle, arginfo_class_Qt_Widgets_QFrame_frameStyle, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, frameWidth, arginfo_class_Qt_Widgets_QFrame_frameWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, lineWidth, arginfo_class_Qt_Widgets_QFrame_lineWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, midLineWidth, arginfo_class_Qt_Widgets_QFrame_midLineWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, setFrameRect, arginfo_class_Qt_Widgets_QFrame_setFrameRect, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, setFrameShadow, arginfo_class_Qt_Widgets_QFrame_setFrameShadow, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, setFrameShape, arginfo_class_Qt_Widgets_QFrame_setFrameShape, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, setFrameStyle, arginfo_class_Qt_Widgets_QFrame_setFrameStyle, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, setLineWidth, arginfo_class_Qt_Widgets_QFrame_setLineWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QFrame, setMidLineWidth, arginfo_class_Qt_Widgets_QFrame_setMidLineWidth, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QGroupBox_methods[] = {
	ZEND_ME(Qt_Widgets_QGroupBox, __construct, arginfo_class_Qt_Widgets_QGroupBox___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, alignment, arginfo_class_Qt_Widgets_QGroupBox_alignment, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, isCheckable, arginfo_class_Qt_Widgets_QGroupBox_isCheckable, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, isChecked, arginfo_class_Qt_Widgets_QGroupBox_isChecked, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, isFlat, arginfo_class_Qt_Widgets_QGroupBox_isFlat, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, setAlignment, arginfo_class_Qt_Widgets_QGroupBox_setAlignment, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, setCheckable, arginfo_class_Qt_Widgets_QGroupBox_setCheckable, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, setFlat, arginfo_class_Qt_Widgets_QGroupBox_setFlat, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, setTitle, arginfo_class_Qt_Widgets_QGroupBox_setTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, title, arginfo_class_Qt_Widgets_QGroupBox_title, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, setChecked, arginfo_class_Qt_Widgets_QGroupBox_setChecked, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, onClicked, arginfo_class_Qt_Widgets_QGroupBox_onClicked, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QGroupBox, onToggled, arginfo_class_Qt_Widgets_QGroupBox_onToggled, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QHBoxLayout_methods[] = {
	ZEND_ME(Qt_Widgets_QHBoxLayout, __construct, arginfo_class_Qt_Widgets_QHBoxLayout___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QSlider_methods[] = {
	ZEND_ME(Qt_Widgets_QSlider, __construct, arginfo_class_Qt_Widgets_QSlider___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSlider, setTickInterval, arginfo_class_Qt_Widgets_QSlider_setTickInterval, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSlider, setTickPosition, arginfo_class_Qt_Widgets_QSlider_setTickPosition, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSlider, tickInterval, arginfo_class_Qt_Widgets_QSlider_tickInterval, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSlider, tickPosition, arginfo_class_Qt_Widgets_QSlider_tickPosition, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QVBoxLayout_methods[] = {
	ZEND_ME(Qt_Widgets_QVBoxLayout, __construct, arginfo_class_Qt_Widgets_QVBoxLayout___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QWidget_methods[] = {
	ZEND_ME(Qt_Widgets_QWidget, __construct, arginfo_class_Qt_Widgets_QWidget___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, acceptDrops, arginfo_class_Qt_Widgets_QWidget_acceptDrops, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, accessibleDescription, arginfo_class_Qt_Widgets_QWidget_accessibleDescription, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, accessibleName, arginfo_class_Qt_Widgets_QWidget_accessibleName, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, activateWindow, arginfo_class_Qt_Widgets_QWidget_activateWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, adjustSize, arginfo_class_Qt_Widgets_QWidget_adjustSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, autoFillBackground, arginfo_class_Qt_Widgets_QWidget_autoFillBackground, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, backgroundRole, arginfo_class_Qt_Widgets_QWidget_backgroundRole, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, baseSize, arginfo_class_Qt_Widgets_QWidget_baseSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, childAt, arginfo_class_Qt_Widgets_QWidget_childAt, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, childrenRect, arginfo_class_Qt_Widgets_QWidget_childrenRect, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, clearFocus, arginfo_class_Qt_Widgets_QWidget_clearFocus, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, clearMask, arginfo_class_Qt_Widgets_QWidget_clearMask, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, contentsMargins, arginfo_class_Qt_Widgets_QWidget_contentsMargins, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, contentsRect, arginfo_class_Qt_Widgets_QWidget_contentsRect, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, contextMenuPolicy, arginfo_class_Qt_Widgets_QWidget_contextMenuPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, ensurePolished, arginfo_class_Qt_Widgets_QWidget_ensurePolished, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, focusPolicy, arginfo_class_Qt_Widgets_QWidget_focusPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, frameGeometry, arginfo_class_Qt_Widgets_QWidget_frameGeometry, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, frameSize, arginfo_class_Qt_Widgets_QWidget_frameSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, geometry, arginfo_class_Qt_Widgets_QWidget_geometry, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, grabKeyboard, arginfo_class_Qt_Widgets_QWidget_grabKeyboard, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, grabMouse, arginfo_class_Qt_Widgets_QWidget_grabMouse, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, hasFocus, arginfo_class_Qt_Widgets_QWidget_hasFocus, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, hasMouseTracking, arginfo_class_Qt_Widgets_QWidget_hasMouseTracking, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, hasTabletTracking, arginfo_class_Qt_Widgets_QWidget_hasTabletTracking, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, height, arginfo_class_Qt_Widgets_QWidget_height, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, inputMethodHints, arginfo_class_Qt_Widgets_QWidget_inputMethodHints, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isActiveWindow, arginfo_class_Qt_Widgets_QWidget_isActiveWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isAncestorOf, arginfo_class_Qt_Widgets_QWidget_isAncestorOf, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isEnabled, arginfo_class_Qt_Widgets_QWidget_isEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isEnabledTo, arginfo_class_Qt_Widgets_QWidget_isEnabledTo, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isFullScreen, arginfo_class_Qt_Widgets_QWidget_isFullScreen, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isHidden, arginfo_class_Qt_Widgets_QWidget_isHidden, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isMaximized, arginfo_class_Qt_Widgets_QWidget_isMaximized, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isMinimized, arginfo_class_Qt_Widgets_QWidget_isMinimized, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isModal, arginfo_class_Qt_Widgets_QWidget_isModal, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isVisible, arginfo_class_Qt_Widgets_QWidget_isVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isVisibleTo, arginfo_class_Qt_Widgets_QWidget_isVisibleTo, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isWindow, arginfo_class_Qt_Widgets_QWidget_isWindow, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, isWindowModified, arginfo_class_Qt_Widgets_QWidget_isWindowModified, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, layout, arginfo_class_Qt_Widgets_QWidget_layout, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, layoutDirection, arginfo_class_Qt_Widgets_QWidget_layoutDirection, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, maximumHeight, arginfo_class_Qt_Widgets_QWidget_maximumHeight, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, maximumSize, arginfo_class_Qt_Widgets_QWidget_maximumSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, maximumWidth, arginfo_class_Qt_Widgets_QWidget_maximumWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, minimumHeight, arginfo_class_Qt_Widgets_QWidget_minimumHeight, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, minimumSize, arginfo_class_Qt_Widgets_QWidget_minimumSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, minimumWidth, arginfo_class_Qt_Widgets_QWidget_minimumWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, move, arginfo_class_Qt_Widgets_QWidget_move, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, nativeParentWidget, arginfo_class_Qt_Widgets_QWidget_nativeParentWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, nextInFocusChain, arginfo_class_Qt_Widgets_QWidget_nextInFocusChain, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, normalGeometry, arginfo_class_Qt_Widgets_QWidget_normalGeometry, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, overrideWindowFlags, arginfo_class_Qt_Widgets_QWidget_overrideWindowFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, parentWidget, arginfo_class_Qt_Widgets_QWidget_parentWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, pos, arginfo_class_Qt_Widgets_QWidget_pos, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, previousInFocusChain, arginfo_class_Qt_Widgets_QWidget_previousInFocusChain, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, rect, arginfo_class_Qt_Widgets_QWidget_rect, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, releaseKeyboard, arginfo_class_Qt_Widgets_QWidget_releaseKeyboard, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, releaseMouse, arginfo_class_Qt_Widgets_QWidget_releaseMouse, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, releaseShortcut, arginfo_class_Qt_Widgets_QWidget_releaseShortcut, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, repaint, arginfo_class_Qt_Widgets_QWidget_repaint, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, resize, arginfo_class_Qt_Widgets_QWidget_resize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, scroll, arginfo_class_Qt_Widgets_QWidget_scroll, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setAcceptDrops, arginfo_class_Qt_Widgets_QWidget_setAcceptDrops, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setAccessibleDescription, arginfo_class_Qt_Widgets_QWidget_setAccessibleDescription, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setAccessibleName, arginfo_class_Qt_Widgets_QWidget_setAccessibleName, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setAutoFillBackground, arginfo_class_Qt_Widgets_QWidget_setAutoFillBackground, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setBackgroundRole, arginfo_class_Qt_Widgets_QWidget_setBackgroundRole, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setBaseSize, arginfo_class_Qt_Widgets_QWidget_setBaseSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setContentsMargins, arginfo_class_Qt_Widgets_QWidget_setContentsMargins, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setContextMenuPolicy, arginfo_class_Qt_Widgets_QWidget_setContextMenuPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setFixedHeight, arginfo_class_Qt_Widgets_QWidget_setFixedHeight, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setFixedSize, arginfo_class_Qt_Widgets_QWidget_setFixedSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setFixedWidth, arginfo_class_Qt_Widgets_QWidget_setFixedWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setFocus, arginfo_class_Qt_Widgets_QWidget_setFocus, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setFocusPolicy, arginfo_class_Qt_Widgets_QWidget_setFocusPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setGeometry, arginfo_class_Qt_Widgets_QWidget_setGeometry, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setInputMethodHints, arginfo_class_Qt_Widgets_QWidget_setInputMethodHints, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setLayout, arginfo_class_Qt_Widgets_QWidget_setLayout, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setLayoutDirection, arginfo_class_Qt_Widgets_QWidget_setLayoutDirection, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setMaximumHeight, arginfo_class_Qt_Widgets_QWidget_setMaximumHeight, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setMaximumSize, arginfo_class_Qt_Widgets_QWidget_setMaximumSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setMaximumWidth, arginfo_class_Qt_Widgets_QWidget_setMaximumWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setMinimumHeight, arginfo_class_Qt_Widgets_QWidget_setMinimumHeight, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setMinimumSize, arginfo_class_Qt_Widgets_QWidget_setMinimumSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setMinimumWidth, arginfo_class_Qt_Widgets_QWidget_setMinimumWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setMouseTracking, arginfo_class_Qt_Widgets_QWidget_setMouseTracking, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setShortcutAutoRepeat, arginfo_class_Qt_Widgets_QWidget_setShortcutAutoRepeat, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setShortcutEnabled, arginfo_class_Qt_Widgets_QWidget_setShortcutEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setSizeIncrement, arginfo_class_Qt_Widgets_QWidget_setSizeIncrement, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setSizePolicy, arginfo_class_Qt_Widgets_QWidget_setSizePolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setStatusTip, arginfo_class_Qt_Widgets_QWidget_setStatusTip, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setTabletTracking, arginfo_class_Qt_Widgets_QWidget_setTabletTracking, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setToolTip, arginfo_class_Qt_Widgets_QWidget_setToolTip, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setToolTipDuration, arginfo_class_Qt_Widgets_QWidget_setToolTipDuration, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setUpdatesEnabled, arginfo_class_Qt_Widgets_QWidget_setUpdatesEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWhatsThis, arginfo_class_Qt_Widgets_QWidget_setWhatsThis, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowFilePath, arginfo_class_Qt_Widgets_QWidget_setWindowFilePath, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowFlag, arginfo_class_Qt_Widgets_QWidget_setWindowFlag, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowFlags, arginfo_class_Qt_Widgets_QWidget_setWindowFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowModality, arginfo_class_Qt_Widgets_QWidget_setWindowModality, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowOpacity, arginfo_class_Qt_Widgets_QWidget_setWindowOpacity, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowRole, arginfo_class_Qt_Widgets_QWidget_setWindowRole, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowState, arginfo_class_Qt_Widgets_QWidget_setWindowState, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, size, arginfo_class_Qt_Widgets_QWidget_size, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, sizeIncrement, arginfo_class_Qt_Widgets_QWidget_sizeIncrement, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, statusTip, arginfo_class_Qt_Widgets_QWidget_statusTip, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, styleSheet, arginfo_class_Qt_Widgets_QWidget_styleSheet, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, toolTip, arginfo_class_Qt_Widgets_QWidget_toolTip, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, toolTipDuration, arginfo_class_Qt_Widgets_QWidget_toolTipDuration, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, underMouse, arginfo_class_Qt_Widgets_QWidget_underMouse, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, ungrabGesture, arginfo_class_Qt_Widgets_QWidget_ungrabGesture, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, unsetCursor, arginfo_class_Qt_Widgets_QWidget_unsetCursor, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, unsetLayoutDirection, arginfo_class_Qt_Widgets_QWidget_unsetLayoutDirection, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, updatesEnabled, arginfo_class_Qt_Widgets_QWidget_updatesEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, updateGeometry, arginfo_class_Qt_Widgets_QWidget_updateGeometry, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, whatsThis, arginfo_class_Qt_Widgets_QWidget_whatsThis, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, width, arginfo_class_Qt_Widgets_QWidget_width, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, window, arginfo_class_Qt_Widgets_QWidget_window, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, windowFilePath, arginfo_class_Qt_Widgets_QWidget_windowFilePath, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, windowFlags, arginfo_class_Qt_Widgets_QWidget_windowFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, windowModality, arginfo_class_Qt_Widgets_QWidget_windowModality, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, windowOpacity, arginfo_class_Qt_Widgets_QWidget_windowOpacity, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, windowRole, arginfo_class_Qt_Widgets_QWidget_windowRole, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, windowState, arginfo_class_Qt_Widgets_QWidget_windowState, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, windowTitle, arginfo_class_Qt_Widgets_QWidget_windowTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, windowType, arginfo_class_Qt_Widgets_QWidget_windowType, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, x, arginfo_class_Qt_Widgets_QWidget_x, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, y, arginfo_class_Qt_Widgets_QWidget_y, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, close, arginfo_class_Qt_Widgets_QWidget_close, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, hide, arginfo_class_Qt_Widgets_QWidget_hide, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, lower, arginfo_class_Qt_Widgets_QWidget_lower, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, raise, arginfo_class_Qt_Widgets_QWidget_raise, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setDisabled, arginfo_class_Qt_Widgets_QWidget_setDisabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setEnabled, arginfo_class_Qt_Widgets_QWidget_setEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setHidden, arginfo_class_Qt_Widgets_QWidget_setHidden, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setStyleSheet, arginfo_class_Qt_Widgets_QWidget_setStyleSheet, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowModified, arginfo_class_Qt_Widgets_QWidget_setWindowModified, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowTitle, arginfo_class_Qt_Widgets_QWidget_setWindowTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, show, arginfo_class_Qt_Widgets_QWidget_show, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showFullScreen, arginfo_class_Qt_Widgets_QWidget_showFullScreen, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showMaximized, arginfo_class_Qt_Widgets_QWidget_showMaximized, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showMinimized, arginfo_class_Qt_Widgets_QWidget_showMinimized, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showNormal, arginfo_class_Qt_Widgets_QWidget_showNormal, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, update, arginfo_class_Qt_Widgets_QWidget_update, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, onCustomContextMenuRequested, arginfo_class_Qt_Widgets_QWidget_onCustomContextMenuRequested, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, onWindowTitleChanged, arginfo_class_Qt_Widgets_QWidget_onWindowTitleChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, focusNextChild, arginfo_class_Qt_Widgets_QWidget_focusNextChild, ZEND_ACC_PROTECTED)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QLabel_methods[] = {
	ZEND_ME(Qt_Widgets_QLabel, __construct, arginfo_class_Qt_Widgets_QLabel___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, setOpenExternalLinks, arginfo_class_Qt_Widgets_QLabel_setOpenExternalLinks, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, setText, arginfo_class_Qt_Widgets_QLabel_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, setTextInteractionFlags, arginfo_class_Qt_Widgets_QLabel_setTextInteractionFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, setTextFormat, arginfo_class_Qt_Widgets_QLabel_setTextFormat, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, setWordWrap, arginfo_class_Qt_Widgets_QLabel_setWordWrap, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, text, arginfo_class_Qt_Widgets_QLabel_text, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, wordWrap, arginfo_class_Qt_Widgets_QLabel_wordWrap, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QLayout_methods[] = {
	ZEND_ME(Qt_Widgets_QLayout, addWidget, arginfo_class_Qt_Widgets_QLayout_addWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLayout, removeWidget, arginfo_class_Qt_Widgets_QLayout_removeWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLayout, setSpacing, arginfo_class_Qt_Widgets_QLayout_setSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLayout, spacing, arginfo_class_Qt_Widgets_QLayout_spacing, ZEND_ACC_PUBLIC)
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


static const zend_function_entry class_Qt_Widgets_QScrollArea_methods[] = {
	ZEND_ME(Qt_Widgets_QScrollArea, __construct, arginfo_class_Qt_Widgets_QScrollArea___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QScrollArea, alignment, arginfo_class_Qt_Widgets_QScrollArea_alignment, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QScrollArea, ensureVisible, arginfo_class_Qt_Widgets_QScrollArea_ensureVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QScrollArea, ensureWidgetVisible, arginfo_class_Qt_Widgets_QScrollArea_ensureWidgetVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QScrollArea, setAlignment, arginfo_class_Qt_Widgets_QScrollArea_setAlignment, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QScrollArea, setWidget, arginfo_class_Qt_Widgets_QScrollArea_setWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QScrollArea, setWidgetResizable, arginfo_class_Qt_Widgets_QScrollArea_setWidgetResizable, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QScrollBar_methods[] = {
	ZEND_ME(Qt_Widgets_QScrollBar, __construct, arginfo_class_Qt_Widgets_QScrollBar___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QSizePolicy_methods[] = {
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


static const zend_function_entry class_Qt_Widgets_QSplitter_methods[] = {
	ZEND_ME(Qt_Widgets_QSplitter, __construct, arginfo_class_Qt_Widgets_QSplitter___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, addWidget, arginfo_class_Qt_Widgets_QSplitter_addWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, childrenCollapsible, arginfo_class_Qt_Widgets_QSplitter_childrenCollapsible, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, count, arginfo_class_Qt_Widgets_QSplitter_count, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, handleWidth, arginfo_class_Qt_Widgets_QSplitter_handleWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, indexOf, arginfo_class_Qt_Widgets_QSplitter_indexOf, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, insertWidget, arginfo_class_Qt_Widgets_QSplitter_insertWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, isCollapsible, arginfo_class_Qt_Widgets_QSplitter_isCollapsible, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, opaqueResize, arginfo_class_Qt_Widgets_QSplitter_opaqueResize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, refresh, arginfo_class_Qt_Widgets_QSplitter_refresh, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, replaceWidget, arginfo_class_Qt_Widgets_QSplitter_replaceWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, setChildrenCollapsible, arginfo_class_Qt_Widgets_QSplitter_setChildrenCollapsible, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, setCollapsible, arginfo_class_Qt_Widgets_QSplitter_setCollapsible, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, setHandleWidth, arginfo_class_Qt_Widgets_QSplitter_setHandleWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, setOpaqueResize, arginfo_class_Qt_Widgets_QSplitter_setOpaqueResize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, setOrientation, arginfo_class_Qt_Widgets_QSplitter_setOrientation, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, setSizes, arginfo_class_Qt_Widgets_QSplitter_setSizes, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, setStretchFactor, arginfo_class_Qt_Widgets_QSplitter_setStretchFactor, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, sizes, arginfo_class_Qt_Widgets_QSplitter_sizes, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QSplitter, onSplitterMoved, arginfo_class_Qt_Widgets_QSplitter_onSplitterMoved, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QStackedWidget_methods[] = {
	ZEND_ME(Qt_Widgets_QStackedWidget, __construct, arginfo_class_Qt_Widgets_QStackedWidget___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, addWidget, arginfo_class_Qt_Widgets_QStackedWidget_addWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, count, arginfo_class_Qt_Widgets_QStackedWidget_count, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, currentIndex, arginfo_class_Qt_Widgets_QStackedWidget_currentIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, currentWidget, arginfo_class_Qt_Widgets_QStackedWidget_currentWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, indexOf, arginfo_class_Qt_Widgets_QStackedWidget_indexOf, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, insertWidget, arginfo_class_Qt_Widgets_QStackedWidget_insertWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, removeWidget, arginfo_class_Qt_Widgets_QStackedWidget_removeWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, setCurrentIndex, arginfo_class_Qt_Widgets_QStackedWidget_setCurrentIndex, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, setCurrentWidget, arginfo_class_Qt_Widgets_QStackedWidget_setCurrentWidget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, widget, arginfo_class_Qt_Widgets_QStackedWidget_widget, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, onCurrentChanged, arginfo_class_Qt_Widgets_QStackedWidget_onCurrentChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QStackedWidget, onWidgetRemoved, arginfo_class_Qt_Widgets_QStackedWidget_onWidgetRemoved, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QTextEdit_methods[] = {
	ZEND_ME(Qt_Widgets_QTextEdit, __construct, arginfo_class_Qt_Widgets_QTextEdit___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, acceptRichText, arginfo_class_Qt_Widgets_QTextEdit_acceptRichText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, alignment, arginfo_class_Qt_Widgets_QTextEdit_alignment, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, anchorAt, arginfo_class_Qt_Widgets_QTextEdit_anchorAt, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, autoFormatting, arginfo_class_Qt_Widgets_QTextEdit_autoFormatting, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, canPaste, arginfo_class_Qt_Widgets_QTextEdit_canPaste, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, documentTitle, arginfo_class_Qt_Widgets_QTextEdit_documentTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, ensureCursorVisible, arginfo_class_Qt_Widgets_QTextEdit_ensureCursorVisible, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, fontFamily, arginfo_class_Qt_Widgets_QTextEdit_fontFamily, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, fontItalic, arginfo_class_Qt_Widgets_QTextEdit_fontItalic, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, fontPointSize, arginfo_class_Qt_Widgets_QTextEdit_fontPointSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, fontUnderline, arginfo_class_Qt_Widgets_QTextEdit_fontUnderline, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, fontWeight, arginfo_class_Qt_Widgets_QTextEdit_fontWeight, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, isReadOnly, arginfo_class_Qt_Widgets_QTextEdit_isReadOnly, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, isUndoRedoEnabled, arginfo_class_Qt_Widgets_QTextEdit_isUndoRedoEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, lineWrapColumnOrWidth, arginfo_class_Qt_Widgets_QTextEdit_lineWrapColumnOrWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, lineWrapMode, arginfo_class_Qt_Widgets_QTextEdit_lineWrapMode, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, overwriteMode, arginfo_class_Qt_Widgets_QTextEdit_overwriteMode, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, placeholderText, arginfo_class_Qt_Widgets_QTextEdit_placeholderText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setAcceptRichText, arginfo_class_Qt_Widgets_QTextEdit_setAcceptRichText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setAutoFormatting, arginfo_class_Qt_Widgets_QTextEdit_setAutoFormatting, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setDocumentTitle, arginfo_class_Qt_Widgets_QTextEdit_setDocumentTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setLineWrapColumnOrWidth, arginfo_class_Qt_Widgets_QTextEdit_setLineWrapColumnOrWidth, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setLineWrapMode, arginfo_class_Qt_Widgets_QTextEdit_setLineWrapMode, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setOverwriteMode, arginfo_class_Qt_Widgets_QTextEdit_setOverwriteMode, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setPlaceholderText, arginfo_class_Qt_Widgets_QTextEdit_setPlaceholderText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setReadOnly, arginfo_class_Qt_Widgets_QTextEdit_setReadOnly, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setTabChangesFocus, arginfo_class_Qt_Widgets_QTextEdit_setTabChangesFocus, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setTabStopDistance, arginfo_class_Qt_Widgets_QTextEdit_setTabStopDistance, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setTextInteractionFlags, arginfo_class_Qt_Widgets_QTextEdit_setTextInteractionFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setUndoRedoEnabled, arginfo_class_Qt_Widgets_QTextEdit_setUndoRedoEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setWordWrapMode, arginfo_class_Qt_Widgets_QTextEdit_setWordWrapMode, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, tabChangesFocus, arginfo_class_Qt_Widgets_QTextEdit_tabChangesFocus, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, tabStopDistance, arginfo_class_Qt_Widgets_QTextEdit_tabStopDistance, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, textInteractionFlags, arginfo_class_Qt_Widgets_QTextEdit_textInteractionFlags, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, toHtml, arginfo_class_Qt_Widgets_QTextEdit_toHtml, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, toMarkdown, arginfo_class_Qt_Widgets_QTextEdit_toMarkdown, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, toPlainText, arginfo_class_Qt_Widgets_QTextEdit_toPlainText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, wordWrapMode, arginfo_class_Qt_Widgets_QTextEdit_wordWrapMode, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, append, arginfo_class_Qt_Widgets_QTextEdit_append, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, clear, arginfo_class_Qt_Widgets_QTextEdit_clear, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, copy, arginfo_class_Qt_Widgets_QTextEdit_copy, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, cut, arginfo_class_Qt_Widgets_QTextEdit_cut, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, insertHtml, arginfo_class_Qt_Widgets_QTextEdit_insertHtml, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, insertPlainText, arginfo_class_Qt_Widgets_QTextEdit_insertPlainText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, paste, arginfo_class_Qt_Widgets_QTextEdit_paste, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, redo, arginfo_class_Qt_Widgets_QTextEdit_redo, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, scrollToAnchor, arginfo_class_Qt_Widgets_QTextEdit_scrollToAnchor, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, selectAll, arginfo_class_Qt_Widgets_QTextEdit_selectAll, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setAlignment, arginfo_class_Qt_Widgets_QTextEdit_setAlignment, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setFontFamily, arginfo_class_Qt_Widgets_QTextEdit_setFontFamily, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setFontItalic, arginfo_class_Qt_Widgets_QTextEdit_setFontItalic, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setFontPointSize, arginfo_class_Qt_Widgets_QTextEdit_setFontPointSize, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setFontUnderline, arginfo_class_Qt_Widgets_QTextEdit_setFontUnderline, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setFontWeight, arginfo_class_Qt_Widgets_QTextEdit_setFontWeight, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setHtml, arginfo_class_Qt_Widgets_QTextEdit_setHtml, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setMarkdown, arginfo_class_Qt_Widgets_QTextEdit_setMarkdown, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setPlainText, arginfo_class_Qt_Widgets_QTextEdit_setPlainText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, setText, arginfo_class_Qt_Widgets_QTextEdit_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, undo, arginfo_class_Qt_Widgets_QTextEdit_undo, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, zoomIn, arginfo_class_Qt_Widgets_QTextEdit_zoomIn, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, zoomOut, arginfo_class_Qt_Widgets_QTextEdit_zoomOut, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, onCopyAvailable, arginfo_class_Qt_Widgets_QTextEdit_onCopyAvailable, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, onCursorPositionChanged, arginfo_class_Qt_Widgets_QTextEdit_onCursorPositionChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, onRedoAvailable, arginfo_class_Qt_Widgets_QTextEdit_onRedoAvailable, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, onSelectionChanged, arginfo_class_Qt_Widgets_QTextEdit_onSelectionChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, onTextChanged, arginfo_class_Qt_Widgets_QTextEdit_onTextChanged, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QTextEdit, onUndoAvailable, arginfo_class_Qt_Widgets_QTextEdit_onUndoAvailable, ZEND_ACC_PUBLIC)
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

static zend_class_entry *register_class_Qt_Orientation(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt", "Orientation", class_Qt_Orientation_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval const_Horizontal_value;
	ZVAL_LONG(&const_Horizontal_value, 1);
	zend_string *const_Horizontal_name = zend_string_init_interned("Horizontal", sizeof("Horizontal") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Horizontal_name, &const_Horizontal_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Horizontal_name);

	zval const_Vertical_value;
	ZVAL_LONG(&const_Vertical_value, 2);
	zend_string *const_Vertical_name = zend_string_init_interned("Vertical", sizeof("Vertical") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Vertical_name, &const_Vertical_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Vertical_name);

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

static zend_class_entry *register_class_Qt_TextFormat(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt", "TextFormat", class_Qt_TextFormat_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval const_PlainText_value;
	ZVAL_LONG(&const_PlainText_value, 0);
	zend_string *const_PlainText_name = zend_string_init_interned("PlainText", sizeof("PlainText") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_PlainText_name, &const_PlainText_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_PlainText_name);

	zval const_RichText_value;
	ZVAL_LONG(&const_RichText_value, 1);
	zend_string *const_RichText_name = zend_string_init_interned("RichText", sizeof("RichText") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_RichText_name, &const_RichText_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_RichText_name);

	zval const_AutoText_value;
	ZVAL_LONG(&const_AutoText_value, 2);
	zend_string *const_AutoText_name = zend_string_init_interned("AutoText", sizeof("AutoText") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AutoText_name, &const_AutoText_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AutoText_name);

	zval const_MarkdownText_value;
	ZVAL_LONG(&const_MarkdownText_value, 3);
	zend_string *const_MarkdownText_name = zend_string_init_interned("MarkdownText", sizeof("MarkdownText") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_MarkdownText_name, &const_MarkdownText_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_MarkdownText_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_TextInteractionFlag(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt", "TextInteractionFlag", class_Qt_TextInteractionFlag_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval const_NoTextInteraction_value;
	ZVAL_LONG(&const_NoTextInteraction_value, 0);
	zend_string *const_NoTextInteraction_name = zend_string_init_interned("NoTextInteraction", sizeof("NoTextInteraction") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_NoTextInteraction_name, &const_NoTextInteraction_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_NoTextInteraction_name);

	zval const_TextSelectableByMouse_value;
	ZVAL_LONG(&const_TextSelectableByMouse_value, 1);
	zend_string *const_TextSelectableByMouse_name = zend_string_init_interned("TextSelectableByMouse", sizeof("TextSelectableByMouse") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TextSelectableByMouse_name, &const_TextSelectableByMouse_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TextSelectableByMouse_name);

	zval const_TextSelectableByKeyboard_value;
	ZVAL_LONG(&const_TextSelectableByKeyboard_value, 2);
	zend_string *const_TextSelectableByKeyboard_name = zend_string_init_interned("TextSelectableByKeyboard", sizeof("TextSelectableByKeyboard") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TextSelectableByKeyboard_name, &const_TextSelectableByKeyboard_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TextSelectableByKeyboard_name);

	zval const_LinksAccessibleByMouse_value;
	ZVAL_LONG(&const_LinksAccessibleByMouse_value, 4);
	zend_string *const_LinksAccessibleByMouse_name = zend_string_init_interned("LinksAccessibleByMouse", sizeof("LinksAccessibleByMouse") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_LinksAccessibleByMouse_name, &const_LinksAccessibleByMouse_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_LinksAccessibleByMouse_name);

	zval const_LinksAccessibleByKeyboard_value;
	ZVAL_LONG(&const_LinksAccessibleByKeyboard_value, 8);
	zend_string *const_LinksAccessibleByKeyboard_name = zend_string_init_interned("LinksAccessibleByKeyboard", sizeof("LinksAccessibleByKeyboard") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_LinksAccessibleByKeyboard_name, &const_LinksAccessibleByKeyboard_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_LinksAccessibleByKeyboard_name);

	zval const_TextEditable_value;
	ZVAL_LONG(&const_TextEditable_value, 16);
	zend_string *const_TextEditable_name = zend_string_init_interned("TextEditable", sizeof("TextEditable") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TextEditable_name, &const_TextEditable_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TextEditable_name);

	zval const_TextEditorInteraction_value;
	ZVAL_LONG(&const_TextEditorInteraction_value, 1 | 2 | 16);
	zend_string *const_TextEditorInteraction_name = zend_string_init_interned("TextEditorInteraction", sizeof("TextEditorInteraction") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TextEditorInteraction_name, &const_TextEditorInteraction_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TextEditorInteraction_name);

	zval const_TextBrowserInteraction_value;
	ZVAL_LONG(&const_TextBrowserInteraction_value, 1 | 4 | 8);
	zend_string *const_TextBrowserInteraction_name = zend_string_init_interned("TextBrowserInteraction", sizeof("TextBrowserInteraction") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TextBrowserInteraction_name, &const_TextBrowserInteraction_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TextBrowserInteraction_name);

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

static zend_class_entry *register_class_Qt_Core_QRect(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Core", "QRect", class_Qt_Core_QRect_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Core_QSize(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Core", "QSize", class_Qt_Core_QSize_methods);
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

static zend_class_entry *register_class_Qt_Widgets_QAbstractScrollArea(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QAbstractScrollArea", class_Qt_Widgets_QAbstractScrollArea_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);
	class_entry->ce_flags |= ZEND_ACC_ABSTRACT;

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QAbstractSlider(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QAbstractSlider", class_Qt_Widgets_QAbstractSlider_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);
	class_entry->ce_flags |= ZEND_ACC_ABSTRACT;

	zval const_SliderNoAction_value;
	ZVAL_LONG(&const_SliderNoAction_value, 0);
	zend_string *const_SliderNoAction_name = zend_string_init_interned("SliderNoAction", sizeof("SliderNoAction") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderNoAction_name, &const_SliderNoAction_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderNoAction_name);

	zval const_SliderSingleStepAdd_value;
	ZVAL_LONG(&const_SliderSingleStepAdd_value, 1);
	zend_string *const_SliderSingleStepAdd_name = zend_string_init_interned("SliderSingleStepAdd", sizeof("SliderSingleStepAdd") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderSingleStepAdd_name, &const_SliderSingleStepAdd_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderSingleStepAdd_name);

	zval const_SliderSingleStepSub_value;
	ZVAL_LONG(&const_SliderSingleStepSub_value, 2);
	zend_string *const_SliderSingleStepSub_name = zend_string_init_interned("SliderSingleStepSub", sizeof("SliderSingleStepSub") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderSingleStepSub_name, &const_SliderSingleStepSub_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderSingleStepSub_name);

	zval const_SliderPageStepAdd_value;
	ZVAL_LONG(&const_SliderPageStepAdd_value, 3);
	zend_string *const_SliderPageStepAdd_name = zend_string_init_interned("SliderPageStepAdd", sizeof("SliderPageStepAdd") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderPageStepAdd_name, &const_SliderPageStepAdd_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderPageStepAdd_name);

	zval const_SliderPageStepSub_value;
	ZVAL_LONG(&const_SliderPageStepSub_value, 4);
	zend_string *const_SliderPageStepSub_name = zend_string_init_interned("SliderPageStepSub", sizeof("SliderPageStepSub") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderPageStepSub_name, &const_SliderPageStepSub_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderPageStepSub_name);

	zval const_SliderToMinimum_value;
	ZVAL_LONG(&const_SliderToMinimum_value, 5);
	zend_string *const_SliderToMinimum_name = zend_string_init_interned("SliderToMinimum", sizeof("SliderToMinimum") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderToMinimum_name, &const_SliderToMinimum_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderToMinimum_name);

	zval const_SliderToMaximum_value;
	ZVAL_LONG(&const_SliderToMaximum_value, 6);
	zend_string *const_SliderToMaximum_name = zend_string_init_interned("SliderToMaximum", sizeof("SliderToMaximum") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderToMaximum_name, &const_SliderToMaximum_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderToMaximum_name);

	zval const_SliderMove_value;
	ZVAL_LONG(&const_SliderMove_value, 7);
	zend_string *const_SliderMove_name = zend_string_init_interned("SliderMove", sizeof("SliderMove") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderMove_name, &const_SliderMove_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderMove_name);

	zval const_SliderRangeChange_value;
	ZVAL_LONG(&const_SliderRangeChange_value, 0);
	zend_string *const_SliderRangeChange_name = zend_string_init_interned("SliderRangeChange", sizeof("SliderRangeChange") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderRangeChange_name, &const_SliderRangeChange_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderRangeChange_name);

	zval const_SliderOrientationChange_value;
	ZVAL_LONG(&const_SliderOrientationChange_value, 1);
	zend_string *const_SliderOrientationChange_name = zend_string_init_interned("SliderOrientationChange", sizeof("SliderOrientationChange") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderOrientationChange_name, &const_SliderOrientationChange_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderOrientationChange_name);

	zval const_SliderStepsChange_value;
	ZVAL_LONG(&const_SliderStepsChange_value, 2);
	zend_string *const_SliderStepsChange_name = zend_string_init_interned("SliderStepsChange", sizeof("SliderStepsChange") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderStepsChange_name, &const_SliderStepsChange_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderStepsChange_name);

	zval const_SliderValueChange_value;
	ZVAL_LONG(&const_SliderValueChange_value, 3);
	zend_string *const_SliderValueChange_name = zend_string_init_interned("SliderValueChange", sizeof("SliderValueChange") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_SliderValueChange_name, &const_SliderValueChange_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_SliderValueChange_name);

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

static zend_class_entry *register_class_Qt_Widgets_QComboBox(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QComboBox", class_Qt_Widgets_QComboBox_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);

	zval const_NoInsert_value;
	ZVAL_LONG(&const_NoInsert_value, 0);
	zend_string *const_NoInsert_name = zend_string_init_interned("NoInsert", sizeof("NoInsert") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_NoInsert_name, &const_NoInsert_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_NoInsert_name);

	zval const_InsertAtTop_value;
	ZVAL_LONG(&const_InsertAtTop_value, 1);
	zend_string *const_InsertAtTop_name = zend_string_init_interned("InsertAtTop", sizeof("InsertAtTop") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_InsertAtTop_name, &const_InsertAtTop_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_InsertAtTop_name);

	zval const_InsertAtCurrent_value;
	ZVAL_LONG(&const_InsertAtCurrent_value, 2);
	zend_string *const_InsertAtCurrent_name = zend_string_init_interned("InsertAtCurrent", sizeof("InsertAtCurrent") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_InsertAtCurrent_name, &const_InsertAtCurrent_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_InsertAtCurrent_name);

	zval const_InsertAtBottom_value;
	ZVAL_LONG(&const_InsertAtBottom_value, 3);
	zend_string *const_InsertAtBottom_name = zend_string_init_interned("InsertAtBottom", sizeof("InsertAtBottom") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_InsertAtBottom_name, &const_InsertAtBottom_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_InsertAtBottom_name);

	zval const_InsertAfterCurrent_value;
	ZVAL_LONG(&const_InsertAfterCurrent_value, 4);
	zend_string *const_InsertAfterCurrent_name = zend_string_init_interned("InsertAfterCurrent", sizeof("InsertAfterCurrent") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_InsertAfterCurrent_name, &const_InsertAfterCurrent_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_InsertAfterCurrent_name);

	zval const_InsertBeforeCurrent_value;
	ZVAL_LONG(&const_InsertBeforeCurrent_value, 5);
	zend_string *const_InsertBeforeCurrent_name = zend_string_init_interned("InsertBeforeCurrent", sizeof("InsertBeforeCurrent") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_InsertBeforeCurrent_name, &const_InsertBeforeCurrent_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_InsertBeforeCurrent_name);

	zval const_InsertAlphabetically_value;
	ZVAL_LONG(&const_InsertAlphabetically_value, 6);
	zend_string *const_InsertAlphabetically_name = zend_string_init_interned("InsertAlphabetically", sizeof("InsertAlphabetically") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_InsertAlphabetically_name, &const_InsertAlphabetically_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_InsertAlphabetically_name);

	zval const_AdjustToContents_value;
	ZVAL_LONG(&const_AdjustToContents_value, 0);
	zend_string *const_AdjustToContents_name = zend_string_init_interned("AdjustToContents", sizeof("AdjustToContents") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AdjustToContents_name, &const_AdjustToContents_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AdjustToContents_name);

	zval const_AdjustToContentsOnFirstShow_value;
	ZVAL_LONG(&const_AdjustToContentsOnFirstShow_value, 1);
	zend_string *const_AdjustToContentsOnFirstShow_name = zend_string_init_interned("AdjustToContentsOnFirstShow", sizeof("AdjustToContentsOnFirstShow") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AdjustToContentsOnFirstShow_name, &const_AdjustToContentsOnFirstShow_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AdjustToContentsOnFirstShow_name);

	zval const_AdjustToMinimumContentsLengthWithIcon_value;
	ZVAL_LONG(&const_AdjustToMinimumContentsLengthWithIcon_value, 2);
	zend_string *const_AdjustToMinimumContentsLengthWithIcon_name = zend_string_init_interned("AdjustToMinimumContentsLengthWithIcon", sizeof("AdjustToMinimumContentsLengthWithIcon") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_AdjustToMinimumContentsLengthWithIcon_name, &const_AdjustToMinimumContentsLengthWithIcon_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_AdjustToMinimumContentsLengthWithIcon_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QDateTimeEdit(zend_class_entry *class_entry_Qt_Widgets_QAbstractSpinbox)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QDateTimeEdit", class_Qt_Widgets_QDateTimeEdit_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractSpinbox);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QDial(zend_class_entry *class_entry_Qt_Widgets_QAbstractSlider)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QDial", class_Qt_Widgets_QDial_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractSlider);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QFrame(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QFrame", class_Qt_Widgets_QFrame_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);

	zval const_NoFrame_value;
	ZVAL_LONG(&const_NoFrame_value, 0);
	zend_string *const_NoFrame_name = zend_string_init_interned("NoFrame", sizeof("NoFrame") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_NoFrame_name, &const_NoFrame_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_NoFrame_name);

	zval const_Box_value;
	ZVAL_LONG(&const_Box_value, 1);
	zend_string *const_Box_name = zend_string_init_interned("Box", sizeof("Box") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Box_name, &const_Box_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Box_name);

	zval const_Panel_value;
	ZVAL_LONG(&const_Panel_value, 2);
	zend_string *const_Panel_name = zend_string_init_interned("Panel", sizeof("Panel") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Panel_name, &const_Panel_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Panel_name);

	zval const_StyledPanel_value;
	ZVAL_LONG(&const_StyledPanel_value, 6);
	zend_string *const_StyledPanel_name = zend_string_init_interned("StyledPanel", sizeof("StyledPanel") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_StyledPanel_name, &const_StyledPanel_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_StyledPanel_name);

	zval const_HLine_value;
	ZVAL_LONG(&const_HLine_value, 4);
	zend_string *const_HLine_name = zend_string_init_interned("HLine", sizeof("HLine") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_HLine_name, &const_HLine_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_HLine_name);

	zval const_VLine_value;
	ZVAL_LONG(&const_VLine_value, 5);
	zend_string *const_VLine_name = zend_string_init_interned("VLine", sizeof("VLine") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_VLine_name, &const_VLine_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_VLine_name);

	zval const_WinPanel_value;
	ZVAL_LONG(&const_WinPanel_value, 3);
	zend_string *const_WinPanel_name = zend_string_init_interned("WinPanel", sizeof("WinPanel") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_WinPanel_name, &const_WinPanel_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_WinPanel_name);

	zval const_Plain_value;
	ZVAL_LONG(&const_Plain_value, 16);
	zend_string *const_Plain_name = zend_string_init_interned("Plain", sizeof("Plain") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Plain_name, &const_Plain_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Plain_name);

	zval const_Raised_value;
	ZVAL_LONG(&const_Raised_value, 32);
	zend_string *const_Raised_name = zend_string_init_interned("Raised", sizeof("Raised") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Raised_name, &const_Raised_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Raised_name);

	zval const_Sunken_value;
	ZVAL_LONG(&const_Sunken_value, 48);
	zend_string *const_Sunken_name = zend_string_init_interned("Sunken", sizeof("Sunken") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Sunken_name, &const_Sunken_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Sunken_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QGroupBox(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QGroupBox", class_Qt_Widgets_QGroupBox_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QHBoxLayout(zend_class_entry *class_entry_Qt_Widgets_QBoxLayout)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QHBoxLayout", class_Qt_Widgets_QHBoxLayout_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QBoxLayout);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QSlider(zend_class_entry *class_entry_Qt_Widgets_QAbstractSlider)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QSlider", class_Qt_Widgets_QSlider_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractSlider);

	zval const_NoTicks_value;
	ZVAL_LONG(&const_NoTicks_value, 0);
	zend_string *const_NoTicks_name = zend_string_init_interned("NoTicks", sizeof("NoTicks") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_NoTicks_name, &const_NoTicks_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_NoTicks_name);

	zval const_TicksAbove_value;
	ZVAL_LONG(&const_TicksAbove_value, 1);
	zend_string *const_TicksAbove_name = zend_string_init_interned("TicksAbove", sizeof("TicksAbove") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TicksAbove_name, &const_TicksAbove_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TicksAbove_name);

	zval const_TicksBelow_value;
	ZVAL_LONG(&const_TicksBelow_value, 2);
	zend_string *const_TicksBelow_name = zend_string_init_interned("TicksBelow", sizeof("TicksBelow") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TicksBelow_name, &const_TicksBelow_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TicksBelow_name);

	zval const_TicksBothSides_value;
	ZVAL_LONG(&const_TicksBothSides_value, 3);
	zend_string *const_TicksBothSides_name = zend_string_init_interned("TicksBothSides", sizeof("TicksBothSides") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TicksBothSides_name, &const_TicksBothSides_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TicksBothSides_name);

	zval const_TicksLeft_value;
	ZVAL_LONG(&const_TicksLeft_value, 1);
	zend_string *const_TicksLeft_name = zend_string_init_interned("TicksLeft", sizeof("TicksLeft") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TicksLeft_name, &const_TicksLeft_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TicksLeft_name);

	zval const_TicksRight_value;
	ZVAL_LONG(&const_TicksRight_value, 2);
	zend_string *const_TicksRight_name = zend_string_init_interned("TicksRight", sizeof("TicksRight") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TicksRight_name, &const_TicksRight_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TicksRight_name);

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

static zend_class_entry *register_class_Qt_Widgets_QLabel(zend_class_entry *class_entry_Qt_Widgets_QFrame)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QLabel", class_Qt_Widgets_QLabel_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QFrame);

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

static zend_class_entry *register_class_Qt_Widgets_QScrollArea(zend_class_entry *class_entry_Qt_Widgets_QFrame)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QScrollArea", class_Qt_Widgets_QScrollArea_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QFrame);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QScrollBar(zend_class_entry *class_entry_Qt_Widgets_QAbstractSlider)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QScrollBar", class_Qt_Widgets_QScrollBar_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractSlider);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QSizePolicy(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QSizePolicy", class_Qt_Widgets_QSizePolicy_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	zval const_GrowFlag_value;
	ZVAL_LONG(&const_GrowFlag_value, 1);
	zend_string *const_GrowFlag_name = zend_string_init_interned("GrowFlag", sizeof("GrowFlag") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_GrowFlag_name, &const_GrowFlag_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_GrowFlag_name);

	zval const_ExpandFlag_value;
	ZVAL_LONG(&const_ExpandFlag_value, 2);
	zend_string *const_ExpandFlag_name = zend_string_init_interned("ExpandFlag", sizeof("ExpandFlag") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_ExpandFlag_name, &const_ExpandFlag_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_ExpandFlag_name);

	zval const_ShrinkFlag_value;
	ZVAL_LONG(&const_ShrinkFlag_value, 4);
	zend_string *const_ShrinkFlag_name = zend_string_init_interned("ShrinkFlag", sizeof("ShrinkFlag") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_ShrinkFlag_name, &const_ShrinkFlag_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_ShrinkFlag_name);

	zval const_IgnoreFlag_value;
	ZVAL_LONG(&const_IgnoreFlag_value, 8);
	zend_string *const_IgnoreFlag_name = zend_string_init_interned("IgnoreFlag", sizeof("IgnoreFlag") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_IgnoreFlag_name, &const_IgnoreFlag_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_IgnoreFlag_name);

	zval const_Fixed_value;
	ZVAL_LONG(&const_Fixed_value, 0);
	zend_string *const_Fixed_name = zend_string_init_interned("Fixed", sizeof("Fixed") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Fixed_name, &const_Fixed_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Fixed_name);

	zval const_Minimum_value;
	ZVAL_LONG(&const_Minimum_value, 1);
	zend_string *const_Minimum_name = zend_string_init_interned("Minimum", sizeof("Minimum") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Minimum_name, &const_Minimum_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Minimum_name);

	zval const_Maximum_value;
	ZVAL_LONG(&const_Maximum_value, 4);
	zend_string *const_Maximum_name = zend_string_init_interned("Maximum", sizeof("Maximum") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Maximum_name, &const_Maximum_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Maximum_name);

	zval const_Preferred_value;
	ZVAL_LONG(&const_Preferred_value, 1 | 4);
	zend_string *const_Preferred_name = zend_string_init_interned("Preferred", sizeof("Preferred") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Preferred_name, &const_Preferred_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Preferred_name);

	zval const_Expanding_value;
	ZVAL_LONG(&const_Expanding_value, 1 | 4 | 2);
	zend_string *const_Expanding_name = zend_string_init_interned("Expanding", sizeof("Expanding") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Expanding_name, &const_Expanding_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Expanding_name);

	zval const_MinimumExpanding_value;
	ZVAL_LONG(&const_MinimumExpanding_value, 1 | 2);
	zend_string *const_MinimumExpanding_name = zend_string_init_interned("MinimumExpanding", sizeof("MinimumExpanding") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_MinimumExpanding_name, &const_MinimumExpanding_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_MinimumExpanding_name);

	zval const_Ignored_value;
	ZVAL_LONG(&const_Ignored_value, 4 | 1 | 8);
	zend_string *const_Ignored_name = zend_string_init_interned("Ignored", sizeof("Ignored") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_Ignored_name, &const_Ignored_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_Ignored_name);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QSpinBox(zend_class_entry *class_entry_Qt_Widgets_QAbstractSpinBox)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QSpinBox", class_Qt_Widgets_QSpinBox_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractSpinBox);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QSplitter(zend_class_entry *class_entry_Qt_Widgets_QFrame)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QSplitter", class_Qt_Widgets_QSplitter_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QFrame);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QStackedWidget(zend_class_entry *class_entry_Qt_Widgets_QFrame)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QStackedWidget", class_Qt_Widgets_QStackedWidget_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QFrame);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QTextEdit(zend_class_entry *class_entry_Qt_Widgets_QAbstractScrollArea)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QTextEdit", class_Qt_Widgets_QTextEdit_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QAbstractScrollArea);

	return class_entry;
}

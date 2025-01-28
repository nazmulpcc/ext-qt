/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 0db62990930979a603692f6cc9ba08f360c767cb */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Core_QObject___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Core\\QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_blockSignals, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, block, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_dumpObjectInfo, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Core_QObject_dumpObjectTree arginfo_class_Qt_Core_QObject_dumpObjectInfo

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_isQuickItemType, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Core_QObject_isWidgetType arginfo_class_Qt_Core_QObject_isQuickItemType

#define arginfo_class_Qt_Core_QObject_isWindowType arginfo_class_Qt_Core_QObject_isQuickItemType

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

#define arginfo_class_Qt_Core_QObject_signalsBlocked arginfo_class_Qt_Core_QObject_isQuickItemType

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Core_QObject_startTimer, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, timerType, IS_LONG, 0, "1")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QApplication___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QApplication_exec, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

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

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QHBoxLayout___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QVBoxLayout___construct arginfo_class_Qt_Widgets_QHBoxLayout___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QWidget___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, windowFlags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setLayout, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, layout, Qt\\Widgets\\QLayout, 0)
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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLabel_setText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLabel_text arginfo_class_Qt_Core_QObject_objectName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLayout_addWidget, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, Qt\\Widgets\\QWidget, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLayout_removeWidget arginfo_class_Qt_Widgets_QLayout_addWidget

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLayout_setSpacing, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLayout_spacing arginfo_class_Qt_Widgets_QApplication_exec

#define arginfo_class_Qt_Widgets_QLayout___destruct arginfo_class_Qt_Widgets_QApplication___construct

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_backspace arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_cursorPosition arginfo_class_Qt_Widgets_QApplication_exec

#define arginfo_class_Qt_Widgets_QLineEdit_del arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_deselect arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_displayText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QLineEdit_echoMode arginfo_class_Qt_Widgets_QApplication_exec

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_end, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, mark, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_hasSelectedText arginfo_class_Qt_Core_QObject_isQuickItemType

#define arginfo_class_Qt_Widgets_QLineEdit_home arginfo_class_Qt_Widgets_QLineEdit_end

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_insert, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, newText, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_isClearButtonEnabled arginfo_class_Qt_Core_QObject_isQuickItemType

#define arginfo_class_Qt_Widgets_QLineEdit_isModified arginfo_class_Qt_Core_QObject_isQuickItemType

#define arginfo_class_Qt_Widgets_QLineEdit_isReadOnly arginfo_class_Qt_Core_QObject_isQuickItemType

#define arginfo_class_Qt_Widgets_QLineEdit_maxLength arginfo_class_Qt_Widgets_QApplication_exec

#define arginfo_class_Qt_Widgets_QLineEdit_placeholderText arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QLineEdit_selectedText arginfo_class_Qt_Core_QObject_objectName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setClearButtonEnabled, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setCursorPosition, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setEchoMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setMaxLength, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setPlaceholderText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, placeholderText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setReadOnly, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, readOnly, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_setSelection, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_setText arginfo_class_Qt_Widgets_QLabel_setText

#define arginfo_class_Qt_Widgets_QLineEdit_text arginfo_class_Qt_Core_QObject_objectName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLineEdit_onEditingFinished, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QLineEdit_onReturnPressed arginfo_class_Qt_Widgets_QLineEdit_onEditingFinished

#define arginfo_class_Qt_Widgets_QLineEdit_onTextChanged arginfo_class_Qt_Widgets_QLineEdit_onEditingFinished

#define arginfo_class_Qt_Widgets_QLineEdit_clear arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_copy arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_cut arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_paste arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_redo arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_selectAll arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QLineEdit_undo arginfo_class_Qt_Core_QObject_dumpObjectInfo

#define arginfo_class_Qt_Widgets_QMainWindow___construct arginfo_class_Qt_Widgets_QWidget___construct

#define arginfo_class_Qt_Widgets_QMainWindow_setCentralWidget arginfo_class_Qt_Widgets_QLayout_addWidget

#define arginfo_class_Qt_Widgets_QPushButton___construct arginfo_class_Qt_Widgets_QLineEdit___construct

#define arginfo_class_Qt_Widgets_QPushButton_setText arginfo_class_Qt_Widgets_QLabel_setText

#define arginfo_class_Qt_Widgets_QPushButton_text arginfo_class_Qt_Core_QObject_objectName

#define arginfo_class_Qt_Widgets_QPushButton_onClicked arginfo_class_Qt_Widgets_QLineEdit_onEditingFinished


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
ZEND_METHOD(Qt_Widgets_QApplication, __construct);
ZEND_METHOD(Qt_Widgets_QApplication, exec);
ZEND_METHOD(Qt_Widgets_QBoxLayout, __construct);
ZEND_METHOD(Qt_Widgets_QBoxLayout, addStretch);
ZEND_METHOD(Qt_Widgets_QBoxLayout, addSpacing);
ZEND_METHOD(Qt_Widgets_QBoxLayout, setDirection);
ZEND_METHOD(Qt_Widgets_QHBoxLayout, __construct);
ZEND_METHOD(Qt_Widgets_QVBoxLayout, __construct);
ZEND_METHOD(Qt_Widgets_QWidget, __construct);
ZEND_METHOD(Qt_Widgets_QWidget, setLayout);
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
ZEND_METHOD(Qt_Widgets_QPushButton, setText);
ZEND_METHOD(Qt_Widgets_QPushButton, text);
ZEND_METHOD(Qt_Widgets_QPushButton, onClicked);


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


static const zend_function_entry class_Qt_Widgets_QApplication_methods[] = {
	ZEND_ME(Qt_Widgets_QApplication, __construct, arginfo_class_Qt_Widgets_QApplication___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QApplication, exec, arginfo_class_Qt_Widgets_QApplication_exec, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QBoxLayout_methods[] = {
	ZEND_ME(Qt_Widgets_QBoxLayout, __construct, arginfo_class_Qt_Widgets_QBoxLayout___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QBoxLayout, addStretch, arginfo_class_Qt_Widgets_QBoxLayout_addStretch, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QBoxLayout, addSpacing, arginfo_class_Qt_Widgets_QBoxLayout_addSpacing, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QBoxLayout, setDirection, arginfo_class_Qt_Widgets_QBoxLayout_setDirection, ZEND_ACC_PUBLIC)
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
	ZEND_ME(Qt_Widgets_QWidget, setLayout, arginfo_class_Qt_Widgets_QWidget_setLayout, ZEND_ACC_PUBLIC)
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
	ZEND_ME(Qt_Widgets_QPushButton, setText, arginfo_class_Qt_Widgets_QPushButton_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QPushButton, text, arginfo_class_Qt_Widgets_QPushButton_text, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QPushButton, onClicked, arginfo_class_Qt_Widgets_QPushButton_onClicked, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_Qt_Core_QObject(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Core", "QObject", class_Qt_Core_QObject_methods);
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

static zend_class_entry *register_class_Qt_Widgets_QPushButton(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QPushButton", class_Qt_Widgets_QPushButton_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);

	return class_entry;
}

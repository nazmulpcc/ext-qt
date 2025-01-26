/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 08ee980e5299e07789d99200d432846068e63295 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QApplication___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QApplication_exec, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QWidget___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, windowFlags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_setWindowTitle, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QWidget_show, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QWidget_showFullScreen arginfo_class_Qt_Widgets_QWidget_show

#define arginfo_class_Qt_Widgets_QWidget_showMaximized arginfo_class_Qt_Widgets_QWidget_show

#define arginfo_class_Qt_Widgets_QWidget_showMinimized arginfo_class_Qt_Widgets_QWidget_show

#define arginfo_class_Qt_Widgets_QWidget_showNormal arginfo_class_Qt_Widgets_QWidget_show

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QLabel___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, windowFlags, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLabel_setText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QLabel_text, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QMainWindow___construct arginfo_class_Qt_Widgets_QWidget___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QMainWindow_setCentralWidget, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, Qt\\Widgets\\QWidget, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_Qt_Widgets_QPushButton___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, Qt\\Widgets\\QWidget, 1, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_Qt_Widgets_QPushButton_setText arginfo_class_Qt_Widgets_QLabel_setText

#define arginfo_class_Qt_Widgets_QPushButton_text arginfo_class_Qt_Widgets_QLabel_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_Qt_Widgets_QPushButton_onClicked, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, callback, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()


ZEND_METHOD(Qt_Widgets_QApplication, __construct);
ZEND_METHOD(Qt_Widgets_QApplication, exec);
ZEND_METHOD(Qt_Widgets_QWidget, __construct);
ZEND_METHOD(Qt_Widgets_QWidget, setWindowTitle);
ZEND_METHOD(Qt_Widgets_QWidget, show);
ZEND_METHOD(Qt_Widgets_QWidget, showFullScreen);
ZEND_METHOD(Qt_Widgets_QWidget, showMaximized);
ZEND_METHOD(Qt_Widgets_QWidget, showMinimized);
ZEND_METHOD(Qt_Widgets_QWidget, showNormal);
ZEND_METHOD(Qt_Widgets_QLabel, __construct);
ZEND_METHOD(Qt_Widgets_QLabel, setText);
ZEND_METHOD(Qt_Widgets_QLabel, text);
ZEND_METHOD(Qt_Widgets_QMainWindow, __construct);
ZEND_METHOD(Qt_Widgets_QMainWindow, setCentralWidget);
ZEND_METHOD(Qt_Widgets_QPushButton, __construct);
ZEND_METHOD(Qt_Widgets_QPushButton, setText);
ZEND_METHOD(Qt_Widgets_QPushButton, text);
ZEND_METHOD(Qt_Widgets_QPushButton, onClicked);


static const zend_function_entry class_Qt_Widgets_QApplication_methods[] = {
	ZEND_ME(Qt_Widgets_QApplication, __construct, arginfo_class_Qt_Widgets_QApplication___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QApplication, exec, arginfo_class_Qt_Widgets_QApplication_exec, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QWidget_methods[] = {
	ZEND_ME(Qt_Widgets_QWidget, __construct, arginfo_class_Qt_Widgets_QWidget___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, setWindowTitle, arginfo_class_Qt_Widgets_QWidget_setWindowTitle, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, show, arginfo_class_Qt_Widgets_QWidget_show, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showFullScreen, arginfo_class_Qt_Widgets_QWidget_showFullScreen, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showMaximized, arginfo_class_Qt_Widgets_QWidget_showMaximized, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showMinimized, arginfo_class_Qt_Widgets_QWidget_showMinimized, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QWidget, showNormal, arginfo_class_Qt_Widgets_QWidget_showNormal, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_Qt_Widgets_QLabel_methods[] = {
	ZEND_ME(Qt_Widgets_QLabel, __construct, arginfo_class_Qt_Widgets_QLabel___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, setText, arginfo_class_Qt_Widgets_QLabel_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(Qt_Widgets_QLabel, text, arginfo_class_Qt_Widgets_QLabel_text, ZEND_ACC_PUBLIC)
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

static zend_class_entry *register_class_Qt_Widgets_QApplication(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QApplication", class_Qt_Widgets_QApplication_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QWidget(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QWidget", class_Qt_Widgets_QWidget_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Widgets_QLabel(zend_class_entry *class_entry_Qt_Widgets_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "Qt\\Widgets", "QLabel", class_Qt_Widgets_QLabel_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Qt_Widgets_QWidget);

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

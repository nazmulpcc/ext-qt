extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtWidgets/QApplication>

ZEND_METHOD(Qt_Widgets_QApplication, __construct)
{
    ZEND_PARSE_PARAMETERS_NONE();
    auto *container = QT_Object_P(ZEND_THIS, QApplication);
    int argc = 0;
    char *argv[] = {(char *)"app"};
    container->native = new QApplication(argc, argv);
}

ZEND_METHOD(Qt_Widgets_QApplication, exec)
{
    ZEND_PARSE_PARAMETERS_NONE();
    RETURN_LONG(QApplication::exec());
}
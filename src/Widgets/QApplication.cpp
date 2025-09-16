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
    zend_long argc = 0;
    zval *argv_zv = NULL;

    ZEND_PARSE_PARAMETERS_START(2, 2)
    Z_PARAM_LONG(argc)
    Z_PARAM_ARRAY(argv_zv)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QApplication);

    char **argv = (char **)malloc(sizeof(char *) * (argc + 1));

    int i = 0;
    zval *val;
    ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(argv_zv), val)
    {
        if (Z_TYPE_P(val) == IS_STRING)
        {
            argv[i] = strdup(Z_STRVAL_P(val));
            i++;
            if (i >= argc)
                break;
        }
    }
    ZEND_HASH_FOREACH_END();

    argv[i] = NULL; // Qt requires null-terminated

    container->native = new QApplication(i, argv); // @todo: argv causes memory leak, need to fix
}

ZEND_METHOD(Qt_Widgets_QApplication, exec)
{
    ZEND_PARSE_PARAMETERS_NONE();
    RETURN_LONG(QApplication::exec());
}
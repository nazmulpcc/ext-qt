/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | https://www.php.net/license/3_01.txt                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Nazmul Alam<n@zmul.dev>                                      |
   +----------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_qt.h"
#include "qt_arginfo.h"

/* For compatibility with older PHP versions */
#ifndef ZEND_PARSE_PARAMETERS_NONE
#define ZEND_PARSE_PARAMETERS_NONE() \
	ZEND_PARSE_PARAMETERS_START(0, 0) \
	ZEND_PARSE_PARAMETERS_END()
#endif

PHP_FUNCTION(test1)
{
	ZEND_PARSE_PARAMETERS_NONE();

	php_printf("The extension %s is loaded and working!\r\n", "qt");
}

PHP_FUNCTION(test2)
{
	char *var = "World";
	size_t var_len = sizeof("World") - 1;
	zend_string *retval;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STRING(var, var_len)
	ZEND_PARSE_PARAMETERS_END();

	retval = strpprintf(0, "Hello %s", var);

	RETURN_STR(retval);
}

PHP_RINIT_FUNCTION(qt)
{
#if defined(ZTS) && defined(COMPILE_DL_QT)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	return SUCCESS;
}

PHP_MINFO_FUNCTION(qt)
{
	php_info_print_table_start();
	php_info_print_table_row(2, "qt support", "enabled");
	php_info_print_table_end();
}

zend_module_entry qt_module_entry = {
	STANDARD_MODULE_HEADER,
	"qt",					/* Extension name */
	ext_functions,					/* zend_function_entry */
	NULL,							/* PHP_MINIT - Module initialization */
	NULL,							/* PHP_MSHUTDOWN - Module shutdown */
	PHP_RINIT(qt),			/* PHP_RINIT - Request initialization */
	NULL,							/* PHP_RSHUTDOWN - Request shutdown */
	PHP_MINFO(qt),			/* PHP_MINFO - Module info */
	PHP_QT_VERSION,		/* Version */
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_QT
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(qt)
#endif

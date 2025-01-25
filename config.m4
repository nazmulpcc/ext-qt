dnl Otherwise use the '--enable-qt' configure option:
PHP_ARG_ENABLE([qt],
  [Whether to enable QT support],
  [AS_HELP_STRING([--enable-qt],
    [Enable QT support])],
  [no])

AS_VAR_IF([PHP_QT], [no],, [
  PHP_REQUIRE_CXX()
  PKG_CHECK_MODULES([QT], [Qt6Widgets >= 6])
  PHP_EVAL_INCLINE([$QT_CFLAGS])
  PHP_EVAL_LIBLINE([$QT_LIBS], [QT_SHARED_LIBADD])

  dnl Check for library and symbol presence.
  dnl LIBNAME=qt # you may want to change this
  dnl LIBSYMBOL=qt # you most likely want to change this
  dnl
  dnl If you need to check for a particular library function (e.g. a conditional
  dnl or version-dependent feature) and you are using pkg-config:
  dnl PHP_CHECK_LIBRARY([$LIBNAME], [$LIBSYMBOL],
  dnl   [AC_DEFINE([HAVE_QT_FEATURE], [1],
  dnl     [Define to 1 if qt has the 'FEATURE'.])],
  dnl   [AC_MSG_FAILURE([FEATURE not supported by your qt library.])],
  dnl   [$LIBFOO_LIBS])

  dnl Add linked libraries flags for shared extension to the generated Makefile.
  PHP_SUBST([QT_SHARED_LIBADD])

  dnl Define a preprocessor macro to indicate that this PHP extension can
  dnl be dynamically loaded as a shared module or is statically built into PHP.
  AC_DEFINE([HAVE_QT], [1],
    [Define to 1 if the PHP extension 'qt' is available.])

  dnl Configure extension sources and compilation flags.
  PHP_NEW_EXTENSION([qt],
    [qt.cpp],
    [$ext_shared],,
    [-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -std=c++17])
])

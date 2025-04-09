dnl Otherwise use the '--enable-qt' configure option:
PHP_ARG_ENABLE([qt],
  [Whether to enable QT support],
  [AS_HELP_STRING([--enable-qt],
    [Enable QT support])],
  [no])

AS_VAR_IF([PHP_QT], [no],, [
  PHP_REQUIRE_CXX()
  PKG_CHECK_MODULES([QT], [Qt6Widgets >= 6.7])
  PHP_EVAL_INCLINE([$QT_CFLAGS])
  PHP_EVAL_LIBLINE([$QT_LIBS], [QT_SHARED_LIBADD])

  LDFLAGS="$LDFLAGS $QT_LIBS"
  export LDFLAGS

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

  qt_source_files="qt.cpp \
    src/Core/QAbstractItemModel.cpp \
    src/Core/QAbstractListModel.cpp \
    src/Core/QAbstractTableModel.cpp \
    src/Core/QCalendar.cpp \
    src/Core/QDate.cpp \
    src/Core/QDateTime.cpp \
    src/Core/QModelIndex.cpp \
    src/Core/QObject.cpp \
    src/Core/QRect.cpp \
    src/Core/QSize.cpp \
    src/Core/QTime.cpp \
    src/Core/QTimeZone.cpp \
    src/Widgets/QApplication.cpp \
    src/Widgets/QAbstractButton.cpp \
    src/Widgets/QAbstractScrollArea.cpp \
    src/Widgets/QAbstractSpinBox.cpp \
    src/Widgets/QAbstractSlider.cpp \
    src/Widgets/QBoxLayout.cpp \
    src/Widgets/QCheckbox.cpp \
    src/Widgets/QComboBox.cpp \
    src/Widgets/QDateTimeEdit.cpp \
    src/Widgets/QDial.cpp \
    src/Widgets/QFrame.cpp \
    src/Widgets/QGroupBox.cpp \
    src/Widgets/QLabel.cpp \
    src/Widgets/QLineEdit.cpp \
    src/Widgets/QLayout.cpp \
    src/Widgets/QMainWindow.cpp \
    src/Widgets/QPushButton.cpp \
    src/Widgets/QRadioButton.cpp \
    src/Widgets/QScrollArea.cpp \
    src/Widgets/QScrollBar.cpp \
    src/Widgets/QSlider.cpp \
    src/Widgets/QSplitter.cpp \
    src/Widgets/QSpinBox.cpp \
    src/Widgets/QStackedWidget.cpp \
    src/Widgets/QTableView.cpp \
    src/Widgets/QTextEdit.cpp \
    src/Widgets/QWidget.cpp"

  PHP_NEW_EXTENSION([qt],
    $qt_source_files,
    [$ext_shared],,
    [-DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -std=c++17])
])

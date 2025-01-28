extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QThread>

ZEND_METHOD(Qt_Core_QThread, idealThreadCount)
{
    RETURN_LONG(QThread::idealThreadCount());
}
// ZEND_METHOD(Qt_Core_QThread, isMainThread)
// {
//     RETURN_BOOL(QThread::isMainThread());
// }
ZEND_METHOD(Qt_Core_QThread, msleep)
{
    zend_long msecs;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(msecs)
    ZEND_PARSE_PARAMETERS_END();

    QThread::msleep(msecs);
}
ZEND_METHOD(Qt_Core_QThread, sleep)
{
    zend_long secs;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(secs)
    ZEND_PARSE_PARAMETERS_END();

    QThread::sleep(secs);
}
ZEND_METHOD(Qt_Core_QThread, usleep)
{
    zend_long usecs;
    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(usecs)
    ZEND_PARSE_PARAMETERS_END();

    QThread::usleep(usecs);
}
ZEND_METHOD(Qt_Core_QThread, yieldCurrentThread)
{
    QThread::yieldCurrentThread();
}

ZEND_METHOD(Qt_Core_QThread, __construct)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_qobject)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QThread);
    container->native = new QThread;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QObject);
        container->native->setParent(parent_container->native);
    }
}

// QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QThread, QThread, isCurrentThread);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QThread, QThread, isFinished);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QThread, QThread, isInterruptionRequested);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QThread, QThread, isRunning);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QThread, QThread, loopLevel);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QThread, QThread, priority);
QT_METHOD_FORWARD(Qt_Core_QThread, QThread, requestInterruption);
QT_METHOD_FORWARD_INT_ENUM(Qt_Core_QThread, QThread, setPriority, QThread::Priority);
QT_METHOD_FORWARD_INT(Qt_Core_QThread, QThread, wait);
QT_METHOD_FORWARD_INT(Qt_Core_QThread, QThread, exit);
QT_METHOD_FORWARD(Qt_Core_QThread, QThread, quit);
QT_METHOD_FORWARD(Qt_Core_QThread, QThread, start);
QT_METHOD_FORWARD(Qt_Core_QThread, QThread, terminate);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QThread, QThread, onFinished, finished);
QT_METHOD_FORWARD_SIGNAL(Qt_Core_QThread, QThread, onStarted, started);
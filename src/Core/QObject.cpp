extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QObject>
#include <QtCore/QTimerEvent>
#include <QtCore/QDebug>

class PObject : public QObject
{
    void timerEvent(QTimerEvent *event) override
    {
        qDebug() << "Timer event:" << event->id();
    }
};

ZEND_METHOD(Qt_Core_QObject, __construct)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_qobject)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PObject);
    container->native = new PObject;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, PObject);
        container->native->setParent(parent_container->native);
    }
}
QT_METHOD_FORWARD_BOOL(Qt_Core_QObject, PObject, blockSignals);
QT_METHOD_FORWARD(Qt_Core_QObject, PObject, dumpObjectInfo);
QT_METHOD_FORWARD(Qt_Core_QObject, PObject, dumpObjectTree);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, PObject, isQuickItemType);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, PObject, isWidgetType);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, PObject, isWindowType);
QT_METHOD_FORWARD_INT(Qt_Core_QObject, PObject, killTimer);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, PObject, objectName);
QT_METHOD_FORWARD_STRING(Qt_Core_QObject, PObject, setObjectName);

ZEND_METHOD(Qt_Core_QObject, setParent)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent_zval, ce_qobject)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PObject);
    container->native = new PObject;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, PObject);
        container->native->setParent(parent_container->native);
    }
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, PObject, signalsBlocked);

ZEND_METHOD(Qt_Core_QObject, startTimer)
{
    zend_long interval, timerType;
    bool timerTypeProvided = false;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_LONG(interval)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PObject);
    qDebug() << "Timer ID:" << container->native->startTimer(interval);
    RETURN_LONG(0);
}
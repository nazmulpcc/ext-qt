extern "C"
{
#include "php.h"
#include "ext/standard/info.h"
#include <zend_interfaces.h>
}
#include "php_qt.h"
#include "qt_arginfo.h"

#include <QtCore/QObject>
#include <QtCore/QTimerEvent>

class TimerObject : public QObject
{
private:
    std::shared_ptr<qt_callback_t> cb;

public:
    explicit TimerObject(std::shared_ptr<qt_callback_t> cb, QObject *parent = nullptr) : QObject(parent)
    {
        this->cb = cb;
        // @todo: delete cb when this object is destroyed
    }

protected:
    void timerEvent(QTimerEvent *event) override
    {
        if (QThread::currentThread() != QCoreApplication::instance()->thread())
        {
            QMetaObject::invokeMethod(this, [cb = this->cb, event]()
                                      {
                zval retval, params[1];
                cb->fci.retval = &retval;
                ZVAL_LONG(&params[0], event->timerId());
                cb->fci.params = params;
                cb->fci.param_count = 1;
                zend_call_function(&cb->fci, &cb->fci_cache);
                zval_ptr_dtor(&retval); }, Qt::QueuedConnection);
        }
        else
        {
            zval retval, params[1];
            cb->fci.retval = &retval;
            ZVAL_LONG(&params[0], event->timerId());
            cb->fci.params = params;
            cb->fci.param_count = 1;
            zend_call_function(&cb->fci, &cb->fci_cache);
            zval_ptr_dtor(&retval);
        }
    }
};

class PhpQObject final : public QObject
{
public:
    zend_object *std = nullptr;
    explicit PhpQObject(QObject *parent = nullptr) : QObject(parent) {}

protected:
    void timerEvent(QTimerEvent *event) override
    {
        zval retval, param;
        ZVAL_LONG(&param, event->timerId());
        zend_call_method_with_1_params(this->std, this->std->ce, nullptr, "timerEvent", nullptr, &param);
        zval_ptr_dtor(&param);
    }
};

ZEND_METHOD(Qt_Core_QObject, __construct)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS_OR_NULL(parent_zval, ce_qobject)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQObject);
    container->native = new PhpQObject;
    container->native->std = &container->std;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QObject);
        container->native->setParent(parent_container->native);
    }
}
QT_METHOD_FORWARD_BOOL(Qt_Core_QObject, QObject, blockSignals);
QT_METHOD_FORWARD(Qt_Core_QObject, QObject, dumpObjectInfo);
QT_METHOD_FORWARD(Qt_Core_QObject, QObject, dumpObjectTree);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, QObject, isQuickItemType);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, QObject, isWidgetType);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, QObject, isWindowType);
QT_METHOD_FORWARD_INT(Qt_Core_QObject, QObject, killTimer);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, QObject, objectName);
QT_METHOD_FORWARD_STRING(Qt_Core_QObject, QObject, setObjectName)

ZEND_METHOD(Qt_Core_QObject, setParent)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(0, 1)
    Z_PARAM_OPTIONAL
    Z_PARAM_OBJECT_OF_CLASS(parent_zval, ce_qobject)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, QObject);
    container->native = new QObject;
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, QObject);
        container->native->setParent(parent_container->native);
    }
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, QObject, signalsBlocked);

ZEND_METHOD(Qt_Core_QObject, startTimer)
{
    zend_long interval, timerType;
    zval *callback;

    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_LONG(interval)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(timerType)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQObject);
    // auto cb = std::make_shared<qt_callback_t>(*qt_callback_create(container->native, callback));
    // auto timer = new TimerObject(cb, container->native);

    RETURN_LONG(container->native->startTimer(interval, static_cast<Qt::TimerType>(timerType)));
}

ZEND_METHOD(Qt_Core_QObject, timerEvent)
{
    // users are meant to override this method
}
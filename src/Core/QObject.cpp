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

class PhpQObject final : public QObject
{
public:
    zend_object *std = nullptr;
    explicit PhpQObject(QObject *parent = nullptr) : QObject(parent) {}

protected:
    void timerEvent(QTimerEvent *event) override
    {
        zval param;
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
        auto *parent_container = QT_Object_P(parent_zval, PhpQObject);
        container->native->setParent(parent_container->native);
    }
}
QT_METHOD_FORWARD_BOOL(Qt_Core_QObject, PhpQObject, blockSignals);
QT_METHOD_FORWARD(Qt_Core_QObject, PhpQObject, dumpObjectInfo);
QT_METHOD_FORWARD(Qt_Core_QObject, PhpQObject, dumpObjectTree);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, PhpQObject, isQuickItemType);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, PhpQObject, isWidgetType);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, PhpQObject, isWindowType);
QT_METHOD_FORWARD_INT(Qt_Core_QObject, PhpQObject, killTimer);
QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, PhpQObject, objectName);
QT_METHOD_FORWARD_STRING(Qt_Core_QObject, PhpQObject, setObjectName)

ZEND_METHOD(Qt_Core_QObject, setParent)
{
    zval *parent_zval = nullptr;

    ZEND_PARSE_PARAMETERS_START(1, 1)
    Z_PARAM_OBJECT_OF_CLASS(parent_zval, ce_qobject)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQObject);
    if (parent_zval)
    {
        auto *parent_container = QT_Object_P(parent_zval, PhpQObject);
        container->native->setParent(parent_container->native);
    }
}

QT_METHOD_FORWARD_RETURN_ZVAL(Qt_Core_QObject, PhpQObject, signalsBlocked);

ZEND_METHOD(Qt_Core_QObject, startTimer)
{
    zend_long interval, timerType = 1;

    ZEND_PARSE_PARAMETERS_START(1, 2)
    Z_PARAM_LONG(interval)
    Z_PARAM_OPTIONAL
    Z_PARAM_LONG(timerType)
    ZEND_PARSE_PARAMETERS_END();

    auto *container = QT_Object_P(ZEND_THIS, PhpQObject);

    RETURN_LONG(container->native->startTimer(interval, static_cast<Qt::TimerType>(timerType)));
}

ZEND_METHOD(Qt_Core_QObject, timerEvent)
{
    // users are meant to override this method
}
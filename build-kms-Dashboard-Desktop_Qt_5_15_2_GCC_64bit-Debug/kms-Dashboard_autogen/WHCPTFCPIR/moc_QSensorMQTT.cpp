/****************************************************************************
** Meta object code from reading C++ file 'QSensorMQTT.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../kms-Dashboard/hdr/Handler/QSensorMQTT.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSensorMQTT.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSensorMQTT_t {
    QByteArrayData data[21];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSensorMQTT_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSensorMQTT_t qt_meta_stringdata_QSensorMQTT = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QSensorMQTT"
QT_MOC_LITERAL(1, 12, 13), // "MQTT_Received"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "msg"
QT_MOC_LITERAL(4, 31, 18), // "mqttMessageChanged"
QT_MOC_LITERAL(5, 50, 24), // "currentSensorNodeChanged"
QT_MOC_LITERAL(6, 75, 10), // "SensorNode"
QT_MOC_LITERAL(7, 86, 4), // "node"
QT_MOC_LITERAL(8, 91, 16), // "onMQTT_Connected"
QT_MOC_LITERAL(9, 108, 19), // "onMQTT_disconnected"
QT_MOC_LITERAL(10, 128, 15), // "onMQTT_Received"
QT_MOC_LITERAL(11, 144, 7), // "message"
QT_MOC_LITERAL(12, 152, 14), // "QMqttTopicName"
QT_MOC_LITERAL(13, 167, 5), // "topic"
QT_MOC_LITERAL(14, 173, 12), // "MQTT_Publish"
QT_MOC_LITERAL(15, 186, 12), // "MQTT_Subcrib"
QT_MOC_LITERAL(16, 199, 14), // "setMqttMessage"
QT_MOC_LITERAL(17, 214, 8), // "QString&"
QT_MOC_LITERAL(18, 223, 20), // "setCurrentSensorNode"
QT_MOC_LITERAL(19, 244, 10), // "mqttMesage"
QT_MOC_LITERAL(20, 255, 17) // "currentSensorNode"

    },
    "QSensorMQTT\0MQTT_Received\0\0msg\0"
    "mqttMessageChanged\0currentSensorNodeChanged\0"
    "SensorNode\0node\0onMQTT_Connected\0"
    "onMQTT_disconnected\0onMQTT_Received\0"
    "message\0QMqttTopicName\0topic\0MQTT_Publish\0"
    "MQTT_Subcrib\0setMqttMessage\0QString&\0"
    "setCurrentSensorNode\0mqttMesage\0"
    "currentSensorNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSensorMQTT[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   73,    2, 0x0a /* Public */,
       9,    0,   74,    2, 0x0a /* Public */,
      10,    2,   75,    2, 0x0a /* Public */,
      14,    2,   80,    2, 0x0a /* Public */,
      15,    1,   85,    2, 0x0a /* Public */,
      16,    1,   88,    2, 0x0a /* Public */,
      18,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,   11,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 17,    3,
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
      19, QMetaType::QString, 0x00495003,
      20, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

void QSensorMQTT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSensorMQTT *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MQTT_Received((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->mqttMessageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->currentSensorNodeChanged((*reinterpret_cast< SensorNode(*)>(_a[1]))); break;
        case 3: _t->onMQTT_Connected(); break;
        case 4: _t->onMQTT_disconnected(); break;
        case 5: _t->onMQTT_Received((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QMqttTopicName(*)>(_a[2]))); break;
        case 6: _t->MQTT_Publish((*reinterpret_cast< SensorNode(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->MQTT_Subcrib((*reinterpret_cast< SensorNode(*)>(_a[1]))); break;
        case 8: _t->setMqttMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setCurrentSensorNode((*reinterpret_cast< SensorNode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMqttTopicName >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSensorMQTT::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensorMQTT::MQTT_Received)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSensorMQTT::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensorMQTT::mqttMessageChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QSensorMQTT::*)(SensorNode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSensorMQTT::currentSensorNodeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QSensorMQTT *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->mqttMessage(); break;
        case 1: *reinterpret_cast< SensorNode*>(_v) = _t->currentSensorNode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QSensorMQTT *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMqttMessage(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCurrentSensorNode(*reinterpret_cast< SensorNode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QSensorMQTT::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QSensorMQTT.data,
    qt_meta_data_QSensorMQTT,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSensorMQTT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSensorMQTT::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSensorMQTT.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSensorMQTT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSensorMQTT::MQTT_Received(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSensorMQTT::mqttMessageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSensorMQTT::currentSensorNodeChanged(SensorNode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

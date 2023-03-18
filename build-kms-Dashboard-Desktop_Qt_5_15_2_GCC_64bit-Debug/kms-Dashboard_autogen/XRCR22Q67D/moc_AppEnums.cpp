/****************************************************************************
** Meta object code from reading C++ file 'AppEnums.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../kms-Dashboard/hdr/Comon/AppEnums.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppEnums.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppEnums_t {
    QByteArrayData data[14];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppEnums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppEnums_t qt_meta_stringdata_AppEnums = {
    {
QT_MOC_LITERAL(0, 0, 8), // "AppEnums"
QT_MOC_LITERAL(1, 9, 10), // "E_SCREEN_t"
QT_MOC_LITERAL(2, 20, 12), // "SearchScreen"
QT_MOC_LITERAL(3, 33, 10), // "HomeScreen"
QT_MOC_LITERAL(4, 44, 13), // "ControlScreen"
QT_MOC_LITERAL(5, 58, 9), // "MapScreen"
QT_MOC_LITERAL(6, 68, 10), // "UserScreen"
QT_MOC_LITERAL(7, 79, 9), // "E_EVENT_t"
QT_MOC_LITERAL(8, 89, 15), // "UserClickSearch"
QT_MOC_LITERAL(9, 105, 13), // "UserClickHome"
QT_MOC_LITERAL(10, 119, 16), // "UserClickControl"
QT_MOC_LITERAL(11, 136, 12), // "UserClickMap"
QT_MOC_LITERAL(12, 149, 16), // "UserClickAccount"
QT_MOC_LITERAL(13, 166, 12) // "LoginRequest"

    },
    "AppEnums\0E_SCREEN_t\0SearchScreen\0"
    "HomeScreen\0ControlScreen\0MapScreen\0"
    "UserScreen\0E_EVENT_t\0UserClickSearch\0"
    "UserClickHome\0UserClickControl\0"
    "UserClickMap\0UserClickAccount\0"
    "LoginRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppEnums[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   24,
       7,    7, 0x0,    6,   34,

 // enum data: key, value
       2, uint(AppEnums::SearchScreen),
       3, uint(AppEnums::HomeScreen),
       4, uint(AppEnums::ControlScreen),
       5, uint(AppEnums::MapScreen),
       6, uint(AppEnums::UserScreen),
       8, uint(AppEnums::UserClickSearch),
       9, uint(AppEnums::UserClickHome),
      10, uint(AppEnums::UserClickControl),
      11, uint(AppEnums::UserClickMap),
      12, uint(AppEnums::UserClickAccount),
      13, uint(AppEnums::LoginRequest),

       0        // eod
};

void AppEnums::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AppEnums::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AppEnums.data,
    qt_meta_data_AppEnums,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppEnums::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppEnums::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppEnums.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AppEnums::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

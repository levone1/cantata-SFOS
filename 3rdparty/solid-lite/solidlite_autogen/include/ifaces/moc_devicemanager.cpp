/****************************************************************************
** Meta object code from reading C++ file 'devicemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ifaces/devicemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__Ifaces__DeviceManager_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Ifaces__DeviceManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Ifaces__DeviceManager_t qt_meta_stringdata_Solid__Ifaces__DeviceManager = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Solid::Ifaces::DeviceManager"
QT_MOC_LITERAL(1, 29, 11), // "deviceAdded"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 3), // "udi"
QT_MOC_LITERAL(4, 46, 13) // "deviceRemoved"

    },
    "Solid::Ifaces::DeviceManager\0deviceAdded\0"
    "\0udi\0deviceRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Ifaces__DeviceManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void Solid::Ifaces::DeviceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeviceManager *_t = static_cast<DeviceManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->deviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DeviceManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceManager::deviceAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeviceManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceManager::deviceRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Solid::Ifaces::DeviceManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Solid__Ifaces__DeviceManager.data,
      qt_meta_data_Solid__Ifaces__DeviceManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::Ifaces::DeviceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Ifaces::DeviceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Ifaces__DeviceManager.stringdata0))
        return static_cast<void*>(const_cast< DeviceManager*>(this));
    return QObject::qt_metacast(_clname);
}

int Solid::Ifaces::DeviceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Solid::Ifaces::DeviceManager::deviceAdded(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Ifaces::DeviceManager::deviceRemoved(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'udisksdevicebackend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../backends/udisks2/udisksdevicebackend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udisksdevicebackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__Backends__UDisks2__DeviceBackend_t {
    QByteArrayData data[17];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UDisks2__DeviceBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UDisks2__DeviceBackend_t qt_meta_stringdata_Solid__Backends__UDisks2__DeviceBackend = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Solid::Backends::UDisks2::Dev..."
QT_MOC_LITERAL(1, 40, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(4, 75, 9), // "changeMap"
QT_MOC_LITERAL(5, 85, 7), // "changed"
QT_MOC_LITERAL(6, 93, 19), // "slotInterfacesAdded"
QT_MOC_LITERAL(7, 113, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(8, 129, 11), // "object_path"
QT_MOC_LITERAL(9, 141, 14), // "QVariantMapMap"
QT_MOC_LITERAL(10, 156, 25), // "interfaces_and_properties"
QT_MOC_LITERAL(11, 182, 21), // "slotInterfacesRemoved"
QT_MOC_LITERAL(12, 204, 10), // "interfaces"
QT_MOC_LITERAL(13, 215, 21), // "slotPropertiesChanged"
QT_MOC_LITERAL(14, 237, 9), // "ifaceName"
QT_MOC_LITERAL(15, 247, 12), // "changedProps"
QT_MOC_LITERAL(16, 260, 16) // "invalidatedProps"

    },
    "Solid::Backends::UDisks2::DeviceBackend\0"
    "propertyChanged\0\0QMap<QString,int>\0"
    "changeMap\0changed\0slotInterfacesAdded\0"
    "QDBusObjectPath\0object_path\0QVariantMapMap\0"
    "interfaces_and_properties\0"
    "slotInterfacesRemoved\0interfaces\0"
    "slotPropertiesChanged\0ifaceName\0"
    "changedProps\0invalidatedProps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UDisks2__DeviceBackend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   43,    2, 0x08 /* Private */,
      11,    2,   48,    2, 0x08 /* Private */,
      13,    3,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QStringList,    8,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,   14,   15,   16,

       0        // eod
};

void Solid::Backends::UDisks2::DeviceBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeviceBackend *_t = static_cast<DeviceBackend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QMap<QString,int>(*)>(_a[1]))); break;
        case 1: _t->changed(); break;
        case 2: _t->slotInterfacesAdded((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QVariantMapMap(*)>(_a[2]))); break;
        case 3: _t->slotInterfacesRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 4: _t->slotPropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVariantMapMap >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DeviceBackend::*_t)(const QMap<QString,int> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceBackend::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DeviceBackend::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DeviceBackend::changed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Solid::Backends::UDisks2::DeviceBackend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Solid__Backends__UDisks2__DeviceBackend.data,
      qt_meta_data_Solid__Backends__UDisks2__DeviceBackend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::Backends::UDisks2::DeviceBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UDisks2::DeviceBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UDisks2__DeviceBackend.stringdata0))
        return static_cast<void*>(const_cast< DeviceBackend*>(this));
    return QObject::qt_metacast(_clname);
}

int Solid::Backends::UDisks2::DeviceBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Solid::Backends::UDisks2::DeviceBackend::propertyChanged(const QMap<QString,int> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::UDisks2::DeviceBackend::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

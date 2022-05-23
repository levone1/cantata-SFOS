/****************************************************************************
** Meta object code from reading C++ file 'udisksdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../backends/udisks2/udisksdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udisksdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__Backends__UDisks2__Device_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UDisks2__Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UDisks2__Device_t qt_meta_stringdata_Solid__Backends__UDisks2__Device = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Solid::Backends::UDisks2::Device"
QT_MOC_LITERAL(1, 33, 7), // "changed"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 15), // "propertyChanged"
QT_MOC_LITERAL(4, 58, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(5, 76, 7) // "changes"

    },
    "Solid::Backends::UDisks2::Device\0"
    "changed\0\0propertyChanged\0QMap<QString,int>\0"
    "changes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UDisks2__Device[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void Solid::Backends::UDisks2::Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Device *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->propertyChanged((*reinterpret_cast< const QMap<QString,int>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Device::*_t)(const QMap<QString,int> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::propertyChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Solid::Backends::UDisks2::Device::staticMetaObject = {
    { &Solid::Ifaces::Device::staticMetaObject, qt_meta_stringdata_Solid__Backends__UDisks2__Device.data,
      qt_meta_data_Solid__Backends__UDisks2__Device,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::Backends::UDisks2::Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UDisks2::Device::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UDisks2__Device.stringdata0))
        return static_cast<void*>(const_cast< Device*>(this));
    return Solid::Ifaces::Device::qt_metacast(_clname);
}

int Solid::Backends::UDisks2::Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Solid::Ifaces::Device::qt_metacall(_c, _id, _a);
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
void Solid::Backends::UDisks2::Device::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Solid::Backends::UDisks2::Device::propertyChanged(const QMap<QString,int> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'haldevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../backends/hal/haldevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'haldevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__Backends__Hal__HalDevice_t {
    QByteArrayData data[12];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Hal__HalDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Hal__HalDevice_t qt_meta_stringdata_Solid__Backends__Hal__HalDevice = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Solid::Backends::Hal::HalDevice"
QT_MOC_LITERAL(1, 32, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(4, 67, 7), // "changes"
QT_MOC_LITERAL(5, 75, 15), // "conditionRaised"
QT_MOC_LITERAL(6, 91, 9), // "condition"
QT_MOC_LITERAL(7, 101, 6), // "reason"
QT_MOC_LITERAL(8, 108, 20), // "slotPropertyModified"
QT_MOC_LITERAL(9, 129, 5), // "count"
QT_MOC_LITERAL(10, 135, 24), // "QList<ChangeDescription>"
QT_MOC_LITERAL(11, 160, 13) // "slotCondition"

    },
    "Solid::Backends::Hal::HalDevice\0"
    "propertyChanged\0\0QMap<QString,int>\0"
    "changes\0conditionRaised\0condition\0"
    "reason\0slotPropertyModified\0count\0"
    "QList<ChangeDescription>\0slotCondition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Hal__HalDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    2,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   42,    2, 0x08 /* Private */,
      11,    2,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 10,    9,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

       0        // eod
};

void Solid::Backends::Hal::HalDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HalDevice *_t = static_cast<HalDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QMap<QString,int>(*)>(_a[1]))); break;
        case 1: _t->conditionRaised((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->slotPropertyModified((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<ChangeDescription>(*)>(_a[2]))); break;
        case 3: _t->slotCondition((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HalDevice::*_t)(const QMap<QString,int> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HalDevice::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HalDevice::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HalDevice::conditionRaised)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Solid::Backends::Hal::HalDevice::staticMetaObject = {
    { &Solid::Ifaces::Device::staticMetaObject, qt_meta_stringdata_Solid__Backends__Hal__HalDevice.data,
      qt_meta_data_Solid__Backends__Hal__HalDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::Backends::Hal::HalDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Hal::HalDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Hal__HalDevice.stringdata0))
        return static_cast<void*>(const_cast< HalDevice*>(this));
    return Solid::Ifaces::Device::qt_metacast(_clname);
}

int Solid::Backends::Hal::HalDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Solid::Ifaces::Device::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Solid::Backends::Hal::HalDevice::propertyChanged(const QMap<QString,int> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::Hal::HalDevice::conditionRaised(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

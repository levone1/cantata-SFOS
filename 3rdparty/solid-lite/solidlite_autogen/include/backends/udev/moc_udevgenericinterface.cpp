/****************************************************************************
** Meta object code from reading C++ file 'udevgenericinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../backends/udev/udevgenericinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udevgenericinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__Backends__UDev__GenericInterface_t {
    QByteArrayData data[8];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UDev__GenericInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UDev__GenericInterface_t qt_meta_stringdata_Solid__Backends__UDev__GenericInterface = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Solid::Backends::UDev::Generi..."
QT_MOC_LITERAL(1, 40, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 17), // "QMap<QString,int>"
QT_MOC_LITERAL(4, 75, 7), // "changes"
QT_MOC_LITERAL(5, 83, 15), // "conditionRaised"
QT_MOC_LITERAL(6, 99, 9), // "condition"
QT_MOC_LITERAL(7, 109, 6) // "reason"

    },
    "Solid::Backends::UDev::GenericInterface\0"
    "propertyChanged\0\0QMap<QString,int>\0"
    "changes\0conditionRaised\0condition\0"
    "reason"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UDev__GenericInterface[] = {

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
       5,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

       0        // eod
};

void Solid::Backends::UDev::GenericInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GenericInterface *_t = static_cast<GenericInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< const QMap<QString,int>(*)>(_a[1]))); break;
        case 1: _t->conditionRaised((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GenericInterface::*_t)(const QMap<QString,int> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GenericInterface::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GenericInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GenericInterface::conditionRaised)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Solid::Backends::UDev::GenericInterface::staticMetaObject = {
    { &DeviceInterface::staticMetaObject, qt_meta_stringdata_Solid__Backends__UDev__GenericInterface.data,
      qt_meta_data_Solid__Backends__UDev__GenericInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::Backends::UDev::GenericInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UDev::GenericInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UDev__GenericInterface.stringdata0))
        return static_cast<void*>(const_cast< GenericInterface*>(this));
    if (!strcmp(_clname, "Solid::Ifaces::GenericInterface"))
        return static_cast< Solid::Ifaces::GenericInterface*>(const_cast< GenericInterface*>(this));
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.GenericInterface/0.1"))
        return static_cast< Solid::Ifaces::GenericInterface*>(const_cast< GenericInterface*>(this));
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::Backends::UDev::GenericInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
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
void Solid::Backends::UDev::GenericInterface::propertyChanged(const QMap<QString,int> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::UDev::GenericInterface::conditionRaised(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'haldeviceinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../backends/hal/haldeviceinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'haldeviceinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__Backends__Hal__DeviceInterface_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Hal__DeviceInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Hal__DeviceInterface_t qt_meta_stringdata_Solid__Backends__Hal__DeviceInterface = {
    {
QT_MOC_LITERAL(0, 0, 37) // "Solid::Backends::Hal::DeviceI..."

    },
    "Solid::Backends::Hal::DeviceInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Hal__DeviceInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Solid::Backends::Hal::DeviceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Solid::Backends::Hal::DeviceInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Solid__Backends__Hal__DeviceInterface.data,
      qt_meta_data_Solid__Backends__Hal__DeviceInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::Backends::Hal::DeviceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Hal::DeviceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Hal__DeviceInterface.stringdata0))
        return static_cast<void*>(const_cast< DeviceInterface*>(this));
    if (!strcmp(_clname, "Solid::Ifaces::DeviceInterface"))
        return static_cast< Solid::Ifaces::DeviceInterface*>(const_cast< DeviceInterface*>(this));
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.DeviceInterface/0.1"))
        return static_cast< Solid::Ifaces::DeviceInterface*>(const_cast< DeviceInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int Solid::Backends::Hal::DeviceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

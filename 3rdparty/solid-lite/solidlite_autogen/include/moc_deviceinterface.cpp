/****************************************************************************
** Meta object code from reading C++ file 'deviceinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../deviceinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__DeviceInterface_t {
    QByteArrayData data[12];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__DeviceInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__DeviceInterface_t qt_meta_stringdata_Solid__DeviceInterface = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Solid::DeviceInterface"
QT_MOC_LITERAL(1, 23, 4), // "Type"
QT_MOC_LITERAL(2, 28, 7), // "Unknown"
QT_MOC_LITERAL(3, 36, 16), // "GenericInterface"
QT_MOC_LITERAL(4, 53, 5), // "Block"
QT_MOC_LITERAL(5, 59, 13), // "StorageAccess"
QT_MOC_LITERAL(6, 73, 12), // "StorageDrive"
QT_MOC_LITERAL(7, 86, 12), // "OpticalDrive"
QT_MOC_LITERAL(8, 99, 13), // "StorageVolume"
QT_MOC_LITERAL(9, 113, 11), // "OpticalDisc"
QT_MOC_LITERAL(10, 125, 19), // "PortableMediaPlayer"
QT_MOC_LITERAL(11, 145, 4) // "Last"

    },
    "Solid::DeviceInterface\0Type\0Unknown\0"
    "GenericInterface\0Block\0StorageAccess\0"
    "StorageDrive\0OpticalDrive\0StorageVolume\0"
    "OpticalDisc\0PortableMediaPlayer\0Last"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__DeviceInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,   10,   18,

 // enum data: key, value
       2, uint(Solid::DeviceInterface::Unknown),
       3, uint(Solid::DeviceInterface::GenericInterface),
       4, uint(Solid::DeviceInterface::Block),
       5, uint(Solid::DeviceInterface::StorageAccess),
       6, uint(Solid::DeviceInterface::StorageDrive),
       7, uint(Solid::DeviceInterface::OpticalDrive),
       8, uint(Solid::DeviceInterface::StorageVolume),
       9, uint(Solid::DeviceInterface::OpticalDisc),
      10, uint(Solid::DeviceInterface::PortableMediaPlayer),
      11, uint(Solid::DeviceInterface::Last),

       0        // eod
};

void Solid::DeviceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Solid::DeviceInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Solid__DeviceInterface.data,
      qt_meta_data_Solid__DeviceInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::DeviceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::DeviceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__DeviceInterface.stringdata0))
        return static_cast<void*>(const_cast< DeviceInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int Solid::DeviceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

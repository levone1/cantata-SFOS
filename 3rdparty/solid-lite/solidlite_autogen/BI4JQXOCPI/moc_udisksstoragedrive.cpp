/****************************************************************************
** Meta object code from reading C++ file 'udisksstoragedrive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../backends/udisks2/udisksstoragedrive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udisksstoragedrive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__Backends__UDisks2__StorageDrive_t {
    QByteArrayData data[1];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UDisks2__StorageDrive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UDisks2__StorageDrive_t qt_meta_stringdata_Solid__Backends__UDisks2__StorageDrive = {
    {
QT_MOC_LITERAL(0, 0, 38) // "Solid::Backends::UDisks2::Sto..."

    },
    "Solid::Backends::UDisks2::StorageDrive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UDisks2__StorageDrive[] = {

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

void Solid::Backends::UDisks2::StorageDrive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Solid::Backends::UDisks2::StorageDrive::staticMetaObject = {
    { &Block::staticMetaObject, qt_meta_stringdata_Solid__Backends__UDisks2__StorageDrive.data,
      qt_meta_data_Solid__Backends__UDisks2__StorageDrive,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::Backends::UDisks2::StorageDrive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UDisks2::StorageDrive::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UDisks2__StorageDrive.stringdata0))
        return static_cast<void*>(const_cast< StorageDrive*>(this));
    if (!strcmp(_clname, "Solid::Ifaces::StorageDrive"))
        return static_cast< Solid::Ifaces::StorageDrive*>(const_cast< StorageDrive*>(this));
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.StorageDrive/0.1"))
        return static_cast< Solid::Ifaces::StorageDrive*>(const_cast< StorageDrive*>(this));
    return Block::qt_metacast(_clname);
}

int Solid::Backends::UDisks2::StorageDrive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Block::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

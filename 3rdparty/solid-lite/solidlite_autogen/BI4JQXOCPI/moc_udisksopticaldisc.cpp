/****************************************************************************
** Meta object code from reading C++ file 'udisksopticaldisc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../backends/udisks2/udisksopticaldisc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udisksopticaldisc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDisc_t {
    QByteArrayData data[6];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDisc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDisc_t qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDisc = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Solid::Backends::UDisks2::Opt..."
QT_MOC_LITERAL(1, 38, 26), // "slotDrivePropertiesChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 9), // "ifaceName"
QT_MOC_LITERAL(4, 76, 12), // "changedProps"
QT_MOC_LITERAL(5, 89, 16) // "invalidatedProps"

    },
    "Solid::Backends::UDisks2::OpticalDisc\0"
    "slotDrivePropertiesChanged\0\0ifaceName\0"
    "changedProps\0invalidatedProps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__UDisks2__OpticalDisc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap, QMetaType::QStringList,    3,    4,    5,

       0        // eod
};

void Solid::Backends::UDisks2::OpticalDisc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpticalDisc *_t = static_cast<OpticalDisc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotDrivePropertiesChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject Solid::Backends::UDisks2::OpticalDisc::staticMetaObject = {
    { &StorageVolume::staticMetaObject, qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDisc.data,
      qt_meta_data_Solid__Backends__UDisks2__OpticalDisc,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::Backends::UDisks2::OpticalDisc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::UDisks2::OpticalDisc::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__UDisks2__OpticalDisc.stringdata0))
        return static_cast<void*>(const_cast< OpticalDisc*>(this));
    if (!strcmp(_clname, "Solid::Ifaces::OpticalDisc"))
        return static_cast< Solid::Ifaces::OpticalDisc*>(const_cast< OpticalDisc*>(this));
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.OpticalDisc/0.1"))
        return static_cast< Solid::Ifaces::OpticalDisc*>(const_cast< OpticalDisc*>(this));
    return StorageVolume::qt_metacast(_clname);
}

int Solid::Backends::UDisks2::OpticalDisc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StorageVolume::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../backends/udisks2/dbus/manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OrgFreedesktopDBusObjectManagerInterface_t {
    QByteArrayData data[11];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgFreedesktopDBusObjectManagerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgFreedesktopDBusObjectManagerInterface_t qt_meta_stringdata_OrgFreedesktopDBusObjectManagerInterface = {
    {
QT_MOC_LITERAL(0, 0, 40), // "OrgFreedesktopDBusObjectManag..."
QT_MOC_LITERAL(1, 41, 15), // "InterfacesAdded"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(4, 74, 11), // "object_path"
QT_MOC_LITERAL(5, 86, 14), // "QVariantMapMap"
QT_MOC_LITERAL(6, 101, 25), // "interfaces_and_properties"
QT_MOC_LITERAL(7, 127, 17), // "InterfacesRemoved"
QT_MOC_LITERAL(8, 145, 10), // "interfaces"
QT_MOC_LITERAL(9, 156, 17), // "GetManagedObjects"
QT_MOC_LITERAL(10, 174, 36) // "QDBusPendingReply<DBUSManager..."

    },
    "OrgFreedesktopDBusObjectManagerInterface\0"
    "InterfacesAdded\0\0QDBusObjectPath\0"
    "object_path\0QVariantMapMap\0"
    "interfaces_and_properties\0InterfacesRemoved\0"
    "interfaces\0GetManagedObjects\0"
    "QDBusPendingReply<DBUSManagerStruct>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgFreedesktopDBusObjectManagerInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       7,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    4,    8,

 // slots: parameters
    0x80000000 | 10,

       0        // eod
};

void OrgFreedesktopDBusObjectManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrgFreedesktopDBusObjectManagerInterface *_t = static_cast<OrgFreedesktopDBusObjectManagerInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->InterfacesAdded((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QVariantMapMap(*)>(_a[2]))); break;
        case 1: _t->InterfacesRemoved((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 2: { QDBusPendingReply<DBUSManagerStruct> _r = _t->GetManagedObjects();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<DBUSManagerStruct>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVariantMapMap >(); break;
            }
            break;
        case 1:
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
            typedef void (OrgFreedesktopDBusObjectManagerInterface::*_t)(const QDBusObjectPath & , const QVariantMapMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OrgFreedesktopDBusObjectManagerInterface::InterfacesAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OrgFreedesktopDBusObjectManagerInterface::*_t)(const QDBusObjectPath & , const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OrgFreedesktopDBusObjectManagerInterface::InterfacesRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject OrgFreedesktopDBusObjectManagerInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgFreedesktopDBusObjectManagerInterface.data,
      qt_meta_data_OrgFreedesktopDBusObjectManagerInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OrgFreedesktopDBusObjectManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgFreedesktopDBusObjectManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OrgFreedesktopDBusObjectManagerInterface.stringdata0))
        return static_cast<void*>(const_cast< OrgFreedesktopDBusObjectManagerInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgFreedesktopDBusObjectManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OrgFreedesktopDBusObjectManagerInterface::InterfacesAdded(const QDBusObjectPath & _t1, const QVariantMapMap & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OrgFreedesktopDBusObjectManagerInterface::InterfacesRemoved(const QDBusObjectPath & _t1, const QStringList & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

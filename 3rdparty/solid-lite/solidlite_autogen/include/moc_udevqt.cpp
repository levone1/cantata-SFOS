/****************************************************************************
** Meta object code from reading C++ file 'udevqt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../backends/shared/udevqt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udevqt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UdevQt__Client_t {
    QByteArrayData data[12];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UdevQt__Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UdevQt__Client_t qt_meta_stringdata_UdevQt__Client = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UdevQt::Client"
QT_MOC_LITERAL(1, 15, 11), // "deviceAdded"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "UdevQt::Device"
QT_MOC_LITERAL(4, 43, 3), // "dev"
QT_MOC_LITERAL(5, 47, 13), // "deviceRemoved"
QT_MOC_LITERAL(6, 61, 13), // "deviceChanged"
QT_MOC_LITERAL(7, 75, 13), // "deviceOnlined"
QT_MOC_LITERAL(8, 89, 14), // "deviceOfflined"
QT_MOC_LITERAL(9, 104, 20), // "_uq_monitorReadyRead"
QT_MOC_LITERAL(10, 125, 2), // "fd"
QT_MOC_LITERAL(11, 128, 17) // "watchedSubsystems"

    },
    "UdevQt::Client\0deviceAdded\0\0UdevQt::Device\0"
    "dev\0deviceRemoved\0deviceChanged\0"
    "deviceOnlined\0deviceOfflined\0"
    "_uq_monitorReadyRead\0fd\0watchedSubsystems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UdevQt__Client[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       7,    1,   53,    2, 0x06 /* Public */,
       8,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,

 // properties: name, type, flags
      11, QMetaType::QStringList, 0x00095103,

       0        // eod
};

void UdevQt::Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Client *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceAdded((*reinterpret_cast< const UdevQt::Device(*)>(_a[1]))); break;
        case 1: _t->deviceRemoved((*reinterpret_cast< const UdevQt::Device(*)>(_a[1]))); break;
        case 2: _t->deviceChanged((*reinterpret_cast< const UdevQt::Device(*)>(_a[1]))); break;
        case 3: _t->deviceOnlined((*reinterpret_cast< const UdevQt::Device(*)>(_a[1]))); break;
        case 4: _t->deviceOfflined((*reinterpret_cast< const UdevQt::Device(*)>(_a[1]))); break;
        case 5: _t->d->_uq_monitorReadyRead((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Client::*_t)(const UdevQt::Device & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::deviceAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const UdevQt::Device & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::deviceRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const UdevQt::Device & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::deviceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const UdevQt::Device & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::deviceOnlined)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Client::*_t)(const UdevQt::Device & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Client::deviceOfflined)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Client *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->watchedSubsystems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Client *_t = static_cast<Client *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWatchedSubsystems(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject UdevQt::Client::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UdevQt__Client.data,
      qt_meta_data_UdevQt__Client,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UdevQt::Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UdevQt::Client::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UdevQt__Client.stringdata0))
        return static_cast<void*>(const_cast< Client*>(this));
    return QObject::qt_metacast(_clname);
}

int UdevQt::Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UdevQt::Client::deviceAdded(const UdevQt::Device & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UdevQt::Client::deviceRemoved(const UdevQt::Device & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void UdevQt::Client::deviceChanged(const UdevQt::Device & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void UdevQt::Client::deviceOnlined(const UdevQt::Device & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void UdevQt::Client::deviceOfflined(const UdevQt::Device & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE

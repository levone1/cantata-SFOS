/****************************************************************************
** Meta object code from reading C++ file 'remotefsdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devices/remotefsdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'remotefsdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RemoteFsDevice_t {
    QByteArrayData data[18];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoteFsDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoteFsDevice_t qt_meta_stringdata_RemoteFsDevice = {
    {
QT_MOC_LITERAL(0, 0, 14), // "RemoteFsDevice"
QT_MOC_LITERAL(1, 15, 10), // "udiChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 25), // "connectionStateHasChanged"
QT_MOC_LITERAL(4, 53, 2), // "id"
QT_MOC_LITERAL(5, 56, 9), // "connected"
QT_MOC_LITERAL(6, 66, 14), // "saveProperties"
QT_MOC_LITERAL(7, 81, 13), // "DeviceOptions"
QT_MOC_LITERAL(8, 95, 7), // "newOpts"
QT_MOC_LITERAL(9, 103, 23), // "RemoteFsDevice::Details"
QT_MOC_LITERAL(10, 127, 10), // "newDetails"
QT_MOC_LITERAL(11, 138, 12), // "procFinished"
QT_MOC_LITERAL(12, 151, 8), // "exitCode"
QT_MOC_LITERAL(13, 160, 11), // "mountStatus"
QT_MOC_LITERAL(14, 172, 2), // "mp"
QT_MOC_LITERAL(15, 175, 3), // "pid"
QT_MOC_LITERAL(16, 179, 2), // "st"
QT_MOC_LITERAL(17, 182, 12) // "umountStatus"

    },
    "RemoteFsDevice\0udiChanged\0\0"
    "connectionStateHasChanged\0id\0connected\0"
    "saveProperties\0DeviceOptions\0newOpts\0"
    "RemoteFsDevice::Details\0newDetails\0"
    "procFinished\0exitCode\0mountStatus\0mp\0"
    "pid\0st\0umountStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoteFsDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    2,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   55,    2, 0x09 /* Protected */,
       6,    2,   56,    2, 0x09 /* Protected */,
      11,    1,   61,    2, 0x09 /* Protected */,
      13,    3,   64,    2, 0x09 /* Protected */,
      17,    3,   71,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   14,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   14,   15,   16,

       0        // eod
};

void RemoteFsDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RemoteFsDevice *_t = static_cast<RemoteFsDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->udiChanged(); break;
        case 1: _t->connectionStateHasChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->saveProperties(); break;
        case 3: _t->saveProperties((*reinterpret_cast< const DeviceOptions(*)>(_a[1])),(*reinterpret_cast< const RemoteFsDevice::Details(*)>(_a[2]))); break;
        case 4: _t->procFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mountStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->umountStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RemoteFsDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteFsDevice::udiChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RemoteFsDevice::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RemoteFsDevice::connectionStateHasChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject RemoteFsDevice::staticMetaObject = {
    { &FsDevice::staticMetaObject, qt_meta_stringdata_RemoteFsDevice.data,
      qt_meta_data_RemoteFsDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RemoteFsDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoteFsDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RemoteFsDevice.stringdata0))
        return static_cast<void*>(const_cast< RemoteFsDevice*>(this));
    return FsDevice::qt_metacast(_clname);
}

int RemoteFsDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FsDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void RemoteFsDevice::udiChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RemoteFsDevice::connectionStateHasChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

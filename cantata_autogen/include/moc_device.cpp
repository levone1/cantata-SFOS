/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devices/device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Device_t {
    QByteArrayData data[29];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Device_t qt_meta_stringdata_Device = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Device"
QT_MOC_LITERAL(1, 7, 9), // "connected"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 2), // "id"
QT_MOC_LITERAL(4, 21, 12), // "disconnected"
QT_MOC_LITERAL(5, 34, 8), // "updating"
QT_MOC_LITERAL(6, 43, 1), // "s"
QT_MOC_LITERAL(7, 45, 12), // "actionStatus"
QT_MOC_LITERAL(8, 58, 6), // "status"
QT_MOC_LITERAL(9, 65, 11), // "copiedCover"
QT_MOC_LITERAL(10, 77, 8), // "progress"
QT_MOC_LITERAL(11, 86, 2), // "pc"
QT_MOC_LITERAL(12, 89, 5), // "error"
QT_MOC_LITERAL(13, 95, 5), // "cover"
QT_MOC_LITERAL(14, 101, 4), // "Song"
QT_MOC_LITERAL(15, 106, 4), // "song"
QT_MOC_LITERAL(16, 111, 3), // "img"
QT_MOC_LITERAL(17, 115, 10), // "cacheSaved"
QT_MOC_LITERAL(18, 126, 20), // "configurationChanged"
QT_MOC_LITERAL(19, 147, 4), // "play"
QT_MOC_LITERAL(20, 152, 11), // "QList<Song>"
QT_MOC_LITERAL(21, 164, 5), // "songs"
QT_MOC_LITERAL(22, 170, 14), // "updatedDetails"
QT_MOC_LITERAL(23, 185, 7), // "renamed"
QT_MOC_LITERAL(24, 193, 16), // "setStatusMessage"
QT_MOC_LITERAL(25, 210, 7), // "message"
QT_MOC_LITERAL(26, 218, 9), // "songCount"
QT_MOC_LITERAL(27, 228, 1), // "c"
QT_MOC_LITERAL(28, 230, 16) // "updatePercentage"

    },
    "Device\0connected\0\0id\0disconnected\0"
    "updating\0s\0actionStatus\0status\0"
    "copiedCover\0progress\0pc\0error\0cover\0"
    "Song\0song\0img\0cacheSaved\0configurationChanged\0"
    "play\0QList<Song>\0songs\0updatedDetails\0"
    "renamed\0setStatusMessage\0message\0"
    "songCount\0c\0updatePercentage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Device[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       5,    2,  100,    2, 0x06 /* Public */,
       7,    2,  105,    2, 0x06 /* Public */,
       7,    1,  110,    2, 0x26 /* Public | MethodCloned */,
      10,    1,  113,    2, 0x06 /* Public */,
      12,    1,  116,    2, 0x06 /* Public */,
      13,    2,  119,    2, 0x06 /* Public */,
      17,    0,  124,    2, 0x06 /* Public */,
      18,    0,  125,    2, 0x06 /* Public */,
      19,    1,  126,    2, 0x06 /* Public */,
      22,    1,  129,    2, 0x06 /* Public */,
      23,    0,  132,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    1,  133,    2, 0x0a /* Public */,
      26,    1,  136,    2, 0x0a /* Public */,
      28,    1,  139,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    8,    9,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QImage,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Device *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->disconnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updating((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->actionStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->actionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->cover((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 8: _t->cacheSaved(); break;
        case 9: _t->configurationChanged(); break;
        case 10: _t->play((*reinterpret_cast< const QList<Song>(*)>(_a[1]))); break;
        case 11: _t->updatedDetails((*reinterpret_cast< const QList<Song>(*)>(_a[1]))); break;
        case 12: _t->renamed(); break;
        case 13: _t->setStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->songCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->updatePercentage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Device::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::connected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Device::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::disconnected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Device::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::updating)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Device::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::actionStatus)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Device::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::progress)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Device::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::error)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Device::*_t)(const Song & , const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::cover)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::cacheSaved)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::configurationChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (Device::*_t)(const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::play)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (Device::*_t)(const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::updatedDetails)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (Device::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Device::renamed)) {
                *result = 12;
                return;
            }
        }
    }
}

const QMetaObject Device::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Device.data,
      qt_meta_data_Device,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Device::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Device.stringdata0))
        return static_cast<void*>(const_cast< Device*>(this));
    if (!strcmp(_clname, "MusicLibraryItemRoot"))
        return static_cast< MusicLibraryItemRoot*>(const_cast< Device*>(this));
    return QObject::qt_metacast(_clname);
}

int Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Device::connected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Device::disconnected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Device::updating(const QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Device::actionStatus(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void Device::progress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Device::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Device::cover(const Song & _t1, const QImage & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Device::cacheSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void Device::configurationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void Device::play(const QList<Song> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Device::updatedDetails(const QList<Song> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Device::renamed()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

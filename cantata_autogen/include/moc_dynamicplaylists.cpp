/****************************************************************************
** Meta object code from reading C++ file 'dynamicplaylists.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../playlists/dynamicplaylists.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dynamicplaylists.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DynamicPlaylists_t {
    QByteArrayData data[21];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DynamicPlaylists_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DynamicPlaylists_t qt_meta_stringdata_DynamicPlaylists = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DynamicPlaylists"
QT_MOC_LITERAL(1, 17, 7), // "running"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "status"
QT_MOC_LITERAL(4, 33, 5), // "error"
QT_MOC_LITERAL(5, 39, 3), // "str"
QT_MOC_LITERAL(6, 43, 5), // "clear"
QT_MOC_LITERAL(7, 49, 13), // "remoteMessage"
QT_MOC_LITERAL(8, 63, 4), // "args"
QT_MOC_LITERAL(9, 68, 5), // "saved"
QT_MOC_LITERAL(10, 74, 1), // "s"
QT_MOC_LITERAL(11, 76, 11), // "loadingList"
QT_MOC_LITERAL(12, 88, 10), // "loadedList"
QT_MOC_LITERAL(13, 99, 11), // "checkHelper"
QT_MOC_LITERAL(14, 111, 22), // "checkIfRemoteIsRunning"
QT_MOC_LITERAL(15, 134, 18), // "updateRemoteStatus"
QT_MOC_LITERAL(16, 153, 14), // "remoteResponse"
QT_MOC_LITERAL(17, 168, 3), // "msg"
QT_MOC_LITERAL(18, 172, 22), // "remoteDynamicSupported"
QT_MOC_LITERAL(19, 195, 11), // "parseStatus"
QT_MOC_LITERAL(20, 207, 8) // "response"

    },
    "DynamicPlaylists\0running\0\0status\0error\0"
    "str\0clear\0remoteMessage\0args\0saved\0s\0"
    "loadingList\0loadedList\0checkHelper\0"
    "checkIfRemoteIsRunning\0updateRemoteStatus\0"
    "remoteResponse\0msg\0remoteDynamicSupported\0"
    "parseStatus\0response"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DynamicPlaylists[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    0,   85,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,
       9,    1,   89,    2, 0x06 /* Public */,
      11,    0,   92,    2, 0x06 /* Public */,
      12,    0,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   94,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    1,   97,    2, 0x08 /* Private */,
      18,    1,  100,    2, 0x08 /* Private */,
      19,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   17,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QStringList,   20,

       0        // eod
};

void DynamicPlaylists::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DynamicPlaylists *_t = static_cast<DynamicPlaylists *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->running((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clear(); break;
        case 3: _t->remoteMessage((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->saved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->loadingList(); break;
        case 6: _t->loadedList(); break;
        case 7: _t->checkHelper(); break;
        case 8: _t->checkIfRemoteIsRunning(); break;
        case 9: _t->updateRemoteStatus(); break;
        case 10: _t->remoteResponse((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 11: _t->remoteDynamicSupported((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->parseStatus((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DynamicPlaylists::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DynamicPlaylists::running)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DynamicPlaylists::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DynamicPlaylists::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DynamicPlaylists::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DynamicPlaylists::clear)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DynamicPlaylists::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DynamicPlaylists::remoteMessage)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DynamicPlaylists::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DynamicPlaylists::saved)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DynamicPlaylists::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DynamicPlaylists::loadingList)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DynamicPlaylists::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DynamicPlaylists::loadedList)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject DynamicPlaylists::staticMetaObject = {
    { &RulesPlaylists::staticMetaObject, qt_meta_stringdata_DynamicPlaylists.data,
      qt_meta_data_DynamicPlaylists,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DynamicPlaylists::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DynamicPlaylists::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicPlaylists.stringdata0))
        return static_cast<void*>(const_cast< DynamicPlaylists*>(this));
    return RulesPlaylists::qt_metacast(_clname);
}

int DynamicPlaylists::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RulesPlaylists::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DynamicPlaylists::running(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DynamicPlaylists::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DynamicPlaylists::clear()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void DynamicPlaylists::remoteMessage(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DynamicPlaylists::saved(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DynamicPlaylists::loadingList()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void DynamicPlaylists::loadedList()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

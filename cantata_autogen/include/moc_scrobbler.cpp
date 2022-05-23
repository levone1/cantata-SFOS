/****************************************************************************
** Meta object code from reading C++ file 'scrobbler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scrobbling/scrobbler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scrobbler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scrobbler_t {
    QByteArrayData data[33];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scrobbler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scrobbler_t qt_meta_stringdata_Scrobbler = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Scrobbler"
QT_MOC_LITERAL(1, 10, 5), // "error"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 3), // "msg"
QT_MOC_LITERAL(4, 21, 13), // "authenticated"
QT_MOC_LITERAL(5, 35, 1), // "a"
QT_MOC_LITERAL(6, 37, 7), // "enabled"
QT_MOC_LITERAL(7, 45, 1), // "e"
QT_MOC_LITERAL(8, 47, 11), // "loveEnabled"
QT_MOC_LITERAL(9, 59, 11), // "songChanged"
QT_MOC_LITERAL(10, 71, 5), // "valid"
QT_MOC_LITERAL(11, 77, 16), // "scrobblerChanged"
QT_MOC_LITERAL(12, 94, 13), // "clientMessage"
QT_MOC_LITERAL(13, 108, 6), // "client"
QT_MOC_LITERAL(14, 115, 10), // "clientName"
QT_MOC_LITERAL(15, 126, 4), // "love"
QT_MOC_LITERAL(16, 131, 10), // "setEnabled"
QT_MOC_LITERAL(17, 142, 14), // "setLoveEnabled"
QT_MOC_LITERAL(18, 157, 7), // "setSong"
QT_MOC_LITERAL(19, 165, 4), // "Song"
QT_MOC_LITERAL(20, 170, 1), // "s"
QT_MOC_LITERAL(21, 172, 15), // "scrobbleCurrent"
QT_MOC_LITERAL(22, 188, 14), // "scrobbleQueued"
QT_MOC_LITERAL(23, 203, 18), // "scrobbleNowPlaying"
QT_MOC_LITERAL(24, 222, 10), // "handleResp"
QT_MOC_LITERAL(25, 233, 12), // "authenticate"
QT_MOC_LITERAL(26, 246, 8), // "authResp"
QT_MOC_LITERAL(27, 255, 16), // "scrobbleFinished"
QT_MOC_LITERAL(28, 272, 15), // "mpdStateUpdated"
QT_MOC_LITERAL(29, 288, 16), // "mpdStatusUpdated"
QT_MOC_LITERAL(30, 305, 15), // "MPDStatusValues"
QT_MOC_LITERAL(31, 321, 4), // "vals"
QT_MOC_LITERAL(32, 326, 19) // "clientMessageFailed"

    },
    "Scrobbler\0error\0\0msg\0authenticated\0a\0"
    "enabled\0e\0loveEnabled\0songChanged\0"
    "valid\0scrobblerChanged\0clientMessage\0"
    "client\0clientName\0love\0setEnabled\0"
    "setLoveEnabled\0setSong\0Song\0s\0"
    "scrobbleCurrent\0scrobbleQueued\0"
    "scrobbleNowPlaying\0handleResp\0"
    "authenticate\0authResp\0scrobbleFinished\0"
    "mpdStateUpdated\0mpdStatusUpdated\0"
    "MPDStatusValues\0vals\0clientMessageFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scrobbler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       4,    1,  127,    2, 0x06 /* Public */,
       6,    1,  130,    2, 0x06 /* Public */,
       8,    1,  133,    2, 0x06 /* Public */,
       9,    1,  136,    2, 0x06 /* Public */,
      11,    0,  139,    2, 0x06 /* Public */,
      12,    3,  140,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  147,    2, 0x0a /* Public */,
      16,    1,  148,    2, 0x0a /* Public */,
      17,    1,  151,    2, 0x0a /* Public */,
      18,    1,  154,    2, 0x08 /* Private */,
      21,    0,  157,    2, 0x08 /* Private */,
      22,    0,  158,    2, 0x08 /* Private */,
      23,    0,  159,    2, 0x08 /* Private */,
      24,    0,  160,    2, 0x08 /* Private */,
      25,    0,  161,    2, 0x08 /* Private */,
      26,    0,  162,    2, 0x08 /* Private */,
      27,    0,  163,    2, 0x08 /* Private */,
      28,    1,  164,    2, 0x08 /* Private */,
      28,    0,  167,    2, 0x28 /* Private | MethodCloned */,
      29,    1,  168,    2, 0x08 /* Private */,
      32,    2,  171,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,    3,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,    3,

       0        // eod
};

void Scrobbler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scrobbler *_t = static_cast<Scrobbler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->authenticated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->loveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->songChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->scrobblerChanged(); break;
        case 6: _t->clientMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->love(); break;
        case 8: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setLoveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setSong((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 11: _t->scrobbleCurrent(); break;
        case 12: _t->scrobbleQueued(); break;
        case 13: _t->scrobbleNowPlaying(); break;
        case 14: _t->handleResp(); break;
        case 15: _t->authenticate(); break;
        case 16: _t->authResp(); break;
        case 17: _t->scrobbleFinished(); break;
        case 18: _t->mpdStateUpdated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->mpdStateUpdated(); break;
        case 20: _t->mpdStatusUpdated((*reinterpret_cast< const MPDStatusValues(*)>(_a[1]))); break;
        case 21: _t->clientMessageFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scrobbler::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scrobbler::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Scrobbler::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scrobbler::authenticated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Scrobbler::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scrobbler::enabled)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Scrobbler::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scrobbler::loveEnabled)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Scrobbler::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scrobbler::songChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Scrobbler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scrobbler::scrobblerChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Scrobbler::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scrobbler::clientMessage)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject Scrobbler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Scrobbler.data,
      qt_meta_data_Scrobbler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Scrobbler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scrobbler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Scrobbler.stringdata0))
        return static_cast<void*>(const_cast< Scrobbler*>(this));
    return QObject::qt_metacast(_clname);
}

int Scrobbler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void Scrobbler::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Scrobbler::authenticated(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Scrobbler::enabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Scrobbler::loveEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Scrobbler::songChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Scrobbler::scrobblerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void Scrobbler::clientMessage(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

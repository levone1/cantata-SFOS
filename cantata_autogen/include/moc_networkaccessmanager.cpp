/****************************************************************************
** Meta object code from reading C++ file 'networkaccessmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../network/networkaccessmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkaccessmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NetworkJob_t {
    QByteArrayData data[18];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkJob_t qt_meta_stringdata_NetworkJob = {
    {
QT_MOC_LITERAL(0, 0, 10), // "NetworkJob"
QT_MOC_LITERAL(1, 11, 8), // "finished"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "error"
QT_MOC_LITERAL(4, 27, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 55, 14), // "uploadProgress"
QT_MOC_LITERAL(6, 70, 9), // "bytesSent"
QT_MOC_LITERAL(7, 80, 10), // "bytesTotal"
QT_MOC_LITERAL(8, 91, 16), // "downloadProgress"
QT_MOC_LITERAL(9, 108, 13), // "bytesReceived"
QT_MOC_LITERAL(10, 122, 15), // "downloadPercent"
QT_MOC_LITERAL(11, 138, 2), // "pc"
QT_MOC_LITERAL(12, 141, 9), // "readyRead"
QT_MOC_LITERAL(13, 151, 11), // "jobFinished"
QT_MOC_LITERAL(14, 163, 12), // "jobDestroyed"
QT_MOC_LITERAL(15, 176, 1), // "o"
QT_MOC_LITERAL(16, 178, 12), // "downloadProg"
QT_MOC_LITERAL(17, 191, 15) // "handleReadyRead"

    },
    "NetworkJob\0finished\0\0error\0"
    "QNetworkReply::NetworkError\0uploadProgress\0"
    "bytesSent\0bytesTotal\0downloadProgress\0"
    "bytesReceived\0downloadPercent\0pc\0"
    "readyRead\0jobFinished\0jobDestroyed\0o\0"
    "downloadProg\0handleReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    2,   68,    2, 0x06 /* Public */,
       8,    2,   73,    2, 0x06 /* Public */,
      10,    1,   78,    2, 0x06 /* Public */,
      12,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   82,    2, 0x08 /* Private */,
      14,    1,   83,    2, 0x08 /* Private */,
      16,    2,   86,    2, 0x08 /* Private */,
      17,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,    7,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   15,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,    7,
    QMetaType::Void,

       0        // eod
};

void NetworkJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkJob *_t = static_cast<NetworkJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->downloadPercent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->readyRead(); break;
        case 6: _t->jobFinished(); break;
        case 7: _t->jobDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->downloadProg((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->handleReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NetworkJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkJob::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NetworkJob::*_t)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkJob::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NetworkJob::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkJob::uploadProgress)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NetworkJob::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkJob::downloadProgress)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NetworkJob::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkJob::downloadPercent)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (NetworkJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkJob::readyRead)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject NetworkJob::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetworkJob.data,
      qt_meta_data_NetworkJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NetworkJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkJob.stringdata0))
        return static_cast<void*>(const_cast< NetworkJob*>(this));
    return QObject::qt_metacast(_clname);
}

int NetworkJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void NetworkJob::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void NetworkJob::error(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetworkJob::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkJob::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void NetworkJob::downloadPercent(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NetworkJob::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
struct qt_meta_stringdata_NetworkAccessManager_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkAccessManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkAccessManager_t qt_meta_stringdata_NetworkAccessManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "NetworkAccessManager"
QT_MOC_LITERAL(1, 21, 13), // "replyFinished"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "NetworkAccessManager\0replyFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkAccessManager[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void NetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkAccessManager *_t = static_cast<NetworkAccessManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replyFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject NetworkAccessManager::staticMetaObject = {
    { &QNetworkAccessManager::staticMetaObject, qt_meta_stringdata_NetworkAccessManager.data,
      qt_meta_data_NetworkAccessManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkAccessManager.stringdata0))
        return static_cast<void*>(const_cast< NetworkAccessManager*>(this));
    return QNetworkAccessManager::qt_metacast(_clname);
}

int NetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
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

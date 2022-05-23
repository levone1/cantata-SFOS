/****************************************************************************
** Meta object code from reading C++ file 'onlinedbservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../online/onlinedbservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'onlinedbservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OnlineXmlParser_t {
    QByteArrayData data[21];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OnlineXmlParser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OnlineXmlParser_t qt_meta_stringdata_OnlineXmlParser = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OnlineXmlParser"
QT_MOC_LITERAL(1, 16, 5), // "songs"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "QList<Song>*"
QT_MOC_LITERAL(4, 36, 1), // "s"
QT_MOC_LITERAL(5, 38, 8), // "coverUrl"
QT_MOC_LITERAL(6, 47, 6), // "artist"
QT_MOC_LITERAL(7, 54, 5), // "album"
QT_MOC_LITERAL(8, 60, 5), // "cover"
QT_MOC_LITERAL(9, 66, 11), // "startUpdate"
QT_MOC_LITERAL(10, 78, 9), // "endUpdate"
QT_MOC_LITERAL(11, 88, 11), // "abortUpdate"
QT_MOC_LITERAL(12, 100, 5), // "stats"
QT_MOC_LITERAL(13, 106, 10), // "numArtists"
QT_MOC_LITERAL(14, 117, 8), // "complete"
QT_MOC_LITERAL(15, 126, 5), // "error"
QT_MOC_LITERAL(16, 132, 3), // "msg"
QT_MOC_LITERAL(17, 136, 12), // "startParsing"
QT_MOC_LITERAL(18, 149, 11), // "NetworkJob*"
QT_MOC_LITERAL(19, 161, 3), // "job"
QT_MOC_LITERAL(20, 165, 9) // "doParsing"

    },
    "OnlineXmlParser\0songs\0\0QList<Song>*\0"
    "s\0coverUrl\0artist\0album\0cover\0startUpdate\0"
    "endUpdate\0abortUpdate\0stats\0numArtists\0"
    "complete\0error\0msg\0startParsing\0"
    "NetworkJob*\0job\0doParsing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OnlineXmlParser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    3,   67,    2, 0x06 /* Public */,
       9,    0,   74,    2, 0x06 /* Public */,
      10,    0,   75,    2, 0x06 /* Public */,
      11,    0,   76,    2, 0x06 /* Public */,
      12,    1,   77,    2, 0x06 /* Public */,
      14,    0,   80,    2, 0x06 /* Public */,
      15,    1,   81,    2, 0x06 /* Public */,
      17,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 18,   19,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void OnlineXmlParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OnlineXmlParser *_t = static_cast<OnlineXmlParser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->songs((*reinterpret_cast< QList<Song>*(*)>(_a[1]))); break;
        case 1: _t->coverUrl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->startUpdate(); break;
        case 3: _t->endUpdate(); break;
        case 4: _t->abortUpdate(); break;
        case 5: _t->stats((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->complete(); break;
        case 7: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->startParsing((*reinterpret_cast< NetworkJob*(*)>(_a[1]))); break;
        case 9: _t->doParsing((*reinterpret_cast< NetworkJob*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OnlineXmlParser::*_t)(QList<Song> * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OnlineXmlParser::songs)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OnlineXmlParser::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OnlineXmlParser::coverUrl)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OnlineXmlParser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OnlineXmlParser::startUpdate)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OnlineXmlParser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OnlineXmlParser::endUpdate)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (OnlineXmlParser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OnlineXmlParser::abortUpdate)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (OnlineXmlParser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OnlineXmlParser::stats)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (OnlineXmlParser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OnlineXmlParser::complete)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (OnlineXmlParser::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OnlineXmlParser::error)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (OnlineXmlParser::*_t)(NetworkJob * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OnlineXmlParser::startParsing)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject OnlineXmlParser::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OnlineXmlParser.data,
      qt_meta_data_OnlineXmlParser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OnlineXmlParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OnlineXmlParser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OnlineXmlParser.stringdata0))
        return static_cast<void*>(const_cast< OnlineXmlParser*>(this));
    return QObject::qt_metacast(_clname);
}

int OnlineXmlParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void OnlineXmlParser::songs(QList<Song> * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OnlineXmlParser::coverUrl(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OnlineXmlParser::startUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void OnlineXmlParser::endUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void OnlineXmlParser::abortUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void OnlineXmlParser::stats(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OnlineXmlParser::complete()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void OnlineXmlParser::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OnlineXmlParser::startParsing(NetworkJob * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
struct qt_meta_stringdata_OnlineDbService_t {
    QByteArrayData data[15];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OnlineDbService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OnlineDbService_t qt_meta_stringdata_OnlineDbService = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OnlineDbService"
QT_MOC_LITERAL(1, 16, 5), // "error"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "msg"
QT_MOC_LITERAL(4, 27, 5), // "abort"
QT_MOC_LITERAL(5, 33, 5), // "cover"
QT_MOC_LITERAL(6, 39, 4), // "Song"
QT_MOC_LITERAL(7, 44, 4), // "song"
QT_MOC_LITERAL(8, 49, 3), // "img"
QT_MOC_LITERAL(9, 53, 4), // "file"
QT_MOC_LITERAL(10, 58, 12), // "updateStatus"
QT_MOC_LITERAL(11, 71, 15), // "downloadPercent"
QT_MOC_LITERAL(12, 87, 2), // "pc"
QT_MOC_LITERAL(13, 90, 16), // "downloadFinished"
QT_MOC_LITERAL(14, 107, 11) // "updateStats"

    },
    "OnlineDbService\0error\0\0msg\0abort\0cover\0"
    "Song\0song\0img\0file\0updateStatus\0"
    "downloadPercent\0pc\0downloadFinished\0"
    "updateStats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OnlineDbService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       5,    3,   53,    2, 0x08 /* Private */,
      10,    1,   60,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,
      13,    0,   66,    2, 0x08 /* Private */,
      14,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QImage, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OnlineDbService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OnlineDbService *_t = static_cast<OnlineDbService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->abort(); break;
        case 2: _t->cover((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->updateStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->downloadPercent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->downloadFinished(); break;
        case 6: _t->updateStats(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OnlineDbService::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OnlineDbService::error)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OnlineDbService::staticMetaObject = {
    { &SqlLibraryModel::staticMetaObject, qt_meta_stringdata_OnlineDbService.data,
      qt_meta_data_OnlineDbService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OnlineDbService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OnlineDbService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OnlineDbService.stringdata0))
        return static_cast<void*>(const_cast< OnlineDbService*>(this));
    if (!strcmp(_clname, "OnlineService"))
        return static_cast< OnlineService*>(const_cast< OnlineDbService*>(this));
    return SqlLibraryModel::qt_metacast(_clname);
}

int OnlineDbService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SqlLibraryModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OnlineDbService::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

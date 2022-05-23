/****************************************************************************
** Meta object code from reading C++ file 'covers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gui/covers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'covers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CoverDownloader_t {
    QByteArrayData data[18];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoverDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoverDownloader_t qt_meta_stringdata_CoverDownloader = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CoverDownloader"
QT_MOC_LITERAL(1, 16, 5), // "cover"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "Song"
QT_MOC_LITERAL(4, 28, 4), // "song"
QT_MOC_LITERAL(5, 33, 3), // "img"
QT_MOC_LITERAL(6, 37, 4), // "file"
QT_MOC_LITERAL(7, 42, 11), // "artistImage"
QT_MOC_LITERAL(8, 54, 13), // "composerImage"
QT_MOC_LITERAL(9, 68, 8), // "mpdCover"
QT_MOC_LITERAL(10, 77, 8), // "download"
QT_MOC_LITERAL(11, 86, 1), // "s"
QT_MOC_LITERAL(12, 88, 11), // "mpdAlbumArt"
QT_MOC_LITERAL(13, 100, 4), // "data"
QT_MOC_LITERAL(14, 105, 18), // "remoteCallFinished"
QT_MOC_LITERAL(15, 124, 24), // "lastFmArtistCallFinished"
QT_MOC_LITERAL(16, 149, 11), // "jobFinished"
QT_MOC_LITERAL(17, 161, 17) // "onlineJobFinished"

    },
    "CoverDownloader\0cover\0\0Song\0song\0img\0"
    "file\0artistImage\0composerImage\0mpdCover\0"
    "download\0s\0mpdAlbumArt\0data\0"
    "remoteCallFinished\0lastFmArtistCallFinished\0"
    "jobFinished\0onlineJobFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoverDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x06 /* Public */,
       7,    3,   71,    2, 0x06 /* Public */,
       8,    3,   78,    2, 0x06 /* Public */,
       9,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   88,    2, 0x0a /* Public */,
      12,    2,   91,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage, QMetaType::QString,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray,    4,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CoverDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoverDownloader *_t = static_cast<CoverDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cover((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->artistImage((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->composerImage((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->mpdCover((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 4: _t->download((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 5: _t->mpdAlbumArt((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 6: _t->remoteCallFinished(); break;
        case 7: _t->lastFmArtistCallFinished(); break;
        case 8: _t->jobFinished(); break;
        case 9: _t->onlineJobFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 5:
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
            typedef void (CoverDownloader::*_t)(const Song & , const QImage & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoverDownloader::cover)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CoverDownloader::*_t)(const Song & , const QImage & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoverDownloader::artistImage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CoverDownloader::*_t)(const Song & , const QImage & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoverDownloader::composerImage)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CoverDownloader::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoverDownloader::mpdCover)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject CoverDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CoverDownloader.data,
      qt_meta_data_CoverDownloader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CoverDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoverDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CoverDownloader.stringdata0))
        return static_cast<void*>(const_cast< CoverDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int CoverDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CoverDownloader::cover(const Song & _t1, const QImage & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CoverDownloader::artistImage(const Song & _t1, const QImage & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CoverDownloader::composerImage(const Song & _t1, const QImage & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CoverDownloader::mpdCover(const Song & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_CoverLocator_t {
    QByteArrayData data[8];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoverLocator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoverLocator_t qt_meta_stringdata_CoverLocator = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CoverLocator"
QT_MOC_LITERAL(1, 13, 7), // "located"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "QList<LocatedCover>"
QT_MOC_LITERAL(4, 42, 6), // "covers"
QT_MOC_LITERAL(5, 49, 6), // "locate"
QT_MOC_LITERAL(6, 56, 4), // "Song"
QT_MOC_LITERAL(7, 61, 1) // "s"

    },
    "CoverLocator\0located\0\0QList<LocatedCover>\0"
    "covers\0locate\0Song\0s"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoverLocator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void CoverLocator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoverLocator *_t = static_cast<CoverLocator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->located((*reinterpret_cast< const QList<LocatedCover>(*)>(_a[1]))); break;
        case 1: _t->locate((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 2: _t->locate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            typedef void (CoverLocator::*_t)(const QList<LocatedCover> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoverLocator::located)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CoverLocator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CoverLocator.data,
      qt_meta_data_CoverLocator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CoverLocator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoverLocator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CoverLocator.stringdata0))
        return static_cast<void*>(const_cast< CoverLocator*>(this));
    return QObject::qt_metacast(_clname);
}

int CoverLocator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CoverLocator::located(const QList<LocatedCover> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CoverLoader_t {
    QByteArrayData data[8];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoverLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoverLoader_t qt_meta_stringdata_CoverLoader = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CoverLoader"
QT_MOC_LITERAL(1, 12, 6), // "loaded"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 18), // "QList<LoadedCover>"
QT_MOC_LITERAL(4, 39, 6), // "covers"
QT_MOC_LITERAL(5, 46, 4), // "load"
QT_MOC_LITERAL(6, 51, 4), // "Song"
QT_MOC_LITERAL(7, 56, 4) // "song"

    },
    "CoverLoader\0loaded\0\0QList<LoadedCover>\0"
    "covers\0load\0Song\0song"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoverLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x0a /* Public */,
       5,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void CoverLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoverLoader *_t = static_cast<CoverLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loaded((*reinterpret_cast< const QList<LoadedCover>(*)>(_a[1]))); break;
        case 1: _t->load((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 2: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
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
            typedef void (CoverLoader::*_t)(const QList<LoadedCover> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoverLoader::loaded)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CoverLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CoverLoader.data,
      qt_meta_data_CoverLoader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CoverLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoverLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CoverLoader.stringdata0))
        return static_cast<void*>(const_cast< CoverLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int CoverLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CoverLoader::loaded(const QList<LoadedCover> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Covers_t {
    QByteArrayData data[22];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Covers_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Covers_t qt_meta_stringdata_Covers = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Covers"
QT_MOC_LITERAL(1, 7, 8), // "download"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "Song"
QT_MOC_LITERAL(4, 22, 1), // "s"
QT_MOC_LITERAL(5, 24, 6), // "locate"
QT_MOC_LITERAL(6, 31, 4), // "load"
QT_MOC_LITERAL(7, 36, 4), // "song"
QT_MOC_LITERAL(8, 41, 6), // "loaded"
QT_MOC_LITERAL(9, 48, 5), // "cover"
QT_MOC_LITERAL(10, 54, 3), // "img"
QT_MOC_LITERAL(11, 58, 4), // "file"
QT_MOC_LITERAL(12, 63, 12), // "coverUpdated"
QT_MOC_LITERAL(13, 76, 11), // "artistImage"
QT_MOC_LITERAL(14, 88, 13), // "composerImage"
QT_MOC_LITERAL(15, 102, 7), // "located"
QT_MOC_LITERAL(16, 110, 19), // "QList<LocatedCover>"
QT_MOC_LITERAL(17, 130, 6), // "covers"
QT_MOC_LITERAL(18, 137, 18), // "QList<LoadedCover>"
QT_MOC_LITERAL(19, 156, 15), // "coverDownloaded"
QT_MOC_LITERAL(20, 172, 21), // "artistImageDownloaded"
QT_MOC_LITERAL(21, 194, 23) // "composerImageDownloaded"

    },
    "Covers\0download\0\0Song\0s\0locate\0load\0"
    "song\0loaded\0cover\0img\0file\0coverUpdated\0"
    "artistImage\0composerImage\0located\0"
    "QList<LocatedCover>\0covers\0"
    "QList<LoadedCover>\0coverDownloaded\0"
    "artistImageDownloaded\0composerImageDownloaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Covers[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       8,    2,   88,    2, 0x06 /* Public */,
       9,    3,   93,    2, 0x06 /* Public */,
      12,    3,  100,    2, 0x06 /* Public */,
      13,    3,  107,    2, 0x06 /* Public */,
      14,    3,  114,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  121,    2, 0x08 /* Private */,
       8,    1,  124,    2, 0x08 /* Private */,
      19,    3,  127,    2, 0x08 /* Private */,
      20,    3,  134,    2, 0x08 /* Private */,
      21,    3,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    7,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage, QMetaType::QString,    7,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage, QMetaType::QString,    7,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage, QMetaType::QString,    7,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage, QMetaType::QString,    7,   10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 18,   17,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage, QMetaType::QString,    7,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage, QMetaType::QString,    7,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage, QMetaType::QString,    7,   10,   11,

       0        // eod
};

void Covers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Covers *_t = static_cast<Covers *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->download((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 1: _t->locate((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 2: _t->load((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 3: _t->loaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->cover((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->coverUpdated((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->artistImage((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->composerImage((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 8: _t->located((*reinterpret_cast< const QList<LocatedCover>(*)>(_a[1]))); break;
        case 9: _t->loaded((*reinterpret_cast< const QList<LoadedCover>(*)>(_a[1]))); break;
        case 10: _t->coverDownloaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->artistImageDownloaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->composerImageDownloaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 12:
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
            typedef void (Covers::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Covers::download)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Covers::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Covers::locate)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Covers::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Covers::load)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Covers::*_t)(const Song & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Covers::loaded)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Covers::*_t)(const Song & , const QImage & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Covers::cover)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Covers::*_t)(const Song & , const QImage & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Covers::coverUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Covers::*_t)(const Song & , const QImage & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Covers::artistImage)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Covers::*_t)(const Song & , const QImage & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Covers::composerImage)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject Covers::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Covers.data,
      qt_meta_data_Covers,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Covers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Covers::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Covers.stringdata0))
        return static_cast<void*>(const_cast< Covers*>(this));
    return QObject::qt_metacast(_clname);
}

int Covers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Covers::download(const Song & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Covers::locate(const Song & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Covers::load(const Song & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Covers::loaded(const Song & _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Covers::cover(const Song & _t1, const QImage & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Covers::coverUpdated(const Song & _t1, const QImage & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Covers::artistImage(const Song & _t1, const QImage & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Covers::composerImage(const Song & _t1, const QImage & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE

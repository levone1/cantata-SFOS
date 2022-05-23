/****************************************************************************
** Meta object code from reading C++ file 'fsdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devices/fsdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fsdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MusicScanner_t {
    QByteArrayData data[19];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MusicScanner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MusicScanner_t qt_meta_stringdata_MusicScanner = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MusicScanner"
QT_MOC_LITERAL(1, 13, 9), // "songCount"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 1), // "c"
QT_MOC_LITERAL(4, 26, 14), // "libraryUpdated"
QT_MOC_LITERAL(5, 41, 21), // "MusicLibraryItemRoot*"
QT_MOC_LITERAL(6, 63, 10), // "cacheSaved"
QT_MOC_LITERAL(7, 74, 12), // "readingCache"
QT_MOC_LITERAL(8, 87, 2), // "pc"
QT_MOC_LITERAL(9, 90, 11), // "savingCache"
QT_MOC_LITERAL(10, 102, 4), // "scan"
QT_MOC_LITERAL(11, 107, 6), // "folder"
QT_MOC_LITERAL(12, 114, 9), // "cacheFile"
QT_MOC_LITERAL(13, 124, 9), // "readCache"
QT_MOC_LITERAL(14, 134, 18), // "QSet<FileOnlySong>"
QT_MOC_LITERAL(15, 153, 13), // "existingSongs"
QT_MOC_LITERAL(16, 167, 9), // "saveCache"
QT_MOC_LITERAL(17, 177, 5), // "cache"
QT_MOC_LITERAL(18, 183, 3) // "lib"

    },
    "MusicScanner\0songCount\0\0c\0libraryUpdated\0"
    "MusicLibraryItemRoot*\0cacheSaved\0"
    "readingCache\0pc\0savingCache\0scan\0"
    "folder\0cacheFile\0readCache\0"
    "QSet<FileOnlySong>\0existingSongs\0"
    "saveCache\0cache\0lib"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MusicScanner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    0,   55,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,
       9,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    4,   62,    2, 0x0a /* Public */,
      16,    2,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, 0x80000000 | 14,   11,   12,   13,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,   17,   18,

       0        // eod
};

void MusicScanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MusicScanner *_t = static_cast<MusicScanner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->songCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->libraryUpdated((*reinterpret_cast< MusicLibraryItemRoot*(*)>(_a[1]))); break;
        case 2: _t->cacheSaved(); break;
        case 3: _t->readingCache((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->savingCache((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->scan((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QSet<FileOnlySong>(*)>(_a[4]))); break;
        case 6: _t->saveCache((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MusicLibraryItemRoot*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MusicScanner::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicScanner::songCount)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MusicScanner::*_t)(MusicLibraryItemRoot * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicScanner::libraryUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MusicScanner::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicScanner::cacheSaved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MusicScanner::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicScanner::readingCache)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MusicScanner::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MusicScanner::savingCache)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject MusicScanner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MusicScanner.data,
      qt_meta_data_MusicScanner,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MusicScanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicScanner::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MusicScanner.stringdata0))
        return static_cast<void*>(const_cast< MusicScanner*>(this));
    if (!strcmp(_clname, "MusicLibraryProgressMonitor"))
        return static_cast< MusicLibraryProgressMonitor*>(const_cast< MusicScanner*>(this));
    return QObject::qt_metacast(_clname);
}

int MusicScanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void MusicScanner::songCount(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MusicScanner::libraryUpdated(MusicLibraryItemRoot * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MusicScanner::cacheSaved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MusicScanner::readingCache(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MusicScanner::savingCache(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_FsDevice_t {
    QByteArrayData data[22];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FsDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FsDevice_t qt_meta_stringdata_FsDevice = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FsDevice"
QT_MOC_LITERAL(1, 9, 4), // "scan"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 6), // "folder"
QT_MOC_LITERAL(4, 22, 9), // "cacheFile"
QT_MOC_LITERAL(5, 32, 9), // "readCache"
QT_MOC_LITERAL(6, 42, 18), // "QSet<FileOnlySong>"
QT_MOC_LITERAL(7, 61, 13), // "existingSongs"
QT_MOC_LITERAL(8, 75, 9), // "saveCache"
QT_MOC_LITERAL(9, 85, 21), // "MusicLibraryItemRoot*"
QT_MOC_LITERAL(10, 107, 3), // "lib"
QT_MOC_LITERAL(11, 111, 10), // "savedCache"
QT_MOC_LITERAL(12, 122, 14), // "libraryUpdated"
QT_MOC_LITERAL(13, 137, 7), // "percent"
QT_MOC_LITERAL(14, 145, 2), // "pc"
QT_MOC_LITERAL(15, 148, 13), // "addSongResult"
QT_MOC_LITERAL(16, 162, 6), // "status"
QT_MOC_LITERAL(17, 169, 16), // "copySongToResult"
QT_MOC_LITERAL(18, 186, 16), // "removeSongResult"
QT_MOC_LITERAL(19, 203, 15), // "cleanDirsResult"
QT_MOC_LITERAL(20, 219, 12), // "readingCache"
QT_MOC_LITERAL(21, 232, 11) // "savingCache"

    },
    "FsDevice\0scan\0\0folder\0cacheFile\0"
    "readCache\0QSet<FileOnlySong>\0existingSongs\0"
    "saveCache\0MusicLibraryItemRoot*\0lib\0"
    "savedCache\0libraryUpdated\0percent\0pc\0"
    "addSongResult\0status\0copySongToResult\0"
    "removeSongResult\0cleanDirsResult\0"
    "readingCache\0savingCache"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FsDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   69,    2, 0x06 /* Public */,
       8,    2,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   83,    2, 0x09 /* Protected */,
      12,    1,   84,    2, 0x09 /* Protected */,
      13,    1,   87,    2, 0x09 /* Protected */,
      15,    1,   90,    2, 0x09 /* Protected */,
      17,    1,   93,    2, 0x09 /* Protected */,
      18,    1,   96,    2, 0x09 /* Protected */,
      19,    1,   99,    2, 0x09 /* Protected */,
      20,    1,  102,    2, 0x09 /* Protected */,
      21,    1,  105,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, 0x80000000 | 6,    3,    4,    5,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    4,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void FsDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FsDevice *_t = static_cast<FsDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scan((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QSet<FileOnlySong>(*)>(_a[4]))); break;
        case 1: _t->saveCache((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< MusicLibraryItemRoot*(*)>(_a[2]))); break;
        case 2: _t->savedCache(); break;
        case 3: _t->libraryUpdated((*reinterpret_cast< MusicLibraryItemRoot*(*)>(_a[1]))); break;
        case 4: _t->percent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->addSongResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->copySongToResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->removeSongResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->cleanDirsResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->readingCache((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->savingCache((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FsDevice::*_t)(const QString & , const QString & , bool , const QSet<FileOnlySong> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FsDevice::scan)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FsDevice::*_t)(const QString & , MusicLibraryItemRoot * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FsDevice::saveCache)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject FsDevice::staticMetaObject = {
    { &Device::staticMetaObject, qt_meta_stringdata_FsDevice.data,
      qt_meta_data_FsDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FsDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FsDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FsDevice.stringdata0))
        return static_cast<void*>(const_cast< FsDevice*>(this));
    return Device::qt_metacast(_clname);
}

int FsDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Device::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void FsDevice::scan(const QString & _t1, const QString & _t2, bool _t3, const QSet<FileOnlySong> & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FsDevice::saveCache(const QString & _t1, MusicLibraryItemRoot * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

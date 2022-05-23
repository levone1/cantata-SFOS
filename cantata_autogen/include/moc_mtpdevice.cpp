/****************************************************************************
** Meta object code from reading C++ file 'mtpdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devices/mtpdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtpdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MtpConnection_t {
    QByteArrayData data[38];
    char stringdata0[379];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MtpConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MtpConnection_t qt_meta_stringdata_MtpConnection = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MtpConnection"
QT_MOC_LITERAL(1, 14, 13), // "statusMessage"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "message"
QT_MOC_LITERAL(4, 37, 13), // "putSongStatus"
QT_MOC_LITERAL(5, 51, 13), // "getSongStatus"
QT_MOC_LITERAL(6, 65, 2), // "ok"
QT_MOC_LITERAL(7, 68, 11), // "copiedCover"
QT_MOC_LITERAL(8, 80, 13), // "delSongStatus"
QT_MOC_LITERAL(9, 94, 15), // "cleanDirsStatus"
QT_MOC_LITERAL(10, 110, 14), // "libraryUpdated"
QT_MOC_LITERAL(11, 125, 8), // "progress"
QT_MOC_LITERAL(12, 134, 13), // "deviceDetails"
QT_MOC_LITERAL(13, 148, 12), // "serialNumber"
QT_MOC_LITERAL(14, 161, 16), // "updatePercentage"
QT_MOC_LITERAL(15, 178, 5), // "cover"
QT_MOC_LITERAL(16, 184, 4), // "Song"
QT_MOC_LITERAL(17, 189, 1), // "s"
QT_MOC_LITERAL(18, 191, 3), // "img"
QT_MOC_LITERAL(19, 195, 15), // "connectToDevice"
QT_MOC_LITERAL(20, 211, 20), // "disconnectFromDevice"
QT_MOC_LITERAL(21, 232, 10), // "showStatus"
QT_MOC_LITERAL(22, 243, 13), // "updateLibrary"
QT_MOC_LITERAL(23, 257, 13), // "DeviceOptions"
QT_MOC_LITERAL(24, 271, 4), // "opts"
QT_MOC_LITERAL(25, 276, 7), // "putSong"
QT_MOC_LITERAL(26, 284, 4), // "song"
QT_MOC_LITERAL(27, 289, 5), // "fixVa"
QT_MOC_LITERAL(28, 295, 9), // "overwrite"
QT_MOC_LITERAL(29, 305, 9), // "copyCover"
QT_MOC_LITERAL(30, 315, 7), // "getSong"
QT_MOC_LITERAL(31, 323, 4), // "dest"
QT_MOC_LITERAL(32, 328, 7), // "delSong"
QT_MOC_LITERAL(33, 336, 9), // "cleanDirs"
QT_MOC_LITERAL(34, 346, 13), // "QSet<QString>"
QT_MOC_LITERAL(35, 360, 4), // "dirs"
QT_MOC_LITERAL(36, 365, 8), // "getCover"
QT_MOC_LITERAL(37, 374, 4) // "stop"

    },
    "MtpConnection\0statusMessage\0\0message\0"
    "putSongStatus\0getSongStatus\0ok\0"
    "copiedCover\0delSongStatus\0cleanDirsStatus\0"
    "libraryUpdated\0progress\0deviceDetails\0"
    "serialNumber\0updatePercentage\0cover\0"
    "Song\0s\0img\0connectToDevice\0"
    "disconnectFromDevice\0showStatus\0"
    "updateLibrary\0DeviceOptions\0opts\0"
    "putSong\0song\0fixVa\0overwrite\0copyCover\0"
    "getSong\0dest\0delSong\0cleanDirs\0"
    "QSet<QString>\0dirs\0getCover\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MtpConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       4,    4,  117,    2, 0x06 /* Public */,
       5,    2,  126,    2, 0x06 /* Public */,
       8,    1,  131,    2, 0x06 /* Public */,
       9,    1,  134,    2, 0x06 /* Public */,
      10,    0,  137,    2, 0x06 /* Public */,
      11,    1,  138,    2, 0x06 /* Public */,
      12,    1,  141,    2, 0x06 /* Public */,
      14,    1,  144,    2, 0x06 /* Public */,
      15,    2,  147,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  152,    2, 0x0a /* Public */,
      20,    1,  153,    2, 0x0a /* Public */,
      20,    0,  156,    2, 0x2a /* Public | MethodCloned */,
      22,    1,  157,    2, 0x0a /* Public */,
      25,    5,  160,    2, 0x0a /* Public */,
      30,    4,  171,    2, 0x0a /* Public */,
      32,    1,  180,    2, 0x0a /* Public */,
      33,    1,  183,    2, 0x0a /* Public */,
      36,    1,  186,    2, 0x0a /* Public */,
      37,    0,  189,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QImage,   17,   18,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 16, QMetaType::Bool, 0x80000000 | 23, QMetaType::Bool, QMetaType::Bool,   26,   27,   24,   28,   29,
    QMetaType::Void, 0x80000000 | 16, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   26,   31,   27,   29,
    QMetaType::Void, 0x80000000 | 16,   26,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 16,   26,
    QMetaType::Void,

       0        // eod
};

void MtpConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MtpConnection *_t = static_cast<MtpConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->putSongStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->getSongStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->delSongStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->cleanDirsStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->libraryUpdated(); break;
        case 6: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->deviceDetails((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->updatePercentage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->cover((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 10: _t->connectToDevice(); break;
        case 11: _t->disconnectFromDevice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->disconnectFromDevice(); break;
        case 13: _t->updateLibrary((*reinterpret_cast< const DeviceOptions(*)>(_a[1]))); break;
        case 14: _t->putSong((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const DeviceOptions(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 15: _t->getSong((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 16: _t->delSong((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 17: _t->cleanDirs((*reinterpret_cast< const QSet<QString>(*)>(_a[1]))); break;
        case 18: _t->getCover((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 19: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
            }
            break;
        case 18:
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
            typedef void (MtpConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpConnection::statusMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MtpConnection::*_t)(int , const QString & , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpConnection::putSongStatus)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MtpConnection::*_t)(bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpConnection::getSongStatus)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MtpConnection::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpConnection::delSongStatus)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MtpConnection::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpConnection::cleanDirsStatus)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MtpConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpConnection::libraryUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MtpConnection::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpConnection::progress)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MtpConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpConnection::deviceDetails)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MtpConnection::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpConnection::updatePercentage)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MtpConnection::*_t)(const Song & , const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpConnection::cover)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject MtpConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MtpConnection.data,
      qt_meta_data_MtpConnection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MtpConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MtpConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MtpConnection.stringdata0))
        return static_cast<void*>(const_cast< MtpConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int MtpConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void MtpConnection::statusMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MtpConnection::putSongStatus(int _t1, const QString & _t2, bool _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MtpConnection::getSongStatus(bool _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MtpConnection::delSongStatus(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MtpConnection::cleanDirsStatus(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MtpConnection::libraryUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void MtpConnection::progress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MtpConnection::deviceDetails(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MtpConnection::updatePercentage(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MtpConnection::cover(const Song & _t1, const QImage & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
struct qt_meta_stringdata_MtpDevice_t {
    QByteArrayData data[40];
    char stringdata0[379];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MtpDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MtpDevice_t qt_meta_stringdata_MtpDevice = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MtpDevice"
QT_MOC_LITERAL(1, 10, 13), // "updateLibrary"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "DeviceOptions"
QT_MOC_LITERAL(4, 39, 4), // "opts"
QT_MOC_LITERAL(5, 44, 7), // "putSong"
QT_MOC_LITERAL(6, 52, 4), // "Song"
QT_MOC_LITERAL(7, 57, 4), // "song"
QT_MOC_LITERAL(8, 62, 5), // "fixVa"
QT_MOC_LITERAL(9, 68, 9), // "overwrite"
QT_MOC_LITERAL(10, 78, 9), // "copyCover"
QT_MOC_LITERAL(11, 88, 7), // "getSong"
QT_MOC_LITERAL(12, 96, 4), // "dest"
QT_MOC_LITERAL(13, 101, 7), // "delSong"
QT_MOC_LITERAL(14, 109, 14), // "cleanMusicDirs"
QT_MOC_LITERAL(15, 124, 13), // "QSet<QString>"
QT_MOC_LITERAL(16, 138, 4), // "dirs"
QT_MOC_LITERAL(17, 143, 8), // "getCover"
QT_MOC_LITERAL(18, 152, 1), // "s"
QT_MOC_LITERAL(19, 154, 5), // "cover"
QT_MOC_LITERAL(20, 160, 3), // "img"
QT_MOC_LITERAL(21, 164, 13), // "deviceDetails"
QT_MOC_LITERAL(22, 178, 14), // "libraryUpdated"
QT_MOC_LITERAL(23, 193, 6), // "rescan"
QT_MOC_LITERAL(24, 200, 4), // "full"
QT_MOC_LITERAL(25, 205, 13), // "putSongStatus"
QT_MOC_LITERAL(26, 219, 6), // "status"
QT_MOC_LITERAL(27, 226, 4), // "file"
QT_MOC_LITERAL(28, 231, 7), // "fixedVa"
QT_MOC_LITERAL(29, 239, 11), // "copiedCover"
QT_MOC_LITERAL(30, 251, 19), // "transcodeSongResult"
QT_MOC_LITERAL(31, 271, 16), // "transcodePercent"
QT_MOC_LITERAL(32, 288, 7), // "percent"
QT_MOC_LITERAL(33, 296, 12), // "emitProgress"
QT_MOC_LITERAL(34, 309, 13), // "getSongStatus"
QT_MOC_LITERAL(35, 323, 2), // "ok"
QT_MOC_LITERAL(36, 326, 13), // "delSongStatus"
QT_MOC_LITERAL(37, 340, 15), // "cleanDirsStatus"
QT_MOC_LITERAL(38, 356, 14), // "saveProperties"
QT_MOC_LITERAL(39, 371, 7) // "newPath"

    },
    "MtpDevice\0updateLibrary\0\0DeviceOptions\0"
    "opts\0putSong\0Song\0song\0fixVa\0overwrite\0"
    "copyCover\0getSong\0dest\0delSong\0"
    "cleanMusicDirs\0QSet<QString>\0dirs\0"
    "getCover\0s\0cover\0img\0deviceDetails\0"
    "libraryUpdated\0rescan\0full\0putSongStatus\0"
    "status\0file\0fixedVa\0copiedCover\0"
    "transcodeSongResult\0transcodePercent\0"
    "percent\0emitProgress\0getSongStatus\0"
    "ok\0delSongStatus\0cleanDirsStatus\0"
    "saveProperties\0newPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MtpDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       5,    5,  117,    2, 0x06 /* Public */,
      11,    4,  128,    2, 0x06 /* Public */,
      13,    1,  137,    2, 0x06 /* Public */,
      14,    1,  140,    2, 0x06 /* Public */,
      17,    1,  143,    2, 0x06 /* Public */,
      19,    2,  146,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    1,  151,    2, 0x08 /* Private */,
      22,    0,  154,    2, 0x08 /* Private */,
      23,    1,  155,    2, 0x08 /* Private */,
      23,    0,  158,    2, 0x28 /* Private | MethodCloned */,
      25,    4,  159,    2, 0x08 /* Private */,
      30,    1,  168,    2, 0x08 /* Private */,
      31,    1,  171,    2, 0x08 /* Private */,
      33,    1,  174,    2, 0x08 /* Private */,
      34,    2,  177,    2, 0x08 /* Private */,
      36,    1,  182,    2, 0x08 /* Private */,
      37,    1,  185,    2, 0x08 /* Private */,
      38,    2,  188,    2, 0x08 /* Private */,
      38,    0,  193,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Bool, 0x80000000 | 3, QMetaType::Bool, QMetaType::Bool,    7,    8,    4,    9,   10,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    7,   12,    8,   10,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 6,   18,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QImage,   18,   20,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   26,   27,   28,   29,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   35,   29,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,   39,    4,
    QMetaType::Void,

       0        // eod
};

void MtpDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MtpDevice *_t = static_cast<MtpDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateLibrary((*reinterpret_cast< const DeviceOptions(*)>(_a[1]))); break;
        case 1: _t->putSong((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const DeviceOptions(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 2: _t->getSong((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->delSong((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 4: _t->cleanMusicDirs((*reinterpret_cast< const QSet<QString>(*)>(_a[1]))); break;
        case 5: _t->getCover((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 6: _t->cover((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 7: _t->deviceDetails((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->libraryUpdated(); break;
        case 9: _t->rescan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->rescan(); break;
        case 11: _t->putSongStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 12: _t->transcodeSongResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->transcodePercent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->emitProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->getSongStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->delSongStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->cleanDirsStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->saveProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const DeviceOptions(*)>(_a[2]))); break;
        case 19: _t->saveProperties(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QString> >(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MtpDevice::*_t)(const DeviceOptions & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpDevice::updateLibrary)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MtpDevice::*_t)(const Song & , bool , const DeviceOptions & , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpDevice::putSong)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MtpDevice::*_t)(const Song & , const QString & , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpDevice::getSong)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MtpDevice::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpDevice::delSong)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MtpDevice::*_t)(const QSet<QString> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpDevice::cleanMusicDirs)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MtpDevice::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpDevice::getCover)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MtpDevice::*_t)(const Song & , const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MtpDevice::cover)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject MtpDevice::staticMetaObject = {
    { &Device::staticMetaObject, qt_meta_stringdata_MtpDevice.data,
      qt_meta_data_MtpDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MtpDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MtpDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MtpDevice.stringdata0))
        return static_cast<void*>(const_cast< MtpDevice*>(this));
    return Device::qt_metacast(_clname);
}

int MtpDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Device::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void MtpDevice::updateLibrary(const DeviceOptions & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MtpDevice::putSong(const Song & _t1, bool _t2, const DeviceOptions & _t3, bool _t4, bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MtpDevice::getSong(const Song & _t1, const QString & _t2, bool _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MtpDevice::delSong(const Song & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MtpDevice::cleanMusicDirs(const QSet<QString> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MtpDevice::getCover(const Song & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MtpDevice::cover(const Song & _t1, const QImage & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

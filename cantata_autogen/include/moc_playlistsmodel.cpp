/****************************************************************************
** Meta object code from reading C++ file 'playlistsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/playlistsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlaylistsModel_t {
    QByteArrayData data[37];
    char stringdata0[393];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaylistsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaylistsModel_t qt_meta_stringdata_PlaylistsModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PlaylistsModel"
QT_MOC_LITERAL(1, 15, 3), // "add"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 5), // "files"
QT_MOC_LITERAL(4, 26, 13), // "listPlaylists"
QT_MOC_LITERAL(5, 40, 12), // "playlistInfo"
QT_MOC_LITERAL(6, 53, 4), // "name"
QT_MOC_LITERAL(7, 58, 13), // "addToPlaylist"
QT_MOC_LITERAL(8, 72, 5), // "songs"
QT_MOC_LITERAL(9, 78, 3), // "pos"
QT_MOC_LITERAL(10, 82, 4), // "size"
QT_MOC_LITERAL(11, 87, 14), // "moveInPlaylist"
QT_MOC_LITERAL(12, 102, 14), // "QList<quint32>"
QT_MOC_LITERAL(13, 117, 3), // "idx"
QT_MOC_LITERAL(14, 121, 8), // "addToNew"
QT_MOC_LITERAL(15, 130, 13), // "addToExisting"
QT_MOC_LITERAL(16, 144, 7), // "updated"
QT_MOC_LITERAL(17, 152, 15), // "playlistRemoved"
QT_MOC_LITERAL(18, 168, 3), // "key"
QT_MOC_LITERAL(19, 172, 12), // "setPlaylists"
QT_MOC_LITERAL(20, 185, 15), // "QList<Playlist>"
QT_MOC_LITERAL(21, 201, 9), // "playlists"
QT_MOC_LITERAL(22, 211, 21), // "playlistInfoRetrieved"
QT_MOC_LITERAL(23, 233, 11), // "QList<Song>"
QT_MOC_LITERAL(24, 245, 19), // "removedFromPlaylist"
QT_MOC_LITERAL(25, 265, 9), // "positions"
QT_MOC_LITERAL(26, 275, 15), // "movedInPlaylist"
QT_MOC_LITERAL(27, 291, 17), // "emitAddToExisting"
QT_MOC_LITERAL(28, 309, 15), // "playlistRenamed"
QT_MOC_LITERAL(29, 325, 4), // "from"
QT_MOC_LITERAL(30, 330, 2), // "to"
QT_MOC_LITERAL(31, 333, 25), // "mpdConnectionStateChanged"
QT_MOC_LITERAL(32, 359, 9), // "connected"
QT_MOC_LITERAL(33, 369, 11), // "coverLoaded"
QT_MOC_LITERAL(34, 381, 4), // "Song"
QT_MOC_LITERAL(35, 386, 4), // "song"
QT_MOC_LITERAL(36, 391, 1) // "s"

    },
    "PlaylistsModel\0add\0\0files\0listPlaylists\0"
    "playlistInfo\0name\0addToPlaylist\0songs\0"
    "pos\0size\0moveInPlaylist\0QList<quint32>\0"
    "idx\0addToNew\0addToExisting\0updated\0"
    "playlistRemoved\0key\0setPlaylists\0"
    "QList<Playlist>\0playlists\0"
    "playlistInfoRetrieved\0QList<Song>\0"
    "removedFromPlaylist\0positions\0"
    "movedInPlaylist\0emitAddToExisting\0"
    "playlistRenamed\0from\0to\0"
    "mpdConnectionStateChanged\0connected\0"
    "coverLoaded\0Song\0song\0s"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       4,    0,  107,    2, 0x06 /* Public */,
       5,    1,  108,    2, 0x06 /* Public */,
       7,    4,  111,    2, 0x06 /* Public */,
      11,    4,  120,    2, 0x06 /* Public */,
      14,    0,  129,    2, 0x06 /* Public */,
      15,    1,  130,    2, 0x06 /* Public */,
      16,    1,  133,    2, 0x06 /* Public */,
      17,    1,  136,    2, 0x06 /* Public */,
      16,    0,  139,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  140,    2, 0x08 /* Private */,
      22,    2,  143,    2, 0x08 /* Private */,
      24,    2,  148,    2, 0x08 /* Private */,
      26,    3,  153,    2, 0x08 /* Private */,
      27,    0,  160,    2, 0x08 /* Private */,
      28,    2,  161,    2, 0x08 /* Private */,
      31,    1,  166,    2, 0x08 /* Private */,
      33,    2,  169,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::UInt, QMetaType::UInt,    6,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12, QMetaType::UInt, QMetaType::UInt,    6,   13,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void, QMetaType::UInt,   18,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 23,    6,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12,    6,   25,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12, QMetaType::UInt,    6,   13,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   29,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, 0x80000000 | 34, QMetaType::Int,   35,   36,

       0        // eod
};

void PlaylistsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlaylistsModel *_t = static_cast<PlaylistsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->listPlaylists(); break;
        case 2: _t->playlistInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->addToPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4]))); break;
        case 4: _t->moveInPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<quint32>(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4]))); break;
        case 5: _t->addToNew(); break;
        case 6: _t->addToExisting((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->playlistRemoved((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 9: _t->updated(); break;
        case 10: _t->setPlaylists((*reinterpret_cast< const QList<Playlist>(*)>(_a[1]))); break;
        case 11: _t->playlistInfoRetrieved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<Song>(*)>(_a[2]))); break;
        case 12: _t->removedFromPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<quint32>(*)>(_a[2]))); break;
        case 13: _t->movedInPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<quint32>(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 14: _t->emitAddToExisting(); break;
        case 15: _t->playlistRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->mpdConnectionStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->coverLoaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 17:
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
            typedef void (PlaylistsModel::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistsModel::add)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlaylistsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistsModel::listPlaylists)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlaylistsModel::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistsModel::playlistInfo)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlaylistsModel::*_t)(const QString & , const QStringList & , quint32 , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistsModel::addToPlaylist)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PlaylistsModel::*_t)(const QString & , const QList<quint32> & , quint32 , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistsModel::moveInPlaylist)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PlaylistsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistsModel::addToNew)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PlaylistsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistsModel::addToExisting)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PlaylistsModel::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistsModel::updated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PlaylistsModel::*_t)(quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistsModel::playlistRemoved)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (PlaylistsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlaylistsModel::updated)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject PlaylistsModel::staticMetaObject = {
    { &ActionModel::staticMetaObject, qt_meta_stringdata_PlaylistsModel.data,
      qt_meta_data_PlaylistsModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlaylistsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistsModel.stringdata0))
        return static_cast<void*>(const_cast< PlaylistsModel*>(this));
    return ActionModel::qt_metacast(_clname);
}

int PlaylistsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void PlaylistsModel::add(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistsModel::listPlaylists()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PlaylistsModel::playlistInfo(const QString & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< PlaylistsModel *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlaylistsModel::addToPlaylist(const QString & _t1, const QStringList & _t2, quint32 _t3, quint32 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlaylistsModel::moveInPlaylist(const QString & _t1, const QList<quint32> & _t2, quint32 _t3, quint32 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlaylistsModel::addToNew()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void PlaylistsModel::addToExisting(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlaylistsModel::updated(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlaylistsModel::playlistRemoved(quint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PlaylistsModel::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

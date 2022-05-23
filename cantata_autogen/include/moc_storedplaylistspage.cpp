/****************************************************************************
** Meta object code from reading C++ file 'storedplaylistspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../playlists/storedplaylistspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'storedplaylistspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StoredPlaylistsPage_t {
    QByteArrayData data[31];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StoredPlaylistsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StoredPlaylistsPage_t qt_meta_stringdata_StoredPlaylistsPage = {
    {
QT_MOC_LITERAL(0, 0, 19), // "StoredPlaylistsPage"
QT_MOC_LITERAL(1, 20, 12), // "loadPlaylist"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "name"
QT_MOC_LITERAL(4, 39, 7), // "replace"
QT_MOC_LITERAL(5, 47, 14), // "removePlaylist"
QT_MOC_LITERAL(6, 62, 12), // "savePlaylist"
QT_MOC_LITERAL(7, 75, 9), // "overwrite"
QT_MOC_LITERAL(8, 85, 14), // "renamePlaylist"
QT_MOC_LITERAL(9, 100, 7), // "oldname"
QT_MOC_LITERAL(10, 108, 7), // "newname"
QT_MOC_LITERAL(11, 116, 18), // "removeFromPlaylist"
QT_MOC_LITERAL(12, 135, 14), // "QList<quint32>"
QT_MOC_LITERAL(13, 150, 9), // "positions"
QT_MOC_LITERAL(14, 160, 11), // "addToDevice"
QT_MOC_LITERAL(15, 172, 4), // "from"
QT_MOC_LITERAL(16, 177, 2), // "to"
QT_MOC_LITERAL(17, 180, 11), // "QList<Song>"
QT_MOC_LITERAL(18, 192, 5), // "songs"
QT_MOC_LITERAL(19, 198, 11), // "removeItems"
QT_MOC_LITERAL(20, 210, 16), // "removeDuplicates"
QT_MOC_LITERAL(21, 227, 13), // "removeInvalid"
QT_MOC_LITERAL(22, 241, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(23, 259, 5), // "index"
QT_MOC_LITERAL(24, 265, 7), // "updated"
QT_MOC_LITERAL(25, 273, 13), // "headerClicked"
QT_MOC_LITERAL(26, 287, 5), // "level"
QT_MOC_LITERAL(27, 293, 14), // "setStartClosed"
QT_MOC_LITERAL(28, 308, 2), // "sc"
QT_MOC_LITERAL(29, 311, 17), // "updateToPlayQueue"
QT_MOC_LITERAL(30, 329, 3) // "idx"

    },
    "StoredPlaylistsPage\0loadPlaylist\0\0"
    "name\0replace\0removePlaylist\0savePlaylist\0"
    "overwrite\0renamePlaylist\0oldname\0"
    "newname\0removeFromPlaylist\0QList<quint32>\0"
    "positions\0addToDevice\0from\0to\0QList<Song>\0"
    "songs\0removeItems\0removeDuplicates\0"
    "removeInvalid\0itemDoubleClicked\0index\0"
    "updated\0headerClicked\0level\0setStartClosed\0"
    "sc\0updateToPlayQueue\0idx"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StoredPlaylistsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x06 /* Public */,
       5,    1,   99,    2, 0x06 /* Public */,
       6,    2,  102,    2, 0x06 /* Public */,
       8,    2,  107,    2, 0x06 /* Public */,
      11,    2,  112,    2, 0x06 /* Public */,
      14,    3,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  124,    2, 0x0a /* Public */,
       6,    0,  125,    2, 0x08 /* Private */,
       8,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,
      21,    0,  128,    2, 0x08 /* Private */,
      22,    1,  129,    2, 0x08 /* Private */,
      24,    1,  132,    2, 0x08 /* Private */,
      25,    1,  135,    2, 0x08 /* Private */,
      27,    1,  138,    2, 0x08 /* Private */,
      29,    2,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12,    3,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 17,   15,   16,   18,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   23,
    QMetaType::Void, QMetaType::QModelIndex,   23,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Bool,   30,    4,

       0        // eod
};

void StoredPlaylistsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StoredPlaylistsPage *_t = static_cast<StoredPlaylistsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->removePlaylist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->savePlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->renamePlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->removeFromPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<quint32>(*)>(_a[2]))); break;
        case 5: _t->addToDevice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QList<Song>(*)>(_a[3]))); break;
        case 6: _t->removeItems(); break;
        case 7: _t->savePlaylist(); break;
        case 8: _t->renamePlaylist(); break;
        case 9: _t->removeDuplicates(); break;
        case 10: _t->removeInvalid(); break;
        case 11: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->updated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->headerClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->setStartClosed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->updateToPlayQueue((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
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
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StoredPlaylistsPage::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StoredPlaylistsPage::loadPlaylist)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StoredPlaylistsPage::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StoredPlaylistsPage::removePlaylist)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StoredPlaylistsPage::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StoredPlaylistsPage::savePlaylist)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (StoredPlaylistsPage::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StoredPlaylistsPage::renamePlaylist)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (StoredPlaylistsPage::*_t)(const QString & , const QList<quint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StoredPlaylistsPage::removeFromPlaylist)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (StoredPlaylistsPage::*_t)(const QString & , const QString & , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StoredPlaylistsPage::addToDevice)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject StoredPlaylistsPage::staticMetaObject = {
    { &SinglePageWidget::staticMetaObject, qt_meta_stringdata_StoredPlaylistsPage.data,
      qt_meta_data_StoredPlaylistsPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StoredPlaylistsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StoredPlaylistsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StoredPlaylistsPage.stringdata0))
        return static_cast<void*>(const_cast< StoredPlaylistsPage*>(this));
    return SinglePageWidget::qt_metacast(_clname);
}

int StoredPlaylistsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinglePageWidget::qt_metacall(_c, _id, _a);
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
void StoredPlaylistsPage::loadPlaylist(const QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StoredPlaylistsPage::removePlaylist(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void StoredPlaylistsPage::savePlaylist(const QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StoredPlaylistsPage::renamePlaylist(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void StoredPlaylistsPage::removeFromPlaylist(const QString & _t1, const QList<quint32> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void StoredPlaylistsPage::addToDevice(const QString & _t1, const QString & _t2, const QList<Song> & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE

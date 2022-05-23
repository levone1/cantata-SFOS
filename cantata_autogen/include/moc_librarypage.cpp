/****************************************************************************
** Meta object code from reading C++ file 'librarypage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gui/librarypage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarypage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibraryPage_t {
    QByteArrayData data[19];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibraryPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibraryPage_t qt_meta_stringdata_LibraryPage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LibraryPage"
QT_MOC_LITERAL(1, 12, 11), // "addToDevice"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "from"
QT_MOC_LITERAL(4, 30, 2), // "to"
QT_MOC_LITERAL(5, 33, 11), // "QList<Song>"
QT_MOC_LITERAL(6, 45, 5), // "songs"
QT_MOC_LITERAL(7, 51, 11), // "deleteSongs"
QT_MOC_LITERAL(8, 63, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(9, 81, 10), // "modelReset"
QT_MOC_LITERAL(10, 92, 14), // "groupByChanged"
QT_MOC_LITERAL(11, 107, 23), // "libraryAlbumSortChanged"
QT_MOC_LITERAL(12, 131, 21), // "albumAlbumSortChanged"
QT_MOC_LITERAL(13, 153, 23), // "showArtistImagesChanged"
QT_MOC_LITERAL(14, 177, 1), // "u"
QT_MOC_LITERAL(15, 179, 17), // "updateToPlayQueue"
QT_MOC_LITERAL(16, 197, 3), // "idx"
QT_MOC_LITERAL(17, 201, 7), // "replace"
QT_MOC_LITERAL(18, 209, 14) // "addRandomAlbum"

    },
    "LibraryPage\0addToDevice\0\0from\0to\0"
    "QList<Song>\0songs\0deleteSongs\0"
    "itemDoubleClicked\0modelReset\0"
    "groupByChanged\0libraryAlbumSortChanged\0"
    "albumAlbumSortChanged\0showArtistImagesChanged\0"
    "u\0updateToPlayQueue\0idx\0replace\0"
    "addRandomAlbum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x06 /* Public */,
       7,    2,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   76,    2, 0x0a /* Public */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,
      15,    2,   86,    2, 0x08 /* Private */,
      18,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Bool,   16,   17,
    QMetaType::Void,

       0        // eod
};

void LibraryPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LibraryPage *_t = static_cast<LibraryPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addToDevice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QList<Song>(*)>(_a[3]))); break;
        case 1: _t->deleteSongs((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<Song>(*)>(_a[2]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->modelReset(); break;
        case 4: _t->groupByChanged(); break;
        case 5: _t->libraryAlbumSortChanged(); break;
        case 6: _t->albumAlbumSortChanged(); break;
        case 7: _t->showArtistImagesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateToPlayQueue((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->addRandomAlbum(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LibraryPage::*_t)(const QString & , const QString & , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LibraryPage::addToDevice)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LibraryPage::*_t)(const QString & , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LibraryPage::deleteSongs)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject LibraryPage::staticMetaObject = {
    { &SinglePageWidget::staticMetaObject, qt_meta_stringdata_LibraryPage.data,
      qt_meta_data_LibraryPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibraryPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryPage.stringdata0))
        return static_cast<void*>(const_cast< LibraryPage*>(this));
    return SinglePageWidget::qt_metacast(_clname);
}

int LibraryPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinglePageWidget::qt_metacall(_c, _id, _a);
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
void LibraryPage::addToDevice(const QString & _t1, const QString & _t2, const QList<Song> & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LibraryPage::deleteSongs(const QString & _t1, const QList<Song> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

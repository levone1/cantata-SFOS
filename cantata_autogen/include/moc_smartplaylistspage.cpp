/****************************************************************************
** Meta object code from reading C++ file 'smartplaylistspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../playlists/smartplaylistspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smartplaylistspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SmartPlaylistsPage_t {
    QByteArrayData data[19];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SmartPlaylistsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SmartPlaylistsPage_t qt_meta_stringdata_SmartPlaylistsPage = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SmartPlaylistsPage"
QT_MOC_LITERAL(1, 19, 6), // "search"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "query"
QT_MOC_LITERAL(4, 33, 2), // "id"
QT_MOC_LITERAL(5, 36, 9), // "getRating"
QT_MOC_LITERAL(6, 46, 4), // "file"
QT_MOC_LITERAL(7, 51, 5), // "error"
QT_MOC_LITERAL(8, 57, 3), // "str"
QT_MOC_LITERAL(9, 61, 6), // "addNew"
QT_MOC_LITERAL(10, 68, 4), // "edit"
QT_MOC_LITERAL(11, 73, 6), // "remove"
QT_MOC_LITERAL(12, 80, 13), // "headerClicked"
QT_MOC_LITERAL(13, 94, 5), // "level"
QT_MOC_LITERAL(14, 100, 14), // "searchResponse"
QT_MOC_LITERAL(15, 115, 11), // "QList<Song>"
QT_MOC_LITERAL(16, 127, 5), // "songs"
QT_MOC_LITERAL(17, 133, 6), // "rating"
QT_MOC_LITERAL(18, 140, 3) // "val"

    },
    "SmartPlaylistsPage\0search\0\0query\0id\0"
    "getRating\0file\0error\0str\0addNew\0edit\0"
    "remove\0headerClicked\0level\0searchResponse\0"
    "QList<Song>\0songs\0rating\0val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SmartPlaylistsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,
       7,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   70,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    1,   73,    2, 0x08 /* Private */,
      14,    2,   76,    2, 0x08 /* Private */,
      17,    2,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,    4,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,    6,   18,

       0        // eod
};

void SmartPlaylistsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SmartPlaylistsPage *_t = static_cast<SmartPlaylistsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->search((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->getRating((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->addNew(); break;
        case 4: _t->edit(); break;
        case 5: _t->remove(); break;
        case 6: _t->headerClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->searchResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<Song>(*)>(_a[2]))); break;
        case 8: _t->rating((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
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
            typedef void (SmartPlaylistsPage::*_t)(const QByteArray & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SmartPlaylistsPage::search)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SmartPlaylistsPage::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SmartPlaylistsPage::getRating)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SmartPlaylistsPage::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SmartPlaylistsPage::error)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SmartPlaylistsPage::staticMetaObject = {
    { &SinglePageWidget::staticMetaObject, qt_meta_stringdata_SmartPlaylistsPage.data,
      qt_meta_data_SmartPlaylistsPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SmartPlaylistsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SmartPlaylistsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SmartPlaylistsPage.stringdata0))
        return static_cast<void*>(const_cast< SmartPlaylistsPage*>(this));
    return SinglePageWidget::qt_metacast(_clname);
}

int SmartPlaylistsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinglePageWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SmartPlaylistsPage::search(const QByteArray & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SmartPlaylistsPage::getRating(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SmartPlaylistsPage::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

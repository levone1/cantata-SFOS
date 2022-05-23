/****************************************************************************
** Meta object code from reading C++ file 'artistview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../context/artistview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'artistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ArtistView_t {
    QByteArrayData data[23];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArtistView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArtistView_t qt_meta_stringdata_ArtistView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ArtistView"
QT_MOC_LITERAL(1, 11, 10), // "findArtist"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "artist"
QT_MOC_LITERAL(4, 30, 9), // "findAlbum"
QT_MOC_LITERAL(5, 40, 5), // "album"
QT_MOC_LITERAL(6, 46, 11), // "artistImage"
QT_MOC_LITERAL(7, 58, 4), // "Song"
QT_MOC_LITERAL(8, 63, 4), // "song"
QT_MOC_LITERAL(9, 68, 1), // "i"
QT_MOC_LITERAL(10, 70, 1), // "f"
QT_MOC_LITERAL(11, 72, 18), // "artistImageUpdated"
QT_MOC_LITERAL(12, 91, 15), // "showContextMenu"
QT_MOC_LITERAL(13, 107, 3), // "pos"
QT_MOC_LITERAL(14, 111, 7), // "refresh"
QT_MOC_LITERAL(15, 119, 6), // "setBio"
QT_MOC_LITERAL(16, 126, 18), // "handleSimilarReply"
QT_MOC_LITERAL(17, 145, 4), // "show"
QT_MOC_LITERAL(18, 150, 3), // "url"
QT_MOC_LITERAL(19, 154, 10), // "clearCache"
QT_MOC_LITERAL(20, 165, 14), // "searchResponse"
QT_MOC_LITERAL(21, 180, 4), // "resp"
QT_MOC_LITERAL(22, 185, 4) // "lang"

    },
    "ArtistView\0findArtist\0\0artist\0findAlbum\0"
    "album\0artistImage\0Song\0song\0i\0f\0"
    "artistImageUpdated\0showContextMenu\0"
    "pos\0refresh\0setBio\0handleSimilarReply\0"
    "show\0url\0clearCache\0searchResponse\0"
    "resp\0lang"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArtistView[] = {

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
       1,    1,   69,    2, 0x06 /* Public */,
       4,    2,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   77,    2, 0x0a /* Public */,
      11,    3,   84,    2, 0x0a /* Public */,
      12,    1,   91,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,
      16,    0,   96,    2, 0x08 /* Private */,
      17,    1,   97,    2, 0x08 /* Private */,
      19,    0,  100,    2, 0x08 /* Private */,
      20,    2,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::QImage, QMetaType::QString,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QImage, QMetaType::QString,    8,    9,   10,
    QMetaType::Void, QMetaType::QPoint,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   21,   22,

       0        // eod
};

void ArtistView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArtistView *_t = static_cast<ArtistView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->findArtist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->findAlbum((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->artistImage((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->artistImageUpdated((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->refresh(); break;
        case 6: _t->setBio(); break;
        case 7: _t->handleSimilarReply(); break;
        case 8: _t->show((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 9: _t->clearCache(); break;
        case 10: _t->searchResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
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
        case 3:
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
            typedef void (ArtistView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ArtistView::findArtist)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ArtistView::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ArtistView::findAlbum)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ArtistView::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_ArtistView.data,
      qt_meta_data_ArtistView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ArtistView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArtistView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ArtistView.stringdata0))
        return static_cast<void*>(const_cast< ArtistView*>(this));
    return View::qt_metacast(_clname);
}

int ArtistView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ArtistView::findArtist(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ArtistView::findAlbum(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

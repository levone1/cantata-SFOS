/****************************************************************************
** Meta object code from reading C++ file 'albumview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../context/albumview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AlbumView_t {
    QByteArrayData data[17];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumView_t qt_meta_stringdata_AlbumView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AlbumView"
QT_MOC_LITERAL(1, 10, 8), // "playSong"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "file"
QT_MOC_LITERAL(4, 25, 14), // "coverRetrieved"
QT_MOC_LITERAL(5, 40, 4), // "Song"
QT_MOC_LITERAL(6, 45, 1), // "s"
QT_MOC_LITERAL(7, 47, 3), // "img"
QT_MOC_LITERAL(8, 51, 12), // "coverUpdated"
QT_MOC_LITERAL(9, 64, 1), // "u"
QT_MOC_LITERAL(10, 66, 15), // "showContextMenu"
QT_MOC_LITERAL(11, 82, 3), // "pos"
QT_MOC_LITERAL(12, 86, 7), // "refresh"
QT_MOC_LITERAL(13, 94, 10), // "clearCache"
QT_MOC_LITERAL(14, 105, 14), // "searchResponse"
QT_MOC_LITERAL(15, 120, 4), // "resp"
QT_MOC_LITERAL(16, 125, 4) // "lang"

    },
    "AlbumView\0playSong\0\0file\0coverRetrieved\0"
    "Song\0s\0img\0coverUpdated\0u\0showContextMenu\0"
    "pos\0refresh\0clearCache\0searchResponse\0"
    "resp\0lang"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   57,    2, 0x0a /* Public */,
       8,    3,   64,    2, 0x0a /* Public */,
       1,    1,   71,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    2,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QImage, QMetaType::QString,    6,    7,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QImage, QMetaType::QString,    6,    7,    3,
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   16,

       0        // eod
};

void AlbumView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlbumView *_t = static_cast<AlbumView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playSong((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->coverRetrieved((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->coverUpdated((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->playSong((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->refresh(); break;
        case 6: _t->clearCache(); break;
        case 7: _t->searchResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AlbumView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AlbumView::playSong)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AlbumView::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_AlbumView.data,
      qt_meta_data_AlbumView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AlbumView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumView.stringdata0))
        return static_cast<void*>(const_cast< AlbumView*>(this));
    return View::qt_metacast(_clname);
}

int AlbumView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AlbumView::playSong(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

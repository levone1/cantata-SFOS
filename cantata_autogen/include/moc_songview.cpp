/****************************************************************************
** Meta object code from reading C++ file 'songview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../context/songview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SongView_t {
    QByteArrayData data[24];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SongView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SongView_t qt_meta_stringdata_SongView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SongView"
QT_MOC_LITERAL(1, 9, 16), // "providersUpdated"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "downloadFinished"
QT_MOC_LITERAL(4, 44, 11), // "lyricsReady"
QT_MOC_LITERAL(5, 56, 6), // "lyrics"
QT_MOC_LITERAL(6, 63, 6), // "update"
QT_MOC_LITERAL(7, 70, 6), // "search"
QT_MOC_LITERAL(8, 77, 4), // "edit"
QT_MOC_LITERAL(9, 82, 3), // "del"
QT_MOC_LITERAL(10, 86, 15), // "showContextMenu"
QT_MOC_LITERAL(11, 102, 3), // "pos"
QT_MOC_LITERAL(12, 106, 19), // "showInfoContextMenu"
QT_MOC_LITERAL(13, 126, 12), // "toggleScroll"
QT_MOC_LITERAL(14, 139, 12), // "songPosition"
QT_MOC_LITERAL(15, 152, 6), // "scroll"
QT_MOC_LITERAL(16, 159, 17), // "curentViewChanged"
QT_MOC_LITERAL(17, 177, 11), // "refreshInfo"
QT_MOC_LITERAL(18, 189, 18), // "infoSearchResponse"
QT_MOC_LITERAL(19, 208, 4), // "resp"
QT_MOC_LITERAL(20, 213, 4), // "lang"
QT_MOC_LITERAL(21, 218, 15), // "abortInfoSearch"
QT_MOC_LITERAL(22, 234, 12), // "showMoreInfo"
QT_MOC_LITERAL(23, 247, 3) // "url"

    },
    "SongView\0providersUpdated\0\0downloadFinished\0"
    "lyricsReady\0lyrics\0update\0search\0edit\0"
    "del\0showContextMenu\0pos\0showInfoContextMenu\0"
    "toggleScroll\0songPosition\0scroll\0"
    "curentViewChanged\0refreshInfo\0"
    "infoSearchResponse\0resp\0lang\0"
    "abortInfoSearch\0showMoreInfo\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SongView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  100,    2, 0x0a /* Public */,
       4,    2,  101,    2, 0x0a /* Public */,
       6,    0,  106,    2, 0x0a /* Public */,
       7,    0,  107,    2, 0x0a /* Public */,
       8,    0,  108,    2, 0x0a /* Public */,
       9,    0,  109,    2, 0x0a /* Public */,
      10,    1,  110,    2, 0x0a /* Public */,
      12,    1,  113,    2, 0x0a /* Public */,
      13,    0,  116,    2, 0x08 /* Private */,
      14,    0,  117,    2, 0x08 /* Private */,
      15,    0,  118,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    2,  121,    2, 0x08 /* Private */,
      21,    0,  126,    2, 0x08 /* Private */,
      22,    1,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   23,

       0        // eod
};

void SongView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SongView *_t = static_cast<SongView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->providersUpdated(); break;
        case 1: _t->downloadFinished(); break;
        case 2: _t->lyricsReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->update(); break;
        case 4: _t->search(); break;
        case 5: _t->edit(); break;
        case 6: _t->del(); break;
        case 7: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 8: _t->showInfoContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->toggleScroll(); break;
        case 10: _t->songPosition(); break;
        case 11: _t->scroll(); break;
        case 12: _t->curentViewChanged(); break;
        case 13: _t->refreshInfo(); break;
        case 14: _t->infoSearchResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->abortInfoSearch(); break;
        case 16: _t->showMoreInfo((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SongView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SongView::providersUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SongView::staticMetaObject = {
    { &View::staticMetaObject, qt_meta_stringdata_SongView.data,
      qt_meta_data_SongView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SongView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SongView.stringdata0))
        return static_cast<void*>(const_cast< SongView*>(this));
    return View::qt_metacast(_clname);
}

int SongView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = View::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void SongView::providersUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

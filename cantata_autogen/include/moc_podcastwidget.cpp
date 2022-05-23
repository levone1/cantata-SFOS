/****************************************************************************
** Meta object code from reading C++ file 'podcastwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../online/podcastwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcastwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PodcastWidget_t {
    QByteArrayData data[13];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PodcastWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PodcastWidget_t qt_meta_stringdata_PodcastWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PodcastWidget"
QT_MOC_LITERAL(1, 14, 13), // "headerClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "level"
QT_MOC_LITERAL(4, 35, 9), // "subscribe"
QT_MOC_LITERAL(5, 45, 11), // "unSubscribe"
QT_MOC_LITERAL(6, 57, 8), // "download"
QT_MOC_LITERAL(7, 66, 14), // "cancelDownload"
QT_MOC_LITERAL(8, 81, 14), // "deleteDownload"
QT_MOC_LITERAL(9, 96, 9), // "markAsNew"
QT_MOC_LITERAL(10, 106, 14), // "markAsListened"
QT_MOC_LITERAL(11, 121, 9), // "configure"
QT_MOC_LITERAL(12, 131, 19) // "exportSubscriptions"

    },
    "PodcastWidget\0headerClicked\0\0level\0"
    "subscribe\0unSubscribe\0download\0"
    "cancelDownload\0deleteDownload\0markAsNew\0"
    "markAsListened\0configure\0exportSubscriptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PodcastWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PodcastWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PodcastWidget *_t = static_cast<PodcastWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->headerClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->subscribe(); break;
        case 2: _t->unSubscribe(); break;
        case 3: _t->download(); break;
        case 4: _t->cancelDownload(); break;
        case 5: _t->deleteDownload(); break;
        case 6: _t->markAsNew(); break;
        case 7: _t->markAsListened(); break;
        case 8: _t->configure(); break;
        case 9: _t->exportSubscriptions(); break;
        default: ;
        }
    }
}

const QMetaObject PodcastWidget::staticMetaObject = {
    { &SinglePageWidget::staticMetaObject, qt_meta_stringdata_PodcastWidget.data,
      qt_meta_data_PodcastWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PodcastWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PodcastWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastWidget.stringdata0))
        return static_cast<void*>(const_cast< PodcastWidget*>(this));
    return SinglePageWidget::qt_metacast(_clname);
}

int PodcastWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

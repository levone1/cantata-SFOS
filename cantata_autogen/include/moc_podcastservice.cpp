/****************************************************************************
** Meta object code from reading C++ file 'podcastservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../online/podcastservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcastservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PodcastService_t {
    QByteArrayData data[15];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PodcastService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PodcastService_t qt_meta_stringdata_PodcastService = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PodcastService"
QT_MOC_LITERAL(1, 15, 5), // "error"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "msg"
QT_MOC_LITERAL(4, 26, 8), // "newError"
QT_MOC_LITERAL(5, 35, 7), // "loadAll"
QT_MOC_LITERAL(6, 43, 14), // "rssJobFinished"
QT_MOC_LITERAL(7, 58, 9), // "updateRss"
QT_MOC_LITERAL(8, 68, 14), // "currentMpdSong"
QT_MOC_LITERAL(9, 83, 4), // "Song"
QT_MOC_LITERAL(10, 88, 1), // "s"
QT_MOC_LITERAL(11, 90, 19), // "downloadJobFinished"
QT_MOC_LITERAL(12, 110, 17), // "downloadReadyRead"
QT_MOC_LITERAL(13, 128, 15), // "downloadPercent"
QT_MOC_LITERAL(14, 144, 2) // "pc"

    },
    "PodcastService\0error\0\0msg\0newError\0"
    "loadAll\0rssJobFinished\0updateRss\0"
    "currentMpdSong\0Song\0s\0downloadJobFinished\0"
    "downloadReadyRead\0downloadPercent\0pc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PodcastService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   65,    2, 0x08 /* Private */,
       6,    0,   66,    2, 0x08 /* Private */,
       7,    0,   67,    2, 0x08 /* Private */,
       8,    1,   68,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,
      12,    0,   72,    2, 0x08 /* Private */,
      13,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void PodcastService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PodcastService *_t = static_cast<PodcastService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->newError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->loadAll(); break;
        case 3: _t->rssJobFinished(); break;
        case 4: _t->updateRss(); break;
        case 5: _t->currentMpdSong((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 6: _t->downloadJobFinished(); break;
        case 7: _t->downloadReadyRead(); break;
        case 8: _t->downloadPercent((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
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
            typedef void (PodcastService::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PodcastService::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PodcastService::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PodcastService::newError)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PodcastService::staticMetaObject = {
    { &ActionModel::staticMetaObject, qt_meta_stringdata_PodcastService.data,
      qt_meta_data_PodcastService,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PodcastService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PodcastService::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastService.stringdata0))
        return static_cast<void*>(const_cast< PodcastService*>(this));
    if (!strcmp(_clname, "OnlineService"))
        return static_cast< OnlineService*>(const_cast< PodcastService*>(this));
    return ActionModel::qt_metacast(_clname);
}

int PodcastService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionModel::qt_metacall(_c, _id, _a);
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
void PodcastService::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PodcastService::newError(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'streamsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/streamsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StreamsModel_t {
    QByteArrayData data[27];
    char stringdata0[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamsModel_t qt_meta_stringdata_StreamsModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "StreamsModel"
QT_MOC_LITERAL(1, 13, 7), // "loading"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "loaded"
QT_MOC_LITERAL(4, 29, 5), // "error"
QT_MOC_LITERAL(5, 35, 3), // "msg"
QT_MOC_LITERAL(6, 39, 17), // "categoriesChanged"
QT_MOC_LITERAL(7, 57, 20), // "listFavouriteStreams"
QT_MOC_LITERAL(8, 78, 19), // "saveFavouriteStream"
QT_MOC_LITERAL(9, 98, 3), // "url"
QT_MOC_LITERAL(10, 102, 4), // "name"
QT_MOC_LITERAL(11, 107, 22), // "removeFavouriteStreams"
QT_MOC_LITERAL(12, 130, 14), // "QList<quint32>"
QT_MOC_LITERAL(13, 145, 9), // "positions"
QT_MOC_LITERAL(14, 155, 19), // "editFavouriteStream"
QT_MOC_LITERAL(15, 175, 8), // "position"
QT_MOC_LITERAL(16, 184, 16), // "favouritesLoaded"
QT_MOC_LITERAL(17, 201, 17), // "addedToFavourites"
QT_MOC_LITERAL(18, 219, 11), // "jobFinished"
QT_MOC_LITERAL(19, 231, 20), // "savedFavouriteStream"
QT_MOC_LITERAL(20, 252, 23), // "removedFavouriteStreams"
QT_MOC_LITERAL(21, 276, 7), // "removed"
QT_MOC_LITERAL(22, 284, 16), // "favouriteStreams"
QT_MOC_LITERAL(23, 301, 13), // "QList<Stream>"
QT_MOC_LITERAL(24, 315, 7), // "streams"
QT_MOC_LITERAL(25, 323, 18), // "mpdConnectionState"
QT_MOC_LITERAL(26, 342, 1) // "c"

    },
    "StreamsModel\0loading\0\0loaded\0error\0"
    "msg\0categoriesChanged\0listFavouriteStreams\0"
    "saveFavouriteStream\0url\0name\0"
    "removeFavouriteStreams\0QList<quint32>\0"
    "positions\0editFavouriteStream\0position\0"
    "favouritesLoaded\0addedToFavourites\0"
    "jobFinished\0savedFavouriteStream\0"
    "removedFavouriteStreams\0removed\0"
    "favouriteStreams\0QList<Stream>\0streams\0"
    "mpdConnectionState\0c"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    1,   91,    2, 0x06 /* Public */,
       6,    0,   94,    2, 0x06 /* Public */,
       7,    0,   95,    2, 0x06 /* Public */,
       8,    2,   96,    2, 0x06 /* Public */,
      11,    1,  101,    2, 0x06 /* Public */,
      14,    3,  104,    2, 0x06 /* Public */,
      16,    0,  111,    2, 0x06 /* Public */,
      17,    1,  112,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  115,    2, 0x08 /* Private */,
      19,    2,  116,    2, 0x08 /* Private */,
      20,    1,  121,    2, 0x08 /* Private */,
      22,    1,  124,    2, 0x08 /* Private */,
      25,    1,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    9,   10,   15,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Bool,   26,

       0        // eod
};

void StreamsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StreamsModel *_t = static_cast<StreamsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loading(); break;
        case 1: _t->loaded(); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->categoriesChanged(); break;
        case 4: _t->listFavouriteStreams(); break;
        case 5: _t->saveFavouriteStream((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->removeFavouriteStreams((*reinterpret_cast< const QList<quint32>(*)>(_a[1]))); break;
        case 7: _t->editFavouriteStream((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 8: _t->favouritesLoaded(); break;
        case 9: _t->addedToFavourites((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->jobFinished(); break;
        case 11: _t->savedFavouriteStream((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->removedFavouriteStreams((*reinterpret_cast< const QList<quint32>(*)>(_a[1]))); break;
        case 13: _t->favouriteStreams((*reinterpret_cast< const QList<Stream>(*)>(_a[1]))); break;
        case 14: _t->mpdConnectionState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StreamsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamsModel::loading)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StreamsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamsModel::loaded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StreamsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamsModel::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (StreamsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamsModel::categoriesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (StreamsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamsModel::listFavouriteStreams)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (StreamsModel::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamsModel::saveFavouriteStream)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (StreamsModel::*_t)(const QList<quint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamsModel::removeFavouriteStreams)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (StreamsModel::*_t)(const QString & , const QString & , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamsModel::editFavouriteStream)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (StreamsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamsModel::favouritesLoaded)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (StreamsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamsModel::addedToFavourites)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject StreamsModel::staticMetaObject = {
    { &ActionModel::staticMetaObject, qt_meta_stringdata_StreamsModel.data,
      qt_meta_data_StreamsModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StreamsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StreamsModel.stringdata0))
        return static_cast<void*>(const_cast< StreamsModel*>(this));
    return ActionModel::qt_metacast(_clname);
}

int StreamsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void StreamsModel::loading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void StreamsModel::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void StreamsModel::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StreamsModel::categoriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void StreamsModel::listFavouriteStreams()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void StreamsModel::saveFavouriteStream(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void StreamsModel::removeFavouriteStreams(const QList<quint32> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void StreamsModel::editFavouriteStream(const QString & _t1, const QString & _t2, quint32 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void StreamsModel::favouritesLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void StreamsModel::addedToFavourites(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE

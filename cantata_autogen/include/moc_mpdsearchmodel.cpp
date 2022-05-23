/****************************************************************************
** Meta object code from reading C++ file 'mpdsearchmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/mpdsearchmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpdsearchmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MpdSearchModel_t {
    QByteArrayData data[17];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MpdSearchModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MpdSearchModel_t qt_meta_stringdata_MpdSearchModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MpdSearchModel"
QT_MOC_LITERAL(1, 15, 6), // "search"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "field"
QT_MOC_LITERAL(4, 29, 5), // "value"
QT_MOC_LITERAL(5, 35, 2), // "id"
QT_MOC_LITERAL(6, 38, 9), // "getRating"
QT_MOC_LITERAL(7, 48, 4), // "file"
QT_MOC_LITERAL(8, 53, 14), // "searchFinished"
QT_MOC_LITERAL(9, 68, 11), // "QList<Song>"
QT_MOC_LITERAL(10, 80, 6), // "result"
QT_MOC_LITERAL(11, 87, 11), // "coverLoaded"
QT_MOC_LITERAL(12, 99, 4), // "Song"
QT_MOC_LITERAL(13, 104, 4), // "song"
QT_MOC_LITERAL(14, 109, 1), // "s"
QT_MOC_LITERAL(15, 111, 12), // "ratingResult"
QT_MOC_LITERAL(16, 124, 1) // "r"

    },
    "MpdSearchModel\0search\0\0field\0value\0"
    "id\0getRating\0file\0searchFinished\0"
    "QList<Song>\0result\0coverLoaded\0Song\0"
    "song\0s\0ratingResult\0r"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MpdSearchModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,
       6,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   49,    2, 0x08 /* Private */,
      11,    2,   54,    2, 0x08 /* Private */,
      15,    2,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    5,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,    7,   16,

       0        // eod
};

void MpdSearchModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MpdSearchModel *_t = static_cast<MpdSearchModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->search((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->getRating((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->searchFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<Song>(*)>(_a[2]))); break;
        case 3: _t->coverLoaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->ratingResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
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
            typedef void (MpdSearchModel::*_t)(const QString & , const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpdSearchModel::search)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MpdSearchModel::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpdSearchModel::getRating)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MpdSearchModel::staticMetaObject = {
    { &SearchModel::staticMetaObject, qt_meta_stringdata_MpdSearchModel.data,
      qt_meta_data_MpdSearchModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MpdSearchModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpdSearchModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MpdSearchModel.stringdata0))
        return static_cast<void*>(const_cast< MpdSearchModel*>(this));
    return SearchModel::qt_metacast(_clname);
}

int MpdSearchModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SearchModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void MpdSearchModel::search(const QString & _t1, const QString & _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MpdSearchModel::getRating(const QString & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< MpdSearchModel *>(this), &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

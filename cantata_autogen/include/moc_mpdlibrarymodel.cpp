/****************************************************************************
** Meta object code from reading C++ file 'mpdlibrarymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/mpdlibrarymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpdlibrarymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MpdLibraryModel_t {
    QByteArrayData data[14];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MpdLibraryModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MpdLibraryModel_t qt_meta_stringdata_MpdLibraryModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MpdLibraryModel"
QT_MOC_LITERAL(1, 16, 11), // "songListing"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "QList<Song>"
QT_MOC_LITERAL(4, 41, 5), // "songs"
QT_MOC_LITERAL(5, 47, 2), // "pc"
QT_MOC_LITERAL(6, 50, 13), // "listNextChunk"
QT_MOC_LITERAL(7, 64, 5), // "cover"
QT_MOC_LITERAL(8, 70, 4), // "Song"
QT_MOC_LITERAL(9, 75, 4), // "song"
QT_MOC_LITERAL(10, 80, 3), // "img"
QT_MOC_LITERAL(11, 84, 4), // "file"
QT_MOC_LITERAL(12, 89, 12), // "coverUpdated"
QT_MOC_LITERAL(13, 102, 11) // "artistImage"

    },
    "MpdLibraryModel\0songListing\0\0QList<Song>\0"
    "songs\0pc\0listNextChunk\0cover\0Song\0"
    "song\0img\0file\0coverUpdated\0artistImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MpdLibraryModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   44,    2, 0x08 /* Private */,
       7,    3,   45,    2, 0x08 /* Private */,
      12,    3,   52,    2, 0x08 /* Private */,
      13,    3,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QImage, QMetaType::QString,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QImage, QMetaType::QString,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QImage, QMetaType::QString,    9,   10,   11,

       0        // eod
};

void MpdLibraryModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MpdLibraryModel *_t = static_cast<MpdLibraryModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->songListing((*reinterpret_cast< const QList<Song>(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->listNextChunk(); break;
        case 2: _t->cover((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->coverUpdated((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->artistImage((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
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
        case 4:
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
            typedef void (MpdLibraryModel::*_t)(const QList<Song> & , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpdLibraryModel::songListing)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MpdLibraryModel::staticMetaObject = {
    { &SqlLibraryModel::staticMetaObject, qt_meta_stringdata_MpdLibraryModel.data,
      qt_meta_data_MpdLibraryModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MpdLibraryModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpdLibraryModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MpdLibraryModel.stringdata0))
        return static_cast<void*>(const_cast< MpdLibraryModel*>(this));
    return SqlLibraryModel::qt_metacast(_clname);
}

int MpdLibraryModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SqlLibraryModel::qt_metacall(_c, _id, _a);
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
void MpdLibraryModel::songListing(const QList<Song> & _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'onlinedb.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../db/onlinedb.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'onlinedb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OnlineDb_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OnlineDb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OnlineDb_t qt_meta_stringdata_OnlineDb = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OnlineDb"
QT_MOC_LITERAL(1, 9, 11), // "startUpdate"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "endUpdate"
QT_MOC_LITERAL(4, 32, 13), // "storeCoverUrl"
QT_MOC_LITERAL(5, 46, 8), // "artistId"
QT_MOC_LITERAL(6, 55, 7), // "albumId"
QT_MOC_LITERAL(7, 63, 3), // "url"
QT_MOC_LITERAL(8, 67, 11), // "insertStats"
QT_MOC_LITERAL(9, 79, 10) // "numArtists"

    },
    "OnlineDb\0startUpdate\0\0endUpdate\0"
    "storeCoverUrl\0artistId\0albumId\0url\0"
    "insertStats\0numArtists"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OnlineDb[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    3,   36,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void OnlineDb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OnlineDb *_t = static_cast<OnlineDb *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startUpdate(); break;
        case 1: _t->endUpdate(); break;
        case 2: _t->storeCoverUrl((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->insertStats((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OnlineDb::staticMetaObject = {
    { &LibraryDb::staticMetaObject, qt_meta_stringdata_OnlineDb.data,
      qt_meta_data_OnlineDb,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OnlineDb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OnlineDb::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OnlineDb.stringdata0))
        return static_cast<void*>(const_cast< OnlineDb*>(this));
    return LibraryDb::qt_metacast(_clname);
}

int OnlineDb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LibraryDb::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'mpdlibrarydb.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../db/mpdlibrarydb.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpdlibrarydb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MpdLibraryDb_t {
    QByteArrayData data[9];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MpdLibraryDb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MpdLibraryDb_t qt_meta_stringdata_MpdLibraryDb = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MpdLibraryDb"
QT_MOC_LITERAL(1, 13, 11), // "loadLibrary"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 17), // "connectionChanged"
QT_MOC_LITERAL(4, 44, 20), // "MPDConnectionDetails"
QT_MOC_LITERAL(5, 65, 7), // "details"
QT_MOC_LITERAL(6, 73, 12), // "statsUpdated"
QT_MOC_LITERAL(7, 86, 14), // "MPDStatsValues"
QT_MOC_LITERAL(8, 101, 5) // "stats"

    },
    "MpdLibraryDb\0loadLibrary\0\0connectionChanged\0"
    "MPDConnectionDetails\0details\0statsUpdated\0"
    "MPDStatsValues\0stats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MpdLibraryDb[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       6,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void MpdLibraryDb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MpdLibraryDb *_t = static_cast<MpdLibraryDb *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadLibrary(); break;
        case 1: _t->connectionChanged((*reinterpret_cast< const MPDConnectionDetails(*)>(_a[1]))); break;
        case 2: _t->statsUpdated((*reinterpret_cast< const MPDStatsValues(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MpdLibraryDb::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpdLibraryDb::loadLibrary)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MpdLibraryDb::staticMetaObject = {
    { &LibraryDb::staticMetaObject, qt_meta_stringdata_MpdLibraryDb.data,
      qt_meta_data_MpdLibraryDb,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MpdLibraryDb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpdLibraryDb::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MpdLibraryDb.stringdata0))
        return static_cast<void*>(const_cast< MpdLibraryDb*>(this));
    return LibraryDb::qt_metacast(_clname);
}

int MpdLibraryDb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LibraryDb::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MpdLibraryDb::loadLibrary()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

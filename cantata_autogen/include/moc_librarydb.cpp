/****************************************************************************
** Meta object code from reading C++ file 'librarydb.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../db/librarydb.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarydb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LibraryDb_t {
    QByteArrayData data[13];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibraryDb_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibraryDb_t qt_meta_stringdata_LibraryDb = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LibraryDb"
QT_MOC_LITERAL(1, 10, 14), // "libraryUpdated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "error"
QT_MOC_LITERAL(4, 32, 3), // "str"
QT_MOC_LITERAL(5, 36, 13), // "updateStarted"
QT_MOC_LITERAL(6, 50, 6), // "time_t"
QT_MOC_LITERAL(7, 57, 3), // "ver"
QT_MOC_LITERAL(8, 61, 11), // "insertSongs"
QT_MOC_LITERAL(9, 73, 12), // "QList<Song>*"
QT_MOC_LITERAL(10, 86, 5), // "songs"
QT_MOC_LITERAL(11, 92, 14), // "updateFinished"
QT_MOC_LITERAL(12, 107, 11) // "abortUpdate"

    },
    "LibraryDb\0libraryUpdated\0\0error\0str\0"
    "updateStarted\0time_t\0ver\0insertSongs\0"
    "QList<Song>*\0songs\0updateFinished\0"
    "abortUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryDb[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   48,    2, 0x0a /* Public */,
       8,    1,   51,    2, 0x0a /* Public */,
      11,    0,   54,    2, 0x0a /* Public */,
      12,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LibraryDb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LibraryDb *_t = static_cast<LibraryDb *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->libraryUpdated(); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->updateStarted((*reinterpret_cast< time_t(*)>(_a[1]))); break;
        case 3: _t->insertSongs((*reinterpret_cast< QList<Song>*(*)>(_a[1]))); break;
        case 4: _t->updateFinished(); break;
        case 5: _t->abortUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LibraryDb::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LibraryDb::libraryUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LibraryDb::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LibraryDb::error)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject LibraryDb::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LibraryDb.data,
      qt_meta_data_LibraryDb,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LibraryDb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryDb::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryDb.stringdata0))
        return static_cast<void*>(const_cast< LibraryDb*>(this));
    return QObject::qt_metacast(_clname);
}

int LibraryDb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void LibraryDb::libraryUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void LibraryDb::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

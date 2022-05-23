/****************************************************************************
** Meta object code from reading C++ file 'currentcover.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gui/currentcover.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'currentcover.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CurrentCover_t {
    QByteArrayData data[11];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurrentCover_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurrentCover_t qt_meta_stringdata_CurrentCover = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CurrentCover"
QT_MOC_LITERAL(1, 13, 10), // "coverImage"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "img"
QT_MOC_LITERAL(4, 29, 9), // "coverFile"
QT_MOC_LITERAL(5, 39, 4), // "name"
QT_MOC_LITERAL(6, 44, 14), // "coverRetrieved"
QT_MOC_LITERAL(7, 59, 4), // "Song"
QT_MOC_LITERAL(8, 64, 1), // "s"
QT_MOC_LITERAL(9, 66, 4), // "file"
QT_MOC_LITERAL(10, 71, 10) // "setDefault"

    },
    "CurrentCover\0coverImage\0\0img\0coverFile\0"
    "name\0coverRetrieved\0Song\0s\0file\0"
    "setDefault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurrentCover[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   40,    2, 0x08 /* Private */,
      10,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::QImage, QMetaType::QString,    8,    3,    9,
    QMetaType::Void,

       0        // eod
};

void CurrentCover::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CurrentCover *_t = static_cast<CurrentCover *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->coverImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->coverFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->coverRetrieved((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->setDefault(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
            typedef void (CurrentCover::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurrentCover::coverImage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CurrentCover::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CurrentCover::coverFile)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CurrentCover::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CurrentCover.data,
      qt_meta_data_CurrentCover,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CurrentCover::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurrentCover::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CurrentCover.stringdata0))
        return static_cast<void*>(const_cast< CurrentCover*>(this));
    return QObject::qt_metacast(_clname);
}

int CurrentCover::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CurrentCover::coverImage(const QImage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CurrentCover::coverFile(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

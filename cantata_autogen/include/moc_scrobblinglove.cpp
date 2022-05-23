/****************************************************************************
** Meta object code from reading C++ file 'scrobblinglove.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../scrobbling/scrobblinglove.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scrobblinglove.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ScrobblingLove_t {
    QByteArrayData data[6];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScrobblingLove_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScrobblingLove_t qt_meta_stringdata_ScrobblingLove = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ScrobblingLove"
QT_MOC_LITERAL(1, 15, 8), // "sendLove"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "songChanged"
QT_MOC_LITERAL(4, 37, 5), // "valid"
QT_MOC_LITERAL(5, 43, 16) // "scrobblerChanged"

    },
    "ScrobblingLove\0sendLove\0\0songChanged\0"
    "valid\0scrobblerChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScrobblingLove[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

       0        // eod
};

void ScrobblingLove::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScrobblingLove *_t = static_cast<ScrobblingLove *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendLove(); break;
        case 1: _t->songChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->scrobblerChanged(); break;
        default: ;
        }
    }
}

const QMetaObject ScrobblingLove::staticMetaObject = {
    { &ToolButton::staticMetaObject, qt_meta_stringdata_ScrobblingLove.data,
      qt_meta_data_ScrobblingLove,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ScrobblingLove::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrobblingLove::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ScrobblingLove.stringdata0))
        return static_cast<void*>(const_cast< ScrobblingLove*>(this));
    return ToolButton::qt_metacast(_clname);
}

int ScrobblingLove::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolButton::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'streamssettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../streams/streamssettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamssettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StreamsSettings_t {
    QByteArrayData data[7];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamsSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamsSettings_t qt_meta_stringdata_StreamsSettings = {
    {
QT_MOC_LITERAL(0, 0, 15), // "StreamsSettings"
QT_MOC_LITERAL(1, 16, 11), // "raiseWindow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "currentCategoryChanged"
QT_MOC_LITERAL(4, 52, 3), // "row"
QT_MOC_LITERAL(5, 56, 15), // "installFromFile"
QT_MOC_LITERAL(6, 72, 14) // "installFromWeb"

    },
    "StreamsSettings\0raiseWindow\0\0"
    "currentCategoryChanged\0row\0installFromFile\0"
    "installFromWeb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamsSettings[] = {

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
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StreamsSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StreamsSettings *_t = static_cast<StreamsSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->raiseWindow(); break;
        case 1: _t->currentCategoryChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->installFromFile(); break;
        case 3: _t->installFromWeb(); break;
        default: ;
        }
    }
}

const QMetaObject StreamsSettings::staticMetaObject = {
    { &Dialog::staticMetaObject, qt_meta_stringdata_StreamsSettings.data,
      qt_meta_data_StreamsSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StreamsSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamsSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StreamsSettings.stringdata0))
        return static_cast<void*>(const_cast< StreamsSettings*>(this));
    return Dialog::qt_metacast(_clname);
}

int StreamsSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
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

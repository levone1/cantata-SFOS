/****************************************************************************
** Meta object code from reading C++ file 'serversettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gui/serversettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serversettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ServerSettings_t {
    QByteArrayData data[8];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ServerSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ServerSettings_t qt_meta_stringdata_ServerSettings = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ServerSettings"
QT_MOC_LITERAL(1, 15, 11), // "showDetails"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "index"
QT_MOC_LITERAL(4, 34, 3), // "add"
QT_MOC_LITERAL(5, 38, 6), // "remove"
QT_MOC_LITERAL(6, 45, 11), // "nameChanged"
QT_MOC_LITERAL(7, 57, 15) // "basicDirChanged"

    },
    "ServerSettings\0showDetails\0\0index\0add\0"
    "remove\0nameChanged\0basicDirChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ServerSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ServerSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ServerSettings *_t = static_cast<ServerSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showDetails((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->add(); break;
        case 2: _t->remove(); break;
        case 3: _t->nameChanged(); break;
        case 4: _t->basicDirChanged(); break;
        default: ;
        }
    }
}

const QMetaObject ServerSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ServerSettings.data,
      qt_meta_data_ServerSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ServerSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ServerSettings.stringdata0))
        return static_cast<void*>(const_cast< ServerSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int ServerSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

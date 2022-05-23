/****************************************************************************
** Meta object code from reading C++ file 'gnomemediakeys.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dbus/gnomemediakeys.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gnomemediakeys.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GnomeMediaKeys_t {
    QByteArrayData data[13];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GnomeMediaKeys_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GnomeMediaKeys_t qt_meta_stringdata_GnomeMediaKeys = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GnomeMediaKeys"
QT_MOC_LITERAL(1, 15, 19), // "serviceOwnerChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "name"
QT_MOC_LITERAL(4, 41, 8), // "oldOwner"
QT_MOC_LITERAL(5, 50, 8), // "newOwner"
QT_MOC_LITERAL(6, 59, 16), // "registerFinished"
QT_MOC_LITERAL(7, 76, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(8, 101, 7), // "watcher"
QT_MOC_LITERAL(9, 109, 10), // "keyPressed"
QT_MOC_LITERAL(10, 120, 3), // "app"
QT_MOC_LITERAL(11, 124, 3), // "key"
QT_MOC_LITERAL(12, 128, 15) // "pluginActivated"

    },
    "GnomeMediaKeys\0serviceOwnerChanged\0\0"
    "name\0oldOwner\0newOwner\0registerFinished\0"
    "QDBusPendingCallWatcher*\0watcher\0"
    "keyPressed\0app\0key\0pluginActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GnomeMediaKeys[] = {

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
       1,    3,   34,    2, 0x08 /* Private */,
       6,    1,   41,    2, 0x08 /* Private */,
       9,    2,   44,    2, 0x08 /* Private */,
      12,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void GnomeMediaKeys::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GnomeMediaKeys *_t = static_cast<GnomeMediaKeys *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serviceOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->registerFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 2: _t->keyPressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->pluginActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GnomeMediaKeys::staticMetaObject = {
    { &MultiMediaKeysInterface::staticMetaObject, qt_meta_stringdata_GnomeMediaKeys.data,
      qt_meta_data_GnomeMediaKeys,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GnomeMediaKeys::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GnomeMediaKeys::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GnomeMediaKeys.stringdata0))
        return static_cast<void*>(const_cast< GnomeMediaKeys*>(this));
    return MultiMediaKeysInterface::qt_metacast(_clname);
}

int GnomeMediaKeys::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MultiMediaKeysInterface::qt_metacall(_c, _id, _a);
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

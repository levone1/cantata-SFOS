/****************************************************************************
** Meta object code from reading C++ file 'umsdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devices/umsdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'umsdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UmsDevice_t {
    QByteArrayData data[6];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UmsDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UmsDevice_t qt_meta_stringdata_UmsDevice = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UmsDevice"
QT_MOC_LITERAL(1, 10, 14), // "saveProperties"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "newPath"
QT_MOC_LITERAL(4, 34, 13), // "DeviceOptions"
QT_MOC_LITERAL(5, 48, 4) // "opts"

    },
    "UmsDevice\0saveProperties\0\0newPath\0"
    "DeviceOptions\0opts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UmsDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       1,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void UmsDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UmsDevice *_t = static_cast<UmsDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveProperties(); break;
        case 1: _t->saveProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const DeviceOptions(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject UmsDevice::staticMetaObject = {
    { &FsDevice::staticMetaObject, qt_meta_stringdata_UmsDevice.data,
      qt_meta_data_UmsDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UmsDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UmsDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UmsDevice.stringdata0))
        return static_cast<void*>(const_cast< UmsDevice*>(this));
    return FsDevice::qt_metacast(_clname);
}

int UmsDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FsDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

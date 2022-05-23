/****************************************************************************
** Meta object code from reading C++ file 'halcdrom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../backends/hal/halcdrom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'halcdrom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__Backends__Hal__Cdrom_t {
    QByteArrayData data[24];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Hal__Cdrom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Hal__Cdrom_t qt_meta_stringdata_Solid__Backends__Hal__Cdrom = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Solid::Backends::Hal::Cdrom"
QT_MOC_LITERAL(1, 28, 12), // "ejectPressed"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 3), // "udi"
QT_MOC_LITERAL(4, 46, 9), // "ejectDone"
QT_MOC_LITERAL(5, 56, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(6, 73, 5), // "error"
QT_MOC_LITERAL(7, 79, 9), // "errorData"
QT_MOC_LITERAL(8, 89, 14), // "ejectRequested"
QT_MOC_LITERAL(9, 104, 13), // "slotCondition"
QT_MOC_LITERAL(10, 118, 4), // "name"
QT_MOC_LITERAL(11, 123, 6), // "reason"
QT_MOC_LITERAL(12, 130, 13), // "slotDBusReply"
QT_MOC_LITERAL(13, 144, 12), // "QDBusMessage"
QT_MOC_LITERAL(14, 157, 5), // "reply"
QT_MOC_LITERAL(15, 163, 13), // "slotDBusError"
QT_MOC_LITERAL(16, 177, 10), // "QDBusError"
QT_MOC_LITERAL(17, 188, 19), // "slotProcessFinished"
QT_MOC_LITERAL(18, 208, 8), // "exitCode"
QT_MOC_LITERAL(19, 217, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(20, 238, 10), // "exitStatus"
QT_MOC_LITERAL(21, 249, 18), // "slotEjectRequested"
QT_MOC_LITERAL(22, 268, 13), // "slotEjectDone"
QT_MOC_LITERAL(23, 282, 11) // "errorString"

    },
    "Solid::Backends::Hal::Cdrom\0ejectPressed\0"
    "\0udi\0ejectDone\0Solid::ErrorType\0error\0"
    "errorData\0ejectRequested\0slotCondition\0"
    "name\0reason\0slotDBusReply\0QDBusMessage\0"
    "reply\0slotDBusError\0QDBusError\0"
    "slotProcessFinished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "slotEjectRequested\0slotEjectDone\0"
    "errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Hal__Cdrom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    3,   62,    2, 0x06 /* Public */,
       8,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   72,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,
      15,    1,   80,    2, 0x08 /* Private */,
      17,    2,   83,    2, 0x08 /* Private */,
      21,    0,   88,    2, 0x08 /* Private */,
      22,    2,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QVariant, QMetaType::QString,    6,    7,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,    6,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 19,   18,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    6,   23,

       0        // eod
};

void Solid::Backends::Hal::Cdrom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cdrom *_t = static_cast<Cdrom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ejectPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->ejectDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->ejectRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotCondition((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->slotDBusReply((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 5: _t->slotDBusError((*reinterpret_cast< const QDBusError(*)>(_a[1]))); break;
        case 6: _t->slotProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 7: _t->slotEjectRequested(); break;
        case 8: _t->slotEjectDone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Solid::ErrorType >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Cdrom::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cdrom::ejectPressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Cdrom::*_t)(Solid::ErrorType , QVariant , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cdrom::ejectDone)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Cdrom::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cdrom::ejectRequested)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Solid::Backends::Hal::Cdrom::staticMetaObject = {
    { &Storage::staticMetaObject, qt_meta_stringdata_Solid__Backends__Hal__Cdrom.data,
      qt_meta_data_Solid__Backends__Hal__Cdrom,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::Backends::Hal::Cdrom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Hal::Cdrom::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Hal__Cdrom.stringdata0))
        return static_cast<void*>(const_cast< Cdrom*>(this));
    if (!strcmp(_clname, "Solid::Ifaces::OpticalDrive"))
        return static_cast< Solid::Ifaces::OpticalDrive*>(const_cast< Cdrom*>(this));
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.OpticalDrive/0.1"))
        return static_cast< Solid::Ifaces::OpticalDrive*>(const_cast< Cdrom*>(this));
    return Storage::qt_metacast(_clname);
}

int Solid::Backends::Hal::Cdrom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Storage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Solid::Backends::Hal::Cdrom::ejectPressed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::Backends::Hal::Cdrom::ejectDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Solid::Backends::Hal::Cdrom::ejectRequested(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

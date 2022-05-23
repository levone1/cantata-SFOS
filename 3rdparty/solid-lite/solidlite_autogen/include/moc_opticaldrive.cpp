/****************************************************************************
** Meta object code from reading C++ file 'opticaldrive.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../opticaldrive.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'opticaldrive.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__OpticalDrive_t {
    QByteArrayData data[32];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__OpticalDrive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__OpticalDrive_t qt_meta_stringdata_Solid__OpticalDrive = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Solid::OpticalDrive"
QT_MOC_LITERAL(1, 20, 12), // "ejectPressed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 3), // "udi"
QT_MOC_LITERAL(4, 38, 9), // "ejectDone"
QT_MOC_LITERAL(5, 48, 16), // "Solid::ErrorType"
QT_MOC_LITERAL(6, 65, 5), // "error"
QT_MOC_LITERAL(7, 71, 9), // "errorData"
QT_MOC_LITERAL(8, 81, 14), // "ejectRequested"
QT_MOC_LITERAL(9, 96, 14), // "supportedMedia"
QT_MOC_LITERAL(10, 111, 11), // "MediumTypes"
QT_MOC_LITERAL(11, 123, 9), // "readSpeed"
QT_MOC_LITERAL(12, 133, 10), // "writeSpeed"
QT_MOC_LITERAL(13, 144, 11), // "writeSpeeds"
QT_MOC_LITERAL(14, 156, 10), // "QList<int>"
QT_MOC_LITERAL(15, 167, 10), // "MediumType"
QT_MOC_LITERAL(16, 178, 3), // "Cdr"
QT_MOC_LITERAL(17, 182, 4), // "Cdrw"
QT_MOC_LITERAL(18, 187, 3), // "Dvd"
QT_MOC_LITERAL(19, 191, 4), // "Dvdr"
QT_MOC_LITERAL(20, 196, 5), // "Dvdrw"
QT_MOC_LITERAL(21, 202, 6), // "Dvdram"
QT_MOC_LITERAL(22, 209, 8), // "Dvdplusr"
QT_MOC_LITERAL(23, 218, 9), // "Dvdplusrw"
QT_MOC_LITERAL(24, 228, 9), // "Dvdplusdl"
QT_MOC_LITERAL(25, 238, 11), // "Dvdplusdlrw"
QT_MOC_LITERAL(26, 250, 2), // "Bd"
QT_MOC_LITERAL(27, 253, 3), // "Bdr"
QT_MOC_LITERAL(28, 257, 4), // "Bdre"
QT_MOC_LITERAL(29, 262, 5), // "HdDvd"
QT_MOC_LITERAL(30, 268, 6), // "HdDvdr"
QT_MOC_LITERAL(31, 275, 7) // "HdDvdrw"

    },
    "Solid::OpticalDrive\0ejectPressed\0\0udi\0"
    "ejectDone\0Solid::ErrorType\0error\0"
    "errorData\0ejectRequested\0supportedMedia\0"
    "MediumTypes\0readSpeed\0writeSpeed\0"
    "writeSpeeds\0QList<int>\0MediumType\0Cdr\0"
    "Cdrw\0Dvd\0Dvdr\0Dvdrw\0Dvdram\0Dvdplusr\0"
    "Dvdplusrw\0Dvdplusdl\0Dvdplusdlrw\0Bd\0"
    "Bdr\0Bdre\0HdDvd\0HdDvdr\0HdDvdrw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__OpticalDrive[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   42, // properties
       2,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    3,   32,    2, 0x06 /* Public */,
       8,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QVariant, QMetaType::QString,    6,    7,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x00095009,
      11, QMetaType::Int, 0x00095001,
      12, QMetaType::Int, 0x00095001,
      13, 0x80000000 | 14, 0x00095009,

 // enums: name, flags, count, data
      15, 0x0,   16,   62,
      10, 0x1,   16,   94,

 // enum data: key, value
      16, uint(Solid::OpticalDrive::Cdr),
      17, uint(Solid::OpticalDrive::Cdrw),
      18, uint(Solid::OpticalDrive::Dvd),
      19, uint(Solid::OpticalDrive::Dvdr),
      20, uint(Solid::OpticalDrive::Dvdrw),
      21, uint(Solid::OpticalDrive::Dvdram),
      22, uint(Solid::OpticalDrive::Dvdplusr),
      23, uint(Solid::OpticalDrive::Dvdplusrw),
      24, uint(Solid::OpticalDrive::Dvdplusdl),
      25, uint(Solid::OpticalDrive::Dvdplusdlrw),
      26, uint(Solid::OpticalDrive::Bd),
      27, uint(Solid::OpticalDrive::Bdr),
      28, uint(Solid::OpticalDrive::Bdre),
      29, uint(Solid::OpticalDrive::HdDvd),
      30, uint(Solid::OpticalDrive::HdDvdr),
      31, uint(Solid::OpticalDrive::HdDvdrw),
      16, uint(Solid::OpticalDrive::Cdr),
      17, uint(Solid::OpticalDrive::Cdrw),
      18, uint(Solid::OpticalDrive::Dvd),
      19, uint(Solid::OpticalDrive::Dvdr),
      20, uint(Solid::OpticalDrive::Dvdrw),
      21, uint(Solid::OpticalDrive::Dvdram),
      22, uint(Solid::OpticalDrive::Dvdplusr),
      23, uint(Solid::OpticalDrive::Dvdplusrw),
      24, uint(Solid::OpticalDrive::Dvdplusdl),
      25, uint(Solid::OpticalDrive::Dvdplusdlrw),
      26, uint(Solid::OpticalDrive::Bd),
      27, uint(Solid::OpticalDrive::Bdr),
      28, uint(Solid::OpticalDrive::Bdre),
      29, uint(Solid::OpticalDrive::HdDvd),
      30, uint(Solid::OpticalDrive::HdDvdr),
      31, uint(Solid::OpticalDrive::HdDvdrw),

       0        // eod
};

void Solid::OpticalDrive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpticalDrive *_t = static_cast<OpticalDrive *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ejectPressed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->ejectDone((*reinterpret_cast< Solid::ErrorType(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->ejectRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpticalDrive::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpticalDrive::ejectPressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OpticalDrive::*_t)(Solid::ErrorType , QVariant , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpticalDrive::ejectDone)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OpticalDrive::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpticalDrive::ejectRequested)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        OpticalDrive *_t = static_cast<OpticalDrive *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(_t->supportedMedia()); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->readSpeed(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->writeSpeed(); break;
        case 3: *reinterpret_cast< QList<int>*>(_v) = _t->writeSpeeds(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Solid::OpticalDrive::staticMetaObject = {
    { &StorageDrive::staticMetaObject, qt_meta_stringdata_Solid__OpticalDrive.data,
      qt_meta_data_Solid__OpticalDrive,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::OpticalDrive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::OpticalDrive::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__OpticalDrive.stringdata0))
        return static_cast<void*>(const_cast< OpticalDrive*>(this));
    return StorageDrive::qt_metacast(_clname);
}

int Solid::OpticalDrive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StorageDrive::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Solid::OpticalDrive::ejectPressed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Solid::OpticalDrive::ejectDone(Solid::ErrorType _t1, QVariant _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Solid::OpticalDrive::ejectRequested(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

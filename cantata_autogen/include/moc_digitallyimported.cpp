/****************************************************************************
** Meta object code from reading C++ file 'digitallyimported.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/digitallyimported.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'digitallyimported.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DigitallyImported_t {
    QByteArrayData data[10];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DigitallyImported_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DigitallyImported_t qt_meta_stringdata_DigitallyImported = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DigitallyImported"
QT_MOC_LITERAL(1, 18, 11), // "loginStatus"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 2), // "ok"
QT_MOC_LITERAL(4, 34, 3), // "msg"
QT_MOC_LITERAL(5, 38, 7), // "updated"
QT_MOC_LITERAL(6, 46, 5), // "login"
QT_MOC_LITERAL(7, 52, 6), // "logout"
QT_MOC_LITERAL(8, 59, 7), // "timeout"
QT_MOC_LITERAL(9, 67, 13) // "loginResponse"

    },
    "DigitallyImported\0loginStatus\0\0ok\0msg\0"
    "updated\0login\0logout\0timeout\0loginResponse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DigitallyImported[] = {

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
       1,    2,   44,    2, 0x06 /* Public */,
       5,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DigitallyImported::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DigitallyImported *_t = static_cast<DigitallyImported *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loginStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->updated(); break;
        case 2: _t->login(); break;
        case 3: _t->logout(); break;
        case 4: _t->timeout(); break;
        case 5: _t->loginResponse(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DigitallyImported::*_t)(bool , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DigitallyImported::loginStatus)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DigitallyImported::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DigitallyImported::updated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DigitallyImported::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DigitallyImported.data,
      qt_meta_data_DigitallyImported,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DigitallyImported::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DigitallyImported::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DigitallyImported.stringdata0))
        return static_cast<void*>(const_cast< DigitallyImported*>(this));
    return QObject::qt_metacast(_clname);
}

int DigitallyImported::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DigitallyImported::loginStatus(bool _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DigitallyImported::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

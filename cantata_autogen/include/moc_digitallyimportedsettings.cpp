/****************************************************************************
** Meta object code from reading C++ file 'digitallyimportedsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../streams/digitallyimportedsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'digitallyimportedsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DigitallyImportedSettings_t {
    QByteArrayData data[6];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DigitallyImportedSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DigitallyImportedSettings_t qt_meta_stringdata_DigitallyImportedSettings = {
    {
QT_MOC_LITERAL(0, 0, 25), // "DigitallyImportedSettings"
QT_MOC_LITERAL(1, 26, 5), // "login"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "loginStatus"
QT_MOC_LITERAL(4, 45, 6), // "status"
QT_MOC_LITERAL(5, 52, 3) // "msg"

    },
    "DigitallyImportedSettings\0login\0\0"
    "loginStatus\0status\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DigitallyImportedSettings[] = {

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
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    4,    5,

       0        // eod
};

void DigitallyImportedSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DigitallyImportedSettings *_t = static_cast<DigitallyImportedSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login(); break;
        case 1: _t->loginStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject DigitallyImportedSettings::staticMetaObject = {
    { &Dialog::staticMetaObject, qt_meta_stringdata_DigitallyImportedSettings.data,
      qt_meta_data_DigitallyImportedSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DigitallyImportedSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DigitallyImportedSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DigitallyImportedSettings.stringdata0))
        return static_cast<void*>(const_cast< DigitallyImportedSettings*>(this));
    if (!strcmp(_clname, "Ui::DigitallyImportedSettings"))
        return static_cast< Ui::DigitallyImportedSettings*>(const_cast< DigitallyImportedSettings*>(this));
    return Dialog::qt_metacast(_clname);
}

int DigitallyImportedSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
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

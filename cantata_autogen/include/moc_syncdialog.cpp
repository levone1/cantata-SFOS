/****************************************************************************
** Meta object code from reading C++ file 'syncdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devices/syncdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SyncDialog_t {
    QByteArrayData data[13];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SyncDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SyncDialog_t qt_meta_stringdata_SyncDialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SyncDialog"
QT_MOC_LITERAL(1, 11, 4), // "copy"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 11), // "QList<Song>"
QT_MOC_LITERAL(4, 29, 5), // "songs"
QT_MOC_LITERAL(5, 35, 12), // "librarySongs"
QT_MOC_LITERAL(6, 48, 2), // "pc"
QT_MOC_LITERAL(7, 51, 16), // "selectionChanged"
QT_MOC_LITERAL(8, 68, 9), // "configure"
QT_MOC_LITERAL(9, 78, 14), // "saveProperties"
QT_MOC_LITERAL(10, 93, 4), // "path"
QT_MOC_LITERAL(11, 98, 13), // "DeviceOptions"
QT_MOC_LITERAL(12, 112, 4) // "opts"

    },
    "SyncDialog\0copy\0\0QList<Song>\0songs\0"
    "librarySongs\0pc\0selectionChanged\0"
    "configure\0saveProperties\0path\0"
    "DeviceOptions\0opts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SyncDialog[] = {

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
       5,    2,   42,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,
       8,    0,   48,    2, 0x08 /* Private */,
       9,    2,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    4,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,   10,   12,

       0        // eod
};

void SyncDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SyncDialog *_t = static_cast<SyncDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->copy((*reinterpret_cast< const QList<Song>(*)>(_a[1]))); break;
        case 1: _t->librarySongs((*reinterpret_cast< const QList<Song>(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->selectionChanged(); break;
        case 3: _t->configure(); break;
        case 4: _t->saveProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const DeviceOptions(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        }
    }
}

const QMetaObject SyncDialog::staticMetaObject = {
    { &Dialog::staticMetaObject, qt_meta_stringdata_SyncDialog.data,
      qt_meta_data_SyncDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SyncDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyncDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SyncDialog.stringdata0))
        return static_cast<void*>(const_cast< SyncDialog*>(this));
    return Dialog::qt_metacast(_clname);
}

int SyncDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

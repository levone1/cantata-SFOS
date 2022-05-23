/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[22];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 13), // "buttonPressed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 39, 6), // "button"
QT_MOC_LITERAL(5, 46, 10), // "ButtonCode"
QT_MOC_LITERAL(6, 57, 4), // "None"
QT_MOC_LITERAL(7, 62, 4), // "Help"
QT_MOC_LITERAL(8, 67, 7), // "Default"
QT_MOC_LITERAL(9, 75, 2), // "Ok"
QT_MOC_LITERAL(10, 78, 5), // "Apply"
QT_MOC_LITERAL(11, 84, 3), // "Try"
QT_MOC_LITERAL(12, 88, 6), // "Cancel"
QT_MOC_LITERAL(13, 95, 5), // "Close"
QT_MOC_LITERAL(14, 101, 2), // "No"
QT_MOC_LITERAL(15, 104, 3), // "Yes"
QT_MOC_LITERAL(16, 108, 5), // "Reset"
QT_MOC_LITERAL(17, 114, 7), // "Details"
QT_MOC_LITERAL(18, 122, 5), // "User1"
QT_MOC_LITERAL(19, 128, 5), // "User2"
QT_MOC_LITERAL(20, 134, 5), // "User3"
QT_MOC_LITERAL(21, 140, 9) // "NoDefault"

    },
    "Dialog\0buttonPressed\0\0QAbstractButton*\0"
    "button\0ButtonCode\0None\0Help\0Default\0"
    "Ok\0Apply\0Try\0Cancel\0Close\0No\0Yes\0Reset\0"
    "Details\0User1\0User2\0User3\0NoDefault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // enums: name, flags, count, data
       5, 0x0,   16,   26,

 // enum data: key, value
       6, uint(Dialog::None),
       7, uint(Dialog::Help),
       8, uint(Dialog::Default),
       9, uint(Dialog::Ok),
      10, uint(Dialog::Apply),
      11, uint(Dialog::Try),
      12, uint(Dialog::Cancel),
      13, uint(Dialog::Close),
      14, uint(Dialog::No),
      15, uint(Dialog::Yes),
      16, uint(Dialog::Reset),
      17, uint(Dialog::Details),
      18, uint(Dialog::User1),
      19, uint(Dialog::User2),
      20, uint(Dialog::User3),
      21, uint(Dialog::NoDefault),

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonPressed((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog.data,
      qt_meta_data_Dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'actiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devices/actiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActionDialog_t {
    QByteArrayData data[22];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActionDialog_t qt_meta_stringdata_ActionDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ActionDialog"
QT_MOC_LITERAL(1, 13, 6), // "update"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "completed"
QT_MOC_LITERAL(4, 31, 12), // "calcFileSize"
QT_MOC_LITERAL(5, 44, 15), // "configureSource"
QT_MOC_LITERAL(6, 60, 13), // "configureDest"
QT_MOC_LITERAL(7, 74, 14), // "saveProperties"
QT_MOC_LITERAL(8, 89, 4), // "path"
QT_MOC_LITERAL(9, 94, 13), // "DeviceOptions"
QT_MOC_LITERAL(10, 108, 4), // "opts"
QT_MOC_LITERAL(11, 113, 12), // "actionStatus"
QT_MOC_LITERAL(12, 126, 6), // "status"
QT_MOC_LITERAL(13, 133, 11), // "copiedCover"
QT_MOC_LITERAL(14, 145, 6), // "doNext"
QT_MOC_LITERAL(15, 152, 16), // "removeSongResult"
QT_MOC_LITERAL(16, 169, 15), // "cleanDirsResult"
QT_MOC_LITERAL(17, 185, 10), // "jobPercent"
QT_MOC_LITERAL(18, 196, 7), // "percent"
QT_MOC_LITERAL(19, 204, 10), // "cacheSaved"
QT_MOC_LITERAL(20, 215, 16), // "controlInfoLabel"
QT_MOC_LITERAL(21, 232, 13) // "deviceRenamed"

    },
    "ActionDialog\0update\0\0completed\0"
    "calcFileSize\0configureSource\0configureDest\0"
    "saveProperties\0path\0DeviceOptions\0"
    "opts\0actionStatus\0status\0copiedCover\0"
    "doNext\0removeSongResult\0cleanDirsResult\0"
    "jobPercent\0percent\0cacheSaved\0"
    "controlInfoLabel\0deviceRenamed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActionDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    2,   99,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
      11,    2,  105,    2, 0x08 /* Private */,
      11,    1,  110,    2, 0x28 /* Private | MethodCloned */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    1,  114,    2, 0x08 /* Private */,
      16,    1,  117,    2, 0x08 /* Private */,
      17,    1,  120,    2, 0x08 /* Private */,
      19,    0,  123,    2, 0x08 /* Private */,
      20,    0,  124,    2, 0x08 /* Private */,
      21,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   12,   13,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ActionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionDialog *_t = static_cast<ActionDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->completed(); break;
        case 2: _t->calcFileSize(); break;
        case 3: _t->configureSource(); break;
        case 4: _t->configureDest(); break;
        case 5: _t->saveProperties((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const DeviceOptions(*)>(_a[2]))); break;
        case 6: _t->saveProperties(); break;
        case 7: _t->actionStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->actionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->doNext(); break;
        case 10: _t->removeSongResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->cleanDirsResult((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->jobPercent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->cacheSaved(); break;
        case 14: _t->controlInfoLabel(); break;
        case 15: _t->deviceRenamed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActionDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionDialog::update)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ActionDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionDialog::completed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ActionDialog::staticMetaObject = {
    { &Dialog::staticMetaObject, qt_meta_stringdata_ActionDialog.data,
      qt_meta_data_ActionDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ActionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ActionDialog.stringdata0))
        return static_cast<void*>(const_cast< ActionDialog*>(this));
    if (!strcmp(_clname, "Ui::ActionDialog"))
        return static_cast< Ui::ActionDialog*>(const_cast< ActionDialog*>(this));
    return Dialog::qt_metacast(_clname);
}

int ActionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void ActionDialog::update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ActionDialog::completed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

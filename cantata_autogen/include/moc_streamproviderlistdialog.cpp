/****************************************************************************
** Meta object code from reading C++ file 'streamproviderlistdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../streams/streamproviderlistdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamproviderlistdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StreamProviderListDialog_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamProviderListDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamProviderListDialog_t qt_meta_stringdata_StreamProviderListDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "StreamProviderListDialog"
QT_MOC_LITERAL(1, 25, 15), // "getProviderList"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "jobFinished"
QT_MOC_LITERAL(4, 54, 11), // "itemChanged"
QT_MOC_LITERAL(5, 66, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(6, 83, 3), // "itm"
QT_MOC_LITERAL(7, 87, 3) // "col"

    },
    "StreamProviderListDialog\0getProviderList\0"
    "\0jobFinished\0itemChanged\0QTreeWidgetItem*\0"
    "itm\0col"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamProviderListDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    2,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,

       0        // eod
};

void StreamProviderListDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StreamProviderListDialog *_t = static_cast<StreamProviderListDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getProviderList(); break;
        case 1: _t->jobFinished(); break;
        case 2: _t->itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject StreamProviderListDialog::staticMetaObject = {
    { &Dialog::staticMetaObject, qt_meta_stringdata_StreamProviderListDialog.data,
      qt_meta_data_StreamProviderListDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StreamProviderListDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamProviderListDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StreamProviderListDialog.stringdata0))
        return static_cast<void*>(const_cast< StreamProviderListDialog*>(this));
    return Dialog::qt_metacast(_clname);
}

int StreamProviderListDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

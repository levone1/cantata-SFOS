/****************************************************************************
** Meta object code from reading C++ file 'tableview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/tableview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tableview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TableView_t {
    QByteArrayData data[9];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableView_t qt_meta_stringdata_TableView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TableView"
QT_MOC_LITERAL(1, 10, 8), // "showMenu"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 3), // "pos"
QT_MOC_LITERAL(4, 24, 16), // "toggleHeaderItem"
QT_MOC_LITERAL(5, 41, 7), // "visible"
QT_MOC_LITERAL(6, 49, 14), // "stretchToggled"
QT_MOC_LITERAL(7, 64, 1), // "e"
QT_MOC_LITERAL(8, 66, 16) // "alignmentChanged"

    },
    "TableView\0showMenu\0\0pos\0toggleHeaderItem\0"
    "visible\0stretchToggled\0e\0alignmentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableView[] = {

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
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       6,    1,   40,    2, 0x08 /* Private */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void TableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableView *_t = static_cast<TableView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->toggleHeaderItem((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->stretchToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->alignmentChanged(); break;
        default: ;
        }
    }
}

const QMetaObject TableView::staticMetaObject = {
    { &TreeView::staticMetaObject, qt_meta_stringdata_TableView.data,
      qt_meta_data_TableView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TableView.stringdata0))
        return static_cast<void*>(const_cast< TableView*>(this));
    return TreeView::qt_metacast(_clname);
}

int TableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeView::qt_metacall(_c, _id, _a);
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

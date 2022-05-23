/****************************************************************************
** Meta object code from reading C++ file 'groupedview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/groupedview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupedview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GroupedViewDelegate_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupedViewDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupedViewDelegate_t qt_meta_stringdata_GroupedViewDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19) // "GroupedViewDelegate"

    },
    "GroupedViewDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupedViewDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void GroupedViewDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GroupedViewDelegate::staticMetaObject = {
    { &ActionItemDelegate::staticMetaObject, qt_meta_stringdata_GroupedViewDelegate.data,
      qt_meta_data_GroupedViewDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GroupedViewDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupedViewDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GroupedViewDelegate.stringdata0))
        return static_cast<void*>(const_cast< GroupedViewDelegate*>(this));
    return ActionItemDelegate::qt_metacast(_clname);
}

int GroupedViewDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_GroupedView_t {
    QByteArrayData data[10];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupedView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupedView_t qt_meta_stringdata_GroupedView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GroupedView"
QT_MOC_LITERAL(1, 12, 10), // "updateRows"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 6), // "parent"
QT_MOC_LITERAL(4, 31, 11), // "coverLoaded"
QT_MOC_LITERAL(5, 43, 4), // "Song"
QT_MOC_LITERAL(6, 48, 4), // "song"
QT_MOC_LITERAL(7, 53, 4), // "size"
QT_MOC_LITERAL(8, 58, 11), // "itemClicked"
QT_MOC_LITERAL(9, 70, 5) // "index"

    },
    "GroupedView\0updateRows\0\0parent\0"
    "coverLoaded\0Song\0song\0size\0itemClicked\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupedView[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       4,    2,   32,    2, 0x0a /* Public */,
       8,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QModelIndex,    9,

       0        // eod
};

void GroupedView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroupedView *_t = static_cast<GroupedView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateRows((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->coverLoaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->itemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GroupedView::staticMetaObject = {
    { &TreeView::staticMetaObject, qt_meta_stringdata_GroupedView.data,
      qt_meta_data_GroupedView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GroupedView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupedView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GroupedView.stringdata0))
        return static_cast<void*>(const_cast< GroupedView*>(this));
    return TreeView::qt_metacast(_clname);
}

int GroupedView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TreeView::qt_metacall(_c, _id, _a);
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

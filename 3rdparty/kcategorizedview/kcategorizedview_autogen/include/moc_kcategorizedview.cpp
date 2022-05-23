/****************************************************************************
** Meta object code from reading C++ file 'kcategorizedview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kcategorizedview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcategorizedview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KCategorizedView_t {
    QByteArrayData data[7];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCategorizedView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCategorizedView_t qt_meta_stringdata_KCategorizedView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "KCategorizedView"
QT_MOC_LITERAL(1, 17, 17), // "slotLayoutChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 30), // "_k_slotCollapseOrExpandClicked"
QT_MOC_LITERAL(4, 67, 15), // "categorySpacing"
QT_MOC_LITERAL(5, 83, 22), // "alternatingBlockColors"
QT_MOC_LITERAL(6, 106, 17) // "collapsibleBlocks"

    },
    "KCategorizedView\0slotLayoutChanged\0\0"
    "_k_slotCollapseOrExpandClicked\0"
    "categorySpacing\0alternatingBlockColors\0"
    "collapsibleBlocks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCategorizedView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::Bool, 0x00095103,
       6, QMetaType::Bool, 0x00095103,

       0        // eod
};

void KCategorizedView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KCategorizedView *_t = static_cast<KCategorizedView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotLayoutChanged(); break;
        case 1: _t->d->_k_slotCollapseOrExpandClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        KCategorizedView *_t = static_cast<KCategorizedView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->categorySpacing(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->alternatingBlockColors(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->collapsibleBlocks(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        KCategorizedView *_t = static_cast<KCategorizedView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCategorySpacing(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setAlternatingBlockColors(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCollapsibleBlocks(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject KCategorizedView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_KCategorizedView.data,
      qt_meta_data_KCategorizedView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KCategorizedView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCategorizedView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KCategorizedView.stringdata0))
        return static_cast<void*>(const_cast< KCategorizedView*>(this));
    return QListView::qt_metacast(_clname);
}

int KCategorizedView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

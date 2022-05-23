/****************************************************************************
** Meta object code from reading C++ file 'categorizedview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/categorizedview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'categorizedview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CategorizedView_t {
    QByteArrayData data[13];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CategorizedView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CategorizedView_t qt_meta_stringdata_CategorizedView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CategorizedView"
QT_MOC_LITERAL(1, 16, 13), // "itemsSelected"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(4, 49, 3), // "idx"
QT_MOC_LITERAL(5, 53, 11), // "itemClicked"
QT_MOC_LITERAL(6, 65, 13), // "itemActivated"
QT_MOC_LITERAL(7, 79, 16), // "correctSelection"
QT_MOC_LITERAL(8, 96, 21), // "showCustomContextMenu"
QT_MOC_LITERAL(9, 118, 3), // "pos"
QT_MOC_LITERAL(10, 122, 16), // "checkDoubleClick"
QT_MOC_LITERAL(11, 139, 12), // "checkClicked"
QT_MOC_LITERAL(12, 152, 14) // "checkActivated"

    },
    "CategorizedView\0itemsSelected\0\0"
    "itemDoubleClicked\0idx\0itemClicked\0"
    "itemActivated\0correctSelection\0"
    "showCustomContextMenu\0pos\0checkDoubleClick\0"
    "checkClicked\0checkActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CategorizedView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,
       6,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   71,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      11,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Bool, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void, QMetaType::QModelIndex,    4,

       0        // eod
};

void CategorizedView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CategorizedView *_t = static_cast<CategorizedView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->itemsSelected((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->itemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->itemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->correctSelection(); break;
        case 5: _t->showCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->checkDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->checkClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->checkActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef bool (CategorizedView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CategorizedView::itemsSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CategorizedView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CategorizedView::itemDoubleClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CategorizedView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CategorizedView::itemClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CategorizedView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CategorizedView::itemActivated)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject CategorizedView::staticMetaObject = {
    { &KCategorizedView::staticMetaObject, qt_meta_stringdata_CategorizedView.data,
      qt_meta_data_CategorizedView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CategorizedView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CategorizedView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CategorizedView.stringdata0))
        return static_cast<void*>(const_cast< CategorizedView*>(this));
    return KCategorizedView::qt_metacast(_clname);
}

int CategorizedView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KCategorizedView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
bool CategorizedView::itemsSelected(bool _t1)
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
void CategorizedView::itemDoubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CategorizedView::itemClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CategorizedView::itemActivated(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'kcategorydrawer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kcategorydrawer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kcategorydrawer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KCategoryDrawer_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KCategoryDrawer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KCategoryDrawer_t qt_meta_stringdata_KCategoryDrawer = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KCategoryDrawer"
QT_MOC_LITERAL(1, 16, 23), // "collapseOrExpandClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "index"
QT_MOC_LITERAL(4, 47, 15), // "actionRequested"
QT_MOC_LITERAL(5, 63, 6) // "action"

    },
    "KCategoryDrawer\0collapseOrExpandClicked\0"
    "\0index\0actionRequested\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KCategoryDrawer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QModelIndex,    5,    3,

       0        // eod
};

void KCategoryDrawer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KCategoryDrawer *_t = static_cast<KCategoryDrawer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->collapseOrExpandClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->actionRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KCategoryDrawer::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KCategoryDrawer::collapseOrExpandClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KCategoryDrawer::*_t)(int , const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KCategoryDrawer::actionRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject KCategoryDrawer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KCategoryDrawer.data,
      qt_meta_data_KCategoryDrawer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KCategoryDrawer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KCategoryDrawer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KCategoryDrawer.stringdata0))
        return static_cast<void*>(const_cast< KCategoryDrawer*>(this));
    return QObject::qt_metacast(_clname);
}

int KCategoryDrawer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void KCategoryDrawer::collapseOrExpandClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KCategoryDrawer::actionRequested(int _t1, const QModelIndex & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

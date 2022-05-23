/****************************************************************************
** Meta object code from reading C++ file 'searchmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/searchmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SearchModel_t {
    QByteArrayData data[7];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchModel_t qt_meta_stringdata_SearchModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SearchModel"
QT_MOC_LITERAL(1, 12, 9), // "searching"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "searched"
QT_MOC_LITERAL(4, 32, 12), // "statsUpdated"
QT_MOC_LITERAL(5, 45, 5), // "songs"
QT_MOC_LITERAL(6, 51, 4) // "time"

    },
    "SearchModel\0searching\0\0searched\0"
    "statsUpdated\0songs\0time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    2,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    5,    6,

       0        // eod
};

void SearchModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchModel *_t = static_cast<SearchModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searching(); break;
        case 1: _t->searched(); break;
        case 2: _t->statsUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchModel::searching)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SearchModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchModel::searched)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SearchModel::*_t)(int , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchModel::statsUpdated)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SearchModel::staticMetaObject = {
    { &ActionModel::staticMetaObject, qt_meta_stringdata_SearchModel.data,
      qt_meta_data_SearchModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SearchModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SearchModel.stringdata0))
        return static_cast<void*>(const_cast< SearchModel*>(this));
    return ActionModel::qt_metacast(_clname);
}

int SearchModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SearchModel::searching()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SearchModel::searched()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SearchModel::statsUpdated(int _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

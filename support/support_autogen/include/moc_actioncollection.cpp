/****************************************************************************
** Meta object code from reading C++ file 'actioncollection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../actioncollection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actioncollection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ActionCollection_t {
    QByteArrayData data[12];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ActionCollection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ActionCollection_t qt_meta_stringdata_ActionCollection = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ActionCollection"
QT_MOC_LITERAL(1, 17, 8), // "inserted"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "QAction*"
QT_MOC_LITERAL(4, 36, 6), // "action"
QT_MOC_LITERAL(5, 43, 13), // "actionHovered"
QT_MOC_LITERAL(6, 57, 15), // "actionTriggered"
QT_MOC_LITERAL(7, 73, 14), // "tooltipUpdated"
QT_MOC_LITERAL(8, 88, 19), // "slotActionTriggered"
QT_MOC_LITERAL(9, 108, 17), // "slotActionHovered"
QT_MOC_LITERAL(10, 126, 15), // "actionDestroyed"
QT_MOC_LITERAL(11, 142, 25) // "associatedWidgetDestroyed"

    },
    "ActionCollection\0inserted\0\0QAction*\0"
    "action\0actionHovered\0actionTriggered\0"
    "tooltipUpdated\0slotActionTriggered\0"
    "slotActionHovered\0actionDestroyed\0"
    "associatedWidgetDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ActionCollection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       7,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   66,    2, 0x09 /* Protected */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      11,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

void ActionCollection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionCollection *_t = static_cast<ActionCollection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inserted((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->actionHovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->actionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->tooltipUpdated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->slotActionTriggered(); break;
        case 5: _t->slotActionHovered(); break;
        case 6: _t->actionDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 7: _t->associatedWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ActionCollection::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionCollection::inserted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ActionCollection::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionCollection::actionHovered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ActionCollection::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionCollection::actionTriggered)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ActionCollection::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ActionCollection::tooltipUpdated)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ActionCollection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ActionCollection.data,
      qt_meta_data_ActionCollection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ActionCollection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionCollection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ActionCollection.stringdata0))
        return static_cast<void*>(const_cast< ActionCollection*>(this));
    return QObject::qt_metacast(_clname);
}

int ActionCollection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ActionCollection::inserted(QAction * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ActionCollection::actionHovered(QAction * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ActionCollection::actionTriggered(QAction * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ActionCollection::tooltipUpdated(QAction * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

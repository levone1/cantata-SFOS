/****************************************************************************
** Meta object code from reading C++ file 'acceleratormanager_private.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../acceleratormanager_private.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'acceleratormanager_private.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PopupAccelManager_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PopupAccelManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PopupAccelManager_t qt_meta_stringdata_PopupAccelManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PopupAccelManager"
QT_MOC_LITERAL(1, 18, 11), // "aboutToShow"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "PopupAccelManager\0aboutToShow\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PopupAccelManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PopupAccelManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PopupAccelManager *_t = static_cast<PopupAccelManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PopupAccelManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PopupAccelManager.data,
      qt_meta_data_PopupAccelManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PopupAccelManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PopupAccelManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PopupAccelManager.stringdata0))
        return static_cast<void*>(const_cast< PopupAccelManager*>(this));
    return QObject::qt_metacast(_clname);
}

int PopupAccelManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QWidgetStackAccelManager_t {
    QByteArrayData data[8];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWidgetStackAccelManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWidgetStackAccelManager_t qt_meta_stringdata_QWidgetStackAccelManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QWidgetStackAccelManager"
QT_MOC_LITERAL(1, 25, 14), // "currentChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 5), // "child"
QT_MOC_LITERAL(4, 47, 11), // "eventFilter"
QT_MOC_LITERAL(5, 59, 7), // "watched"
QT_MOC_LITERAL(6, 67, 7), // "QEvent*"
QT_MOC_LITERAL(7, 75, 1) // "e"

    },
    "QWidgetStackAccelManager\0currentChanged\0"
    "\0child\0eventFilter\0watched\0QEvent*\0e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWidgetStackAccelManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    2,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 6,    5,    7,

       0        // eod
};

void QWidgetStackAccelManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWidgetStackAccelManager *_t = static_cast<QWidgetStackAccelManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject QWidgetStackAccelManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWidgetStackAccelManager.data,
      qt_meta_data_QWidgetStackAccelManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWidgetStackAccelManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWidgetStackAccelManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWidgetStackAccelManager.stringdata0))
        return static_cast<void*>(const_cast< QWidgetStackAccelManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QWidgetStackAccelManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE

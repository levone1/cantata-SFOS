/****************************************************************************
** Meta object code from reading C++ file 'cachesettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gui/cachesettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cachesettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SpaceLabel_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpaceLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpaceLabel_t qt_meta_stringdata_SpaceLabel = {
    {
QT_MOC_LITERAL(0, 0, 10) // "SpaceLabel"

    },
    "SpaceLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpaceLabel[] = {

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

void SpaceLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SpaceLabel::staticMetaObject = {
    { &SqueezedTextLabel::staticMetaObject, qt_meta_stringdata_SpaceLabel.data,
      qt_meta_data_SpaceLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SpaceLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpaceLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SpaceLabel.stringdata0))
        return static_cast<void*>(const_cast< SpaceLabel*>(this));
    return SqueezedTextLabel::qt_metacast(_clname);
}

int SpaceLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SqueezedTextLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CacheItemCounter_t {
    QByteArrayData data[7];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CacheItemCounter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CacheItemCounter_t qt_meta_stringdata_CacheItemCounter = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CacheItemCounter"
QT_MOC_LITERAL(1, 17, 5), // "count"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "num"
QT_MOC_LITERAL(4, 28, 5), // "space"
QT_MOC_LITERAL(5, 34, 8), // "getCount"
QT_MOC_LITERAL(6, 43, 9) // "deleteAll"

    },
    "CacheItemCounter\0count\0\0num\0space\0"
    "getCount\0deleteAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CacheItemCounter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   34,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::ULongLong,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CacheItemCounter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CacheItemCounter *_t = static_cast<CacheItemCounter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->count((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 1: _t->getCount(); break;
        case 2: _t->deleteAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CacheItemCounter::*_t)(int , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CacheItemCounter::count)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CacheItemCounter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CacheItemCounter.data,
      qt_meta_data_CacheItemCounter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CacheItemCounter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CacheItemCounter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CacheItemCounter.stringdata0))
        return static_cast<void*>(const_cast< CacheItemCounter*>(this));
    return QObject::qt_metacast(_clname);
}

int CacheItemCounter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CacheItemCounter::count(int _t1, quint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_CacheItem_t {
    QByteArrayData data[8];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CacheItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CacheItem_t qt_meta_stringdata_CacheItem = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CacheItem"
QT_MOC_LITERAL(1, 10, 8), // "getCount"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "deleteAll"
QT_MOC_LITERAL(4, 30, 7), // "updated"
QT_MOC_LITERAL(5, 38, 6), // "update"
QT_MOC_LITERAL(6, 45, 9), // "itemCount"
QT_MOC_LITERAL(7, 55, 5) // "space"

    },
    "CacheItem\0getCount\0\0deleteAll\0updated\0"
    "update\0itemCount\0space"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CacheItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::ULongLong,    6,    7,

       0        // eod
};

void CacheItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CacheItem *_t = static_cast<CacheItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getCount(); break;
        case 1: _t->deleteAll(); break;
        case 2: _t->updated(); break;
        case 3: _t->update((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CacheItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CacheItem::getCount)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CacheItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CacheItem::deleteAll)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CacheItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CacheItem::updated)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject CacheItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CacheItem.data,
      qt_meta_data_CacheItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CacheItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CacheItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CacheItem.stringdata0))
        return static_cast<void*>(const_cast< CacheItem*>(this));
    if (!strcmp(_clname, "QTreeWidgetItem"))
        return static_cast< QTreeWidgetItem*>(const_cast< CacheItem*>(this));
    return QObject::qt_metacast(_clname);
}

int CacheItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CacheItem::getCount()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CacheItem::deleteAll()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void CacheItem::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
struct qt_meta_stringdata_CacheTree_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CacheTree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CacheTree_t qt_meta_stringdata_CacheTree = {
    {
QT_MOC_LITERAL(0, 0, 9) // "CacheTree"

    },
    "CacheTree"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CacheTree[] = {

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

void CacheTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CacheTree::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_CacheTree.data,
      qt_meta_data_CacheTree,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CacheTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CacheTree::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CacheTree.stringdata0))
        return static_cast<void*>(const_cast< CacheTree*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int CacheTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CacheSettings_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CacheSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CacheSettings_t qt_meta_stringdata_CacheSettings = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CacheSettings"
QT_MOC_LITERAL(1, 14, 13), // "controlButton"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "deleteAll"
QT_MOC_LITERAL(4, 39, 11) // "updateSpace"

    },
    "CacheSettings\0controlButton\0\0deleteAll\0"
    "updateSpace"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CacheSettings[] = {

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
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CacheSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CacheSettings *_t = static_cast<CacheSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->controlButton(); break;
        case 1: _t->deleteAll(); break;
        case 2: _t->updateSpace(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CacheSettings::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CacheSettings.data,
      qt_meta_data_CacheSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CacheSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CacheSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CacheSettings.stringdata0))
        return static_cast<void*>(const_cast< CacheSettings*>(this));
    return QWidget::qt_metacast(_clname);
}

int CacheSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

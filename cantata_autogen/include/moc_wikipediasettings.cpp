/****************************************************************************
** Meta object code from reading C++ file 'wikipediasettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../context/wikipediasettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wikipediasettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WikipediaLoader_t {
    QByteArrayData data[10];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WikipediaLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WikipediaLoader_t qt_meta_stringdata_WikipediaLoader = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WikipediaLoader"
QT_MOC_LITERAL(1, 16, 5), // "entry"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "prefix"
QT_MOC_LITERAL(4, 30, 9), // "urlPrefix"
QT_MOC_LITERAL(5, 40, 4), // "lang"
QT_MOC_LITERAL(6, 45, 9), // "prefIndex"
QT_MOC_LITERAL(7, 55, 8), // "finished"
QT_MOC_LITERAL(8, 64, 4), // "load"
QT_MOC_LITERAL(9, 69, 4) // "data"

    },
    "WikipediaLoader\0entry\0\0prefix\0urlPrefix\0"
    "lang\0prefIndex\0finished\0load\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WikipediaLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   29,    2, 0x06 /* Public */,
       7,    0,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    9,

       0        // eod
};

void WikipediaLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WikipediaLoader *_t = static_cast<WikipediaLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entry((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->finished(); break;
        case 2: _t->load((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WikipediaLoader::*_t)(const QString & , const QString & , const QString & , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WikipediaLoader::entry)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WikipediaLoader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WikipediaLoader::finished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WikipediaLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WikipediaLoader.data,
      qt_meta_data_WikipediaLoader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WikipediaLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WikipediaLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WikipediaLoader.stringdata0))
        return static_cast<void*>(const_cast< WikipediaLoader*>(this));
    return QObject::qt_metacast(_clname);
}

int WikipediaLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WikipediaLoader::entry(const QString & _t1, const QString & _t2, const QString & _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WikipediaLoader::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_WikipediaSettings_t {
    QByteArrayData data[12];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WikipediaSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WikipediaSettings_t qt_meta_stringdata_WikipediaSettings = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WikipediaSettings"
QT_MOC_LITERAL(1, 18, 4), // "load"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "data"
QT_MOC_LITERAL(4, 29, 8), // "getLangs"
QT_MOC_LITERAL(5, 38, 10), // "parseLangs"
QT_MOC_LITERAL(6, 49, 8), // "addEntry"
QT_MOC_LITERAL(7, 58, 6), // "prefix"
QT_MOC_LITERAL(8, 65, 9), // "urlPrefix"
QT_MOC_LITERAL(9, 75, 4), // "lang"
QT_MOC_LITERAL(10, 80, 9), // "prefIndex"
QT_MOC_LITERAL(11, 90, 14) // "loaderFinished"

    },
    "WikipediaSettings\0load\0\0data\0getLangs\0"
    "parseLangs\0addEntry\0prefix\0urlPrefix\0"
    "lang\0prefIndex\0loaderFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WikipediaSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    4,   44,    2, 0x08 /* Private */,
      11,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    7,    8,    9,   10,
    QMetaType::Void,

       0        // eod
};

void WikipediaSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WikipediaSettings *_t = static_cast<WikipediaSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->load((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->getLangs(); break;
        case 2: _t->parseLangs(); break;
        case 3: _t->addEntry((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->loaderFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WikipediaSettings::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WikipediaSettings::load)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WikipediaSettings::staticMetaObject = {
    { &ToggleList::staticMetaObject, qt_meta_stringdata_WikipediaSettings.data,
      qt_meta_data_WikipediaSettings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WikipediaSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WikipediaSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WikipediaSettings.stringdata0))
        return static_cast<void*>(const_cast< WikipediaSettings*>(this));
    return ToggleList::qt_metacast(_clname);
}

int WikipediaSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToggleList::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WikipediaSettings::load(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

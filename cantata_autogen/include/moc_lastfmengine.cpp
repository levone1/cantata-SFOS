/****************************************************************************
** Meta object code from reading C++ file 'lastfmengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../context/lastfmengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lastfmengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LastFmEngine_t {
    QByteArrayData data[7];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LastFmEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LastFmEngine_t qt_meta_stringdata_LastFmEngine = {
    {
QT_MOC_LITERAL(0, 0, 12), // "LastFmEngine"
QT_MOC_LITERAL(1, 13, 6), // "search"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "query"
QT_MOC_LITERAL(4, 27, 4), // "Mode"
QT_MOC_LITERAL(5, 32, 4), // "mode"
QT_MOC_LITERAL(6, 37, 13) // "parseResponse"

    },
    "LastFmEngine\0search\0\0query\0Mode\0mode\0"
    "parseResponse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LastFmEngine[] = {

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
       1,    2,   24,    2, 0x0a /* Public */,
       6,    0,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 4,    3,    5,
    QMetaType::Void,

       0        // eod
};

void LastFmEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LastFmEngine *_t = static_cast<LastFmEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->search((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< Mode(*)>(_a[2]))); break;
        case 1: _t->parseResponse(); break;
        default: ;
        }
    }
}

const QMetaObject LastFmEngine::staticMetaObject = {
    { &ContextEngine::staticMetaObject, qt_meta_stringdata_LastFmEngine.data,
      qt_meta_data_LastFmEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LastFmEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LastFmEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LastFmEngine.stringdata0))
        return static_cast<void*>(const_cast< LastFmEngine*>(this));
    return ContextEngine::qt_metacast(_clname);
}

int LastFmEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ContextEngine::qt_metacall(_c, _id, _a);
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

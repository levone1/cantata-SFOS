/****************************************************************************
** Meta object code from reading C++ file 'streamfetcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../streams/streamfetcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamfetcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StreamFetcher_t {
    QByteArrayData data[13];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamFetcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamFetcher_t qt_meta_stringdata_StreamFetcher = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StreamFetcher"
QT_MOC_LITERAL(1, 14, 6), // "result"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 5), // "items"
QT_MOC_LITERAL(4, 28, 9), // "insertRow"
QT_MOC_LITERAL(5, 38, 6), // "action"
QT_MOC_LITERAL(6, 45, 8), // "priority"
QT_MOC_LITERAL(7, 54, 16), // "decreasePriority"
QT_MOC_LITERAL(8, 71, 6), // "status"
QT_MOC_LITERAL(9, 78, 3), // "msg"
QT_MOC_LITERAL(10, 82, 6), // "cancel"
QT_MOC_LITERAL(11, 89, 9), // "dataReady"
QT_MOC_LITERAL(12, 99, 11) // "jobFinished"

    },
    "StreamFetcher\0result\0\0items\0insertRow\0"
    "action\0priority\0decreasePriority\0"
    "status\0msg\0cancel\0dataReady\0jobFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamFetcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   39,    2, 0x06 /* Public */,
       8,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   53,    2, 0x0a /* Public */,
      11,    0,   54,    2, 0x08 /* Private */,
      12,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int, QMetaType::Int, QMetaType::UChar, QMetaType::Bool,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StreamFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StreamFetcher *_t = static_cast<StreamFetcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 1: _t->status((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->cancel(); break;
        case 3: _t->dataReady(); break;
        case 4: _t->jobFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StreamFetcher::*_t)(const QStringList & , int , int , quint8 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamFetcher::result)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StreamFetcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamFetcher::status)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject StreamFetcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_StreamFetcher.data,
      qt_meta_data_StreamFetcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StreamFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StreamFetcher.stringdata0))
        return static_cast<void*>(const_cast< StreamFetcher*>(this));
    return QObject::qt_metacast(_clname);
}

int StreamFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void StreamFetcher::result(const QStringList & _t1, int _t2, int _t3, quint8 _t4, bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StreamFetcher::status(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

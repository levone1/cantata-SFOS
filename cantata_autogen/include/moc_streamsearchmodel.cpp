/****************************************************************************
** Meta object code from reading C++ file 'streamsearchmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/streamsearchmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamsearchmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_StreamSearchModel_t {
    QByteArrayData data[7];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StreamSearchModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StreamSearchModel_t qt_meta_stringdata_StreamSearchModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "StreamSearchModel"
QT_MOC_LITERAL(1, 18, 7), // "loading"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "loaded"
QT_MOC_LITERAL(4, 34, 5), // "error"
QT_MOC_LITERAL(5, 40, 3), // "msg"
QT_MOC_LITERAL(6, 44, 11) // "jobFinished"

    },
    "StreamSearchModel\0loading\0\0loaded\0"
    "error\0msg\0jobFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamSearchModel[] = {

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
       4,    1,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void StreamSearchModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StreamSearchModel *_t = static_cast<StreamSearchModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loading(); break;
        case 1: _t->loaded(); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->jobFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (StreamSearchModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamSearchModel::loading)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (StreamSearchModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamSearchModel::loaded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (StreamSearchModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&StreamSearchModel::error)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject StreamSearchModel::staticMetaObject = {
    { &ActionModel::staticMetaObject, qt_meta_stringdata_StreamSearchModel.data,
      qt_meta_data_StreamSearchModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *StreamSearchModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamSearchModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_StreamSearchModel.stringdata0))
        return static_cast<void*>(const_cast< StreamSearchModel*>(this));
    return ActionModel::qt_metacast(_clname);
}

int StreamSearchModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionModel::qt_metacall(_c, _id, _a);
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
void StreamSearchModel::loading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void StreamSearchModel::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void StreamSearchModel::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'transcodingjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devices/transcodingjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transcodingjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TranscodingJob_t {
    QByteArrayData data[7];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TranscodingJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TranscodingJob_t qt_meta_stringdata_TranscodingJob = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TranscodingJob"
QT_MOC_LITERAL(1, 15, 13), // "processOutput"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "finished"
QT_MOC_LITERAL(4, 39, 8), // "exitCode"
QT_MOC_LITERAL(5, 48, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(6, 69, 10) // "exitStatus"

    },
    "TranscodingJob\0processOutput\0\0finished\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TranscodingJob[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    2,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,

       0        // eod
};

void TranscodingJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TranscodingJob *_t = static_cast<TranscodingJob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processOutput(); break;
        case 1: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject TranscodingJob::staticMetaObject = {
    { &CopyJob::staticMetaObject, qt_meta_stringdata_TranscodingJob.data,
      qt_meta_data_TranscodingJob,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TranscodingJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TranscodingJob::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TranscodingJob.stringdata0))
        return static_cast<void*>(const_cast< TranscodingJob*>(this));
    return CopyJob::qt_metacast(_clname);
}

int TranscodingJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CopyJob::qt_metacall(_c, _id, _a);
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

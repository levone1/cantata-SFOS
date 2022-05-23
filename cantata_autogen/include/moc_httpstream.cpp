/****************************************************************************
** Meta object code from reading C++ file 'httpstream.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mpd-interface/httpstream.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpstream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HttpStream_t {
    QByteArrayData data[16];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpStream_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpStream_t qt_meta_stringdata_HttpStream = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HttpStream"
QT_MOC_LITERAL(1, 11, 9), // "isEnabled"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 2), // "en"
QT_MOC_LITERAL(4, 25, 6), // "update"
QT_MOC_LITERAL(5, 32, 10), // "setEnabled"
QT_MOC_LITERAL(6, 43, 1), // "e"
QT_MOC_LITERAL(7, 45, 9), // "setVolume"
QT_MOC_LITERAL(8, 55, 3), // "vol"
QT_MOC_LITERAL(9, 59, 10), // "toggleMute"
QT_MOC_LITERAL(10, 70, 12), // "updateStatus"
QT_MOC_LITERAL(11, 83, 9), // "streamUrl"
QT_MOC_LITERAL(12, 93, 3), // "url"
QT_MOC_LITERAL(13, 97, 11), // "checkPlayer"
QT_MOC_LITERAL(14, 109, 17), // "bufferingProgress"
QT_MOC_LITERAL(15, 127, 8) // "progress"

    },
    "HttpStream\0isEnabled\0\0en\0update\0"
    "setEnabled\0e\0setVolume\0vol\0toggleMute\0"
    "updateStatus\0streamUrl\0url\0checkPlayer\0"
    "bufferingProgress\0progress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpStream[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   63,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x0a /* Public */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    1,   71,    2, 0x08 /* Private */,
      13,    0,   74,    2, 0x08 /* Private */,
      14,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void HttpStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpStream *_t = static_cast<HttpStream *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->toggleMute(); break;
        case 5: _t->updateStatus(); break;
        case 6: _t->streamUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->checkPlayer(); break;
        case 8: _t->bufferingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HttpStream::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpStream::isEnabled)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HttpStream::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HttpStream::update)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject HttpStream::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HttpStream.data,
      qt_meta_data_HttpStream,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HttpStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpStream::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HttpStream.stringdata0))
        return static_cast<void*>(const_cast< HttpStream*>(this));
    return QObject::qt_metacast(_clname);
}

int HttpStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void HttpStream::isEnabled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HttpStream::update()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

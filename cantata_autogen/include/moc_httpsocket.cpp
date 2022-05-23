/****************************************************************************
** Meta object code from reading C++ file 'httpsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../http/httpsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HttpSocket_t {
    QByteArrayData data[16];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HttpSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HttpSocket_t qt_meta_stringdata_HttpSocket = {
    {
QT_MOC_LITERAL(0, 0, 10), // "HttpSocket"
QT_MOC_LITERAL(1, 11, 9), // "terminate"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "mpdAddress"
QT_MOC_LITERAL(4, 33, 1), // "a"
QT_MOC_LITERAL(5, 35, 19), // "handleNewConnection"
QT_MOC_LITERAL(6, 55, 10), // "readClient"
QT_MOC_LITERAL(7, 66, 13), // "discardClient"
QT_MOC_LITERAL(8, 80, 14), // "cantataStreams"
QT_MOC_LITERAL(9, 95, 5), // "files"
QT_MOC_LITERAL(10, 101, 11), // "QList<Song>"
QT_MOC_LITERAL(11, 113, 5), // "songs"
QT_MOC_LITERAL(12, 119, 8), // "isUpdate"
QT_MOC_LITERAL(13, 128, 10), // "removedIds"
QT_MOC_LITERAL(14, 139, 12), // "QSet<qint32>"
QT_MOC_LITERAL(15, 152, 3) // "ids"

    },
    "HttpSocket\0terminate\0\0mpdAddress\0a\0"
    "handleNewConnection\0readClient\0"
    "discardClient\0cantataStreams\0files\0"
    "QList<Song>\0songs\0isUpdate\0removedIds\0"
    "QSet<qint32>\0ids"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HttpSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,
       8,    2,   64,    2, 0x08 /* Private */,
      13,    1,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    9,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void HttpSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HttpSocket *_t = static_cast<HttpSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->terminate(); break;
        case 1: _t->mpdAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleNewConnection(); break;
        case 3: _t->readClient(); break;
        case 4: _t->discardClient(); break;
        case 5: _t->cantataStreams((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 6: _t->cantataStreams((*reinterpret_cast< const QList<Song>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->removedIds((*reinterpret_cast< const QSet<qint32>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<qint32> >(); break;
            }
            break;
        }
    }
}

const QMetaObject HttpSocket::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_HttpSocket.data,
      qt_meta_data_HttpSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HttpSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HttpSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HttpSocket.stringdata0))
        return static_cast<void*>(const_cast< HttpSocket*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int HttpSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

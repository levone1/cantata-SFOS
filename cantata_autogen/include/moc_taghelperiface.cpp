/****************************************************************************
** Meta object code from reading C++ file 'taghelperiface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tags/taghelperiface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taghelperiface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TagHelperIface_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagHelperIface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagHelperIface_t qt_meta_stringdata_TagHelperIface = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TagHelperIface"
QT_MOC_LITERAL(1, 15, 5), // "close"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "stopHelper"
QT_MOC_LITERAL(4, 33, 7), // "sendMsg"
QT_MOC_LITERAL(5, 41, 9), // "dataReady"
QT_MOC_LITERAL(6, 51, 12) // "helperClosed"

    },
    "TagHelperIface\0close\0\0stopHelper\0"
    "sendMsg\0dataReady\0helperClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagHelperIface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TagHelperIface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TagHelperIface *_t = static_cast<TagHelperIface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->close(); break;
        case 1: _t->stopHelper(); break;
        case 2: _t->sendMsg(); break;
        case 3: _t->dataReady(); break;
        case 4: _t->helperClosed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TagHelperIface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TagHelperIface.data,
      qt_meta_data_TagHelperIface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TagHelperIface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagHelperIface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TagHelperIface.stringdata0))
        return static_cast<void*>(const_cast< TagHelperIface*>(this));
    return QObject::qt_metacast(_clname);
}

int TagHelperIface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE

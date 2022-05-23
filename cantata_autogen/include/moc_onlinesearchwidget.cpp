/****************************************************************************
** Meta object code from reading C++ file 'onlinesearchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../online/onlinesearchwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'onlinesearchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OnlineSearchWidget_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OnlineSearchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OnlineSearchWidget_t qt_meta_stringdata_OnlineSearchWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "OnlineSearchWidget"
QT_MOC_LITERAL(1, 19, 13), // "headerClicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "level"
QT_MOC_LITERAL(4, 40, 12), // "statsUpdated"
QT_MOC_LITERAL(5, 53, 5), // "songs"
QT_MOC_LITERAL(6, 59, 4) // "time"

    },
    "OnlineSearchWidget\0headerClicked\0\0"
    "level\0statsUpdated\0songs\0time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OnlineSearchWidget[] = {

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
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    5,    6,

       0        // eod
};

void OnlineSearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OnlineSearchWidget *_t = static_cast<OnlineSearchWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->headerClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->statsUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject OnlineSearchWidget::staticMetaObject = {
    { &SinglePageWidget::staticMetaObject, qt_meta_stringdata_OnlineSearchWidget.data,
      qt_meta_data_OnlineSearchWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OnlineSearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OnlineSearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OnlineSearchWidget.stringdata0))
        return static_cast<void*>(const_cast< OnlineSearchWidget*>(this));
    return SinglePageWidget::qt_metacast(_clname);
}

int OnlineSearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinglePageWidget::qt_metacall(_c, _id, _a);
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

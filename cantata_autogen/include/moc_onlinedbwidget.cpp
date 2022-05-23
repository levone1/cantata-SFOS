/****************************************************************************
** Meta object code from reading C++ file 'onlinedbwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../online/onlinedbwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'onlinedbwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OnlineDbWidget_t {
    QByteArrayData data[12];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OnlineDbWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OnlineDbWidget_t qt_meta_stringdata_OnlineDbWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OnlineDbWidget"
QT_MOC_LITERAL(1, 15, 14), // "groupByChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "firstTimePrompt"
QT_MOC_LITERAL(4, 47, 13), // "headerClicked"
QT_MOC_LITERAL(5, 61, 5), // "level"
QT_MOC_LITERAL(6, 67, 9), // "configure"
QT_MOC_LITERAL(7, 77, 17), // "updateToPlayQueue"
QT_MOC_LITERAL(8, 95, 3), // "idx"
QT_MOC_LITERAL(9, 99, 7), // "replace"
QT_MOC_LITERAL(10, 107, 14), // "addRandomAlbum"
QT_MOC_LITERAL(11, 122, 10) // "modelReset"

    },
    "OnlineDbWidget\0groupByChanged\0\0"
    "firstTimePrompt\0headerClicked\0level\0"
    "configure\0updateToPlayQueue\0idx\0replace\0"
    "addRandomAlbum\0modelReset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OnlineDbWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    2,   55,    2, 0x08 /* Private */,
      10,    0,   60,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Bool,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OnlineDbWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OnlineDbWidget *_t = static_cast<OnlineDbWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->groupByChanged(); break;
        case 1: _t->firstTimePrompt(); break;
        case 2: _t->headerClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->configure(); break;
        case 4: _t->updateToPlayQueue((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->addRandomAlbum(); break;
        case 6: _t->modelReset(); break;
        default: ;
        }
    }
}

const QMetaObject OnlineDbWidget::staticMetaObject = {
    { &SinglePageWidget::staticMetaObject, qt_meta_stringdata_OnlineDbWidget.data,
      qt_meta_data_OnlineDbWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OnlineDbWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OnlineDbWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OnlineDbWidget.stringdata0))
        return static_cast<void*>(const_cast< OnlineDbWidget*>(this));
    return SinglePageWidget::qt_metacast(_clname);
}

int OnlineDbWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinglePageWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

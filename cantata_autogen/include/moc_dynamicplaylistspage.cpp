/****************************************************************************
** Meta object code from reading C++ file 'dynamicplaylistspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../playlists/dynamicplaylistspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dynamicplaylistspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DynamicPlaylistsPage_t {
    QByteArrayData data[14];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DynamicPlaylistsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DynamicPlaylistsPage_t qt_meta_stringdata_DynamicPlaylistsPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "DynamicPlaylistsPage"
QT_MOC_LITERAL(1, 21, 20), // "remoteDynamicSupport"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 1), // "s"
QT_MOC_LITERAL(4, 45, 3), // "add"
QT_MOC_LITERAL(5, 49, 4), // "edit"
QT_MOC_LITERAL(6, 54, 6), // "remove"
QT_MOC_LITERAL(7, 61, 5), // "start"
QT_MOC_LITERAL(8, 67, 4), // "stop"
QT_MOC_LITERAL(9, 72, 6), // "toggle"
QT_MOC_LITERAL(10, 79, 7), // "running"
QT_MOC_LITERAL(11, 87, 6), // "status"
QT_MOC_LITERAL(12, 94, 13), // "headerClicked"
QT_MOC_LITERAL(13, 108, 5) // "level"

    },
    "DynamicPlaylistsPage\0remoteDynamicSupport\0"
    "\0s\0add\0edit\0remove\0start\0stop\0toggle\0"
    "running\0status\0headerClicked\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DynamicPlaylistsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void DynamicPlaylistsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DynamicPlaylistsPage *_t = static_cast<DynamicPlaylistsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->remoteDynamicSupport((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->add(); break;
        case 2: _t->edit(); break;
        case 3: _t->remove(); break;
        case 4: _t->start(); break;
        case 5: _t->stop(); break;
        case 6: _t->toggle(); break;
        case 7: _t->running((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->headerClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DynamicPlaylistsPage::staticMetaObject = {
    { &SinglePageWidget::staticMetaObject, qt_meta_stringdata_DynamicPlaylistsPage.data,
      qt_meta_data_DynamicPlaylistsPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DynamicPlaylistsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DynamicPlaylistsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DynamicPlaylistsPage.stringdata0))
        return static_cast<void*>(const_cast< DynamicPlaylistsPage*>(this));
    return SinglePageWidget::qt_metacast(_clname);
}

int DynamicPlaylistsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinglePageWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE

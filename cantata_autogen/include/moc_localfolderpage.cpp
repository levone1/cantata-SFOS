/****************************************************************************
** Meta object code from reading C++ file 'localfolderpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gui/localfolderpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'localfolderpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LocalFolderBrowsePage_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalFolderBrowsePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalFolderBrowsePage_t qt_meta_stringdata_LocalFolderBrowsePage = {
    {
QT_MOC_LITERAL(0, 0, 21), // "LocalFolderBrowsePage"
QT_MOC_LITERAL(1, 22, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 13), // "headerClicked"
QT_MOC_LITERAL(4, 55, 5), // "level"
QT_MOC_LITERAL(5, 61, 15) // "openFileManager"

    },
    "LocalFolderBrowsePage\0itemDoubleClicked\0"
    "\0headerClicked\0level\0openFileManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalFolderBrowsePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       3,    1,   32,    2, 0x08 /* Private */,
       5,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void LocalFolderBrowsePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LocalFolderBrowsePage *_t = static_cast<LocalFolderBrowsePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->headerClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->openFileManager(); break;
        default: ;
        }
    }
}

const QMetaObject LocalFolderBrowsePage::staticMetaObject = {
    { &SinglePageWidget::staticMetaObject, qt_meta_stringdata_LocalFolderBrowsePage.data,
      qt_meta_data_LocalFolderBrowsePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LocalFolderBrowsePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalFolderBrowsePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LocalFolderBrowsePage.stringdata0))
        return static_cast<void*>(const_cast< LocalFolderBrowsePage*>(this));
    return SinglePageWidget::qt_metacast(_clname);
}

int LocalFolderBrowsePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinglePageWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

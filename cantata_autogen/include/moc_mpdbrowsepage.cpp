/****************************************************************************
** Meta object code from reading C++ file 'mpdbrowsepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gui/mpdbrowsepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpdbrowsepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MpdBrowsePage_t {
    QByteArrayData data[15];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MpdBrowsePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MpdBrowsePage_t qt_meta_stringdata_MpdBrowsePage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MpdBrowsePage"
QT_MOC_LITERAL(1, 14, 11), // "addToDevice"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "from"
QT_MOC_LITERAL(4, 32, 2), // "to"
QT_MOC_LITERAL(5, 35, 11), // "QList<Song>"
QT_MOC_LITERAL(6, 47, 5), // "songs"
QT_MOC_LITERAL(7, 53, 11), // "deleteSongs"
QT_MOC_LITERAL(8, 65, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(9, 83, 15), // "openFileManager"
QT_MOC_LITERAL(10, 99, 17), // "updateToPlayQueue"
QT_MOC_LITERAL(11, 117, 3), // "idx"
QT_MOC_LITERAL(12, 121, 7), // "replace"
QT_MOC_LITERAL(13, 129, 13), // "headerClicked"
QT_MOC_LITERAL(14, 143, 5) // "level"

    },
    "MpdBrowsePage\0addToDevice\0\0from\0to\0"
    "QList<Song>\0songs\0deleteSongs\0"
    "itemDoubleClicked\0openFileManager\0"
    "updateToPlayQueue\0idx\0replace\0"
    "headerClicked\0level"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MpdBrowsePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       7,    2,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   56,    2, 0x0a /* Public */,
       9,    0,   59,    2, 0x0a /* Public */,
      10,    2,   60,    2, 0x08 /* Private */,
      13,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void MpdBrowsePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MpdBrowsePage *_t = static_cast<MpdBrowsePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addToDevice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QList<Song>(*)>(_a[3]))); break;
        case 1: _t->deleteSongs((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<Song>(*)>(_a[2]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->openFileManager(); break;
        case 4: _t->updateToPlayQueue((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->headerClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MpdBrowsePage::*_t)(const QString & , const QString & , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpdBrowsePage::addToDevice)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MpdBrowsePage::*_t)(const QString & , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpdBrowsePage::deleteSongs)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MpdBrowsePage::staticMetaObject = {
    { &SinglePageWidget::staticMetaObject, qt_meta_stringdata_MpdBrowsePage.data,
      qt_meta_data_MpdBrowsePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MpdBrowsePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpdBrowsePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MpdBrowsePage.stringdata0))
        return static_cast<void*>(const_cast< MpdBrowsePage*>(this));
    return SinglePageWidget::qt_metacast(_clname);
}

int MpdBrowsePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinglePageWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MpdBrowsePage::addToDevice(const QString & _t1, const QString & _t2, const QList<Song> & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MpdBrowsePage::deleteSongs(const QString & _t1, const QList<Song> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

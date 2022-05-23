/****************************************************************************
** Meta object code from reading C++ file 'devicespage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devices/devicespage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicespage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DevicesPage_t {
    QByteArrayData data[25];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DevicesPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DevicesPage_t qt_meta_stringdata_DevicesPage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "DevicesPage"
QT_MOC_LITERAL(1, 12, 11), // "addToDevice"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 4), // "from"
QT_MOC_LITERAL(4, 30, 2), // "to"
QT_MOC_LITERAL(5, 33, 11), // "QList<Song>"
QT_MOC_LITERAL(6, 45, 5), // "songs"
QT_MOC_LITERAL(7, 51, 11), // "deleteSongs"
QT_MOC_LITERAL(8, 63, 17), // "itemDoubleClicked"
QT_MOC_LITERAL(9, 81, 11), // "searchItems"
QT_MOC_LITERAL(10, 93, 14), // "controlActions"
QT_MOC_LITERAL(11, 108, 13), // "copyToLibrary"
QT_MOC_LITERAL(12, 122, 15), // "configureDevice"
QT_MOC_LITERAL(13, 138, 13), // "refreshDevice"
QT_MOC_LITERAL(14, 152, 15), // "addRemoteDevice"
QT_MOC_LITERAL(15, 168, 18), // "forgetRemoteDevice"
QT_MOC_LITERAL(16, 187, 4), // "sync"
QT_MOC_LITERAL(17, 192, 12), // "toggleDevice"
QT_MOC_LITERAL(18, 205, 7), // "updated"
QT_MOC_LITERAL(19, 213, 3), // "idx"
QT_MOC_LITERAL(20, 217, 9), // "cdMatches"
QT_MOC_LITERAL(21, 227, 3), // "udi"
QT_MOC_LITERAL(22, 231, 14), // "QList<CdAlbum>"
QT_MOC_LITERAL(23, 246, 6), // "albums"
QT_MOC_LITERAL(24, 253, 11) // "editDetails"

    },
    "DevicesPage\0addToDevice\0\0from\0to\0"
    "QList<Song>\0songs\0deleteSongs\0"
    "itemDoubleClicked\0searchItems\0"
    "controlActions\0copyToLibrary\0"
    "configureDevice\0refreshDevice\0"
    "addRemoteDevice\0forgetRemoteDevice\0"
    "sync\0toggleDevice\0updated\0idx\0cdMatches\0"
    "udi\0QList<CdAlbum>\0albums\0editDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DevicesPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   94,    2, 0x06 /* Public */,
       7,    2,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  106,    2, 0x0a /* Public */,
       9,    0,  109,    2, 0x0a /* Public */,
      10,    0,  110,    2, 0x0a /* Public */,
      11,    0,  111,    2, 0x0a /* Public */,
      12,    0,  112,    2, 0x0a /* Public */,
      13,    0,  113,    2, 0x0a /* Public */,
       7,    0,  114,    2, 0x0a /* Public */,
      14,    0,  115,    2, 0x0a /* Public */,
      15,    0,  116,    2, 0x0a /* Public */,
      16,    0,  117,    2, 0x0a /* Public */,
      17,    0,  118,    2, 0x0a /* Public */,
      18,    1,  119,    2, 0x0a /* Public */,
      20,    2,  122,    2, 0x0a /* Public */,
      24,    0,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    3,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   19,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 22,   21,   23,
    QMetaType::Void,

       0        // eod
};

void DevicesPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DevicesPage *_t = static_cast<DevicesPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addToDevice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QList<Song>(*)>(_a[3]))); break;
        case 1: _t->deleteSongs((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<Song>(*)>(_a[2]))); break;
        case 2: _t->itemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->searchItems(); break;
        case 4: _t->controlActions(); break;
        case 5: _t->copyToLibrary(); break;
        case 6: _t->configureDevice(); break;
        case 7: _t->refreshDevice(); break;
        case 8: _t->deleteSongs(); break;
        case 9: _t->addRemoteDevice(); break;
        case 10: _t->forgetRemoteDevice(); break;
        case 11: _t->sync(); break;
        case 12: _t->toggleDevice(); break;
        case 13: _t->updated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->cdMatches((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<CdAlbum>(*)>(_a[2]))); break;
        case 15: _t->editDetails(); break;
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
            typedef void (DevicesPage::*_t)(const QString & , const QString & , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DevicesPage::addToDevice)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DevicesPage::*_t)(const QString & , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DevicesPage::deleteSongs)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject DevicesPage::staticMetaObject = {
    { &SinglePageWidget::staticMetaObject, qt_meta_stringdata_DevicesPage.data,
      qt_meta_data_DevicesPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DevicesPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DevicesPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DevicesPage.stringdata0))
        return static_cast<void*>(const_cast< DevicesPage*>(this));
    return SinglePageWidget::qt_metacast(_clname);
}

int DevicesPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SinglePageWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void DevicesPage::addToDevice(const QString & _t1, const QString & _t2, const QList<Song> & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DevicesPage::deleteSongs(const QString & _t1, const QList<Song> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

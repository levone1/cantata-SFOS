/****************************************************************************
** Meta object code from reading C++ file 'browsemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/browsemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browsemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BrowseModel_t {
    QByteArrayData data[12];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrowseModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrowseModel_t qt_meta_stringdata_BrowseModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BrowseModel"
QT_MOC_LITERAL(1, 12, 10), // "listFolder"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "path"
QT_MOC_LITERAL(4, 29, 17), // "connectionChanged"
QT_MOC_LITERAL(5, 47, 12), // "statsUpdated"
QT_MOC_LITERAL(6, 60, 14), // "MPDStatsValues"
QT_MOC_LITERAL(7, 75, 5), // "stats"
QT_MOC_LITERAL(8, 81, 14), // "folderContents"
QT_MOC_LITERAL(9, 96, 7), // "folders"
QT_MOC_LITERAL(10, 104, 11), // "QList<Song>"
QT_MOC_LITERAL(11, 116, 5) // "songs"

    },
    "BrowseModel\0listFolder\0\0path\0"
    "connectionChanged\0statsUpdated\0"
    "MPDStatsValues\0stats\0folderContents\0"
    "folders\0QList<Song>\0songs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrowseModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       8,    3,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, 0x80000000 | 10,    3,    9,   11,

       0        // eod
};

void BrowseModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BrowseModel *_t = static_cast<BrowseModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->connectionChanged(); break;
        case 2: _t->statsUpdated((*reinterpret_cast< const MPDStatsValues(*)>(_a[1]))); break;
        case 3: _t->folderContents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QList<Song>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BrowseModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BrowseModel::listFolder)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BrowseModel::staticMetaObject = {
    { &ActionModel::staticMetaObject, qt_meta_stringdata_BrowseModel.data,
      qt_meta_data_BrowseModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BrowseModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrowseModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BrowseModel.stringdata0))
        return static_cast<void*>(const_cast< BrowseModel*>(this));
    return ActionModel::qt_metacast(_clname);
}

int BrowseModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ActionModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BrowseModel::listFolder(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

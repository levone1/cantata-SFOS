/****************************************************************************
** Meta object code from reading C++ file 'trackorganiser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tags/trackorganiser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackorganiser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TrackOrganiser_t {
    QByteArrayData data[12];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackOrganiser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackOrganiser_t qt_meta_stringdata_TrackOrganiser = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TrackOrganiser"
QT_MOC_LITERAL(1, 15, 6), // "update"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 23), // "configureFilenameScheme"
QT_MOC_LITERAL(4, 47, 10), // "updateView"
QT_MOC_LITERAL(5, 58, 11), // "startRename"
QT_MOC_LITERAL(6, 70, 10), // "renameFile"
QT_MOC_LITERAL(7, 81, 16), // "controlRemoveAct"
QT_MOC_LITERAL(8, 98, 11), // "removeItems"
QT_MOC_LITERAL(9, 110, 18), // "showRatingsMessage"
QT_MOC_LITERAL(10, 129, 17), // "setFilenameScheme"
QT_MOC_LITERAL(11, 147, 4) // "text"

    },
    "TrackOrganiser\0update\0\0configureFilenameScheme\0"
    "updateView\0startRename\0renameFile\0"
    "controlRemoveAct\0removeItems\0"
    "showRatingsMessage\0setFilenameScheme\0"
    "text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackOrganiser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void TrackOrganiser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrackOrganiser *_t = static_cast<TrackOrganiser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->configureFilenameScheme(); break;
        case 2: _t->updateView(); break;
        case 3: _t->startRename(); break;
        case 4: _t->renameFile(); break;
        case 5: _t->controlRemoveAct(); break;
        case 6: _t->removeItems(); break;
        case 7: _t->showRatingsMessage(); break;
        case 8: _t->setFilenameScheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TrackOrganiser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TrackOrganiser::update)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TrackOrganiser::staticMetaObject = {
    { &SongDialog::staticMetaObject, qt_meta_stringdata_TrackOrganiser.data,
      qt_meta_data_TrackOrganiser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TrackOrganiser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackOrganiser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TrackOrganiser.stringdata0))
        return static_cast<void*>(const_cast< TrackOrganiser*>(this));
    if (!strcmp(_clname, "Ui::TrackOrganiser"))
        return static_cast< Ui::TrackOrganiser*>(const_cast< TrackOrganiser*>(this));
    return SongDialog::qt_metacast(_clname);
}

int TrackOrganiser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SongDialog::qt_metacall(_c, _id, _a);
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
void TrackOrganiser::update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

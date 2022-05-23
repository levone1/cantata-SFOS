/****************************************************************************
** Meta object code from reading C++ file 'rgdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../replaygain/rgdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rgdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RgDialog_t {
    QByteArrayData data[14];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RgDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RgDialog_t qt_meta_stringdata_RgDialog = {
    {
QT_MOC_LITERAL(0, 0, 8), // "RgDialog"
QT_MOC_LITERAL(1, 9, 6), // "update"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 15), // "scannerProgress"
QT_MOC_LITERAL(4, 33, 1), // "p"
QT_MOC_LITERAL(5, 35, 11), // "scannerDone"
QT_MOC_LITERAL(6, 47, 8), // "songTags"
QT_MOC_LITERAL(7, 56, 5), // "index"
QT_MOC_LITERAL(8, 62, 16), // "Tags::ReplayGain"
QT_MOC_LITERAL(9, 79, 4), // "tags"
QT_MOC_LITERAL(10, 84, 13), // "tagReaderDone"
QT_MOC_LITERAL(11, 98, 13), // "toggleDisplay"
QT_MOC_LITERAL(12, 112, 16), // "controlRemoveAct"
QT_MOC_LITERAL(13, 129, 11) // "removeItems"

    },
    "RgDialog\0update\0\0scannerProgress\0p\0"
    "scannerDone\0songTags\0index\0Tags::ReplayGain\0"
    "tags\0tagReaderDone\0toggleDisplay\0"
    "controlRemoveAct\0removeItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RgDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    2,   59,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RgDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RgDialog *_t = static_cast<RgDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->scannerProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->scannerDone(); break;
        case 3: _t->songTags((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Tags::ReplayGain(*)>(_a[2]))); break;
        case 4: _t->tagReaderDone(); break;
        case 5: _t->toggleDisplay(); break;
        case 6: _t->controlRemoveAct(); break;
        case 7: _t->removeItems(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Tags::ReplayGain >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RgDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RgDialog::update)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RgDialog::staticMetaObject = {
    { &SongDialog::staticMetaObject, qt_meta_stringdata_RgDialog.data,
      qt_meta_data_RgDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RgDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RgDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RgDialog.stringdata0))
        return static_cast<void*>(const_cast< RgDialog*>(this));
    return SongDialog::qt_metacast(_clname);
}

int RgDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SongDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void RgDialog::update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

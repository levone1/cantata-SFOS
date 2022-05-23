/****************************************************************************
** Meta object code from reading C++ file 'playlistrulesdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../playlists/playlistrulesdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistrulesdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlaylistRulesDialog_t {
    QByteArrayData data[16];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaylistRulesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaylistRulesDialog_t qt_meta_stringdata_PlaylistRulesDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PlaylistRulesDialog"
QT_MOC_LITERAL(1, 20, 5), // "saved"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 1), // "s"
QT_MOC_LITERAL(4, 29, 14), // "enableOkButton"
QT_MOC_LITERAL(5, 44, 14), // "controlButtons"
QT_MOC_LITERAL(6, 59, 3), // "add"
QT_MOC_LITERAL(7, 63, 7), // "addRule"
QT_MOC_LITERAL(8, 71, 20), // "RulesPlaylists::Rule"
QT_MOC_LITERAL(9, 92, 4), // "rule"
QT_MOC_LITERAL(10, 97, 4), // "edit"
QT_MOC_LITERAL(11, 102, 6), // "remove"
QT_MOC_LITERAL(12, 109, 9), // "showAbout"
QT_MOC_LITERAL(13, 119, 8), // "setOrder"
QT_MOC_LITERAL(14, 128, 13), // "ratingChanged"
QT_MOC_LITERAL(15, 142, 5) // "value"

    },
    "PlaylistRulesDialog\0saved\0\0s\0"
    "enableOkButton\0controlButtons\0add\0"
    "addRule\0RulesPlaylists::Rule\0rule\0"
    "edit\0remove\0showAbout\0setOrder\0"
    "ratingChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistRulesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,

       0        // eod
};

void PlaylistRulesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlaylistRulesDialog *_t = static_cast<PlaylistRulesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->enableOkButton(); break;
        case 2: _t->controlButtons(); break;
        case 3: _t->add(); break;
        case 4: _t->addRule((*reinterpret_cast< const RulesPlaylists::Rule(*)>(_a[1]))); break;
        case 5: _t->edit(); break;
        case 6: _t->remove(); break;
        case 7: _t->showAbout(); break;
        case 8: _t->setOrder(); break;
        case 9: _t->ratingChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PlaylistRulesDialog::staticMetaObject = {
    { &Dialog::staticMetaObject, qt_meta_stringdata_PlaylistRulesDialog.data,
      qt_meta_data_PlaylistRulesDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlaylistRulesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistRulesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistRulesDialog.stringdata0))
        return static_cast<void*>(const_cast< PlaylistRulesDialog*>(this));
    if (!strcmp(_clname, "Ui::PlaylistRules"))
        return static_cast< Ui::PlaylistRules*>(const_cast< PlaylistRulesDialog*>(this));
    return Dialog::qt_metacast(_clname);
}

int PlaylistRulesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

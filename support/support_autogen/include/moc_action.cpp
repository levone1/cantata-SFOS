/****************************************************************************
** Meta object code from reading C++ file 'action.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../action.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'action.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Action_t {
    QByteArrayData data[13];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Action_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Action_t qt_meta_stringdata_Action = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Action"
QT_MOC_LITERAL(1, 7, 9), // "triggered"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(4, 35, 7), // "buttons"
QT_MOC_LITERAL(5, 43, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(6, 65, 9), // "modifiers"
QT_MOC_LITERAL(7, 75, 13), // "slotTriggered"
QT_MOC_LITERAL(8, 89, 8), // "shortcut"
QT_MOC_LITERAL(9, 98, 20), // "shortcutConfigurable"
QT_MOC_LITERAL(10, 119, 12), // "ShortcutType"
QT_MOC_LITERAL(11, 132, 14), // "ActiveShortcut"
QT_MOC_LITERAL(12, 147, 15) // "DefaultShortcut"

    },
    "Action\0triggered\0\0Qt::MouseButtons\0"
    "buttons\0Qt::KeyboardModifiers\0modifiers\0"
    "slotTriggered\0shortcut\0shortcutConfigurable\0"
    "ShortcutType\0ActiveShortcut\0DefaultShortcut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Action[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QKeySequence, 0x00095103,
       9, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
      10, 0x1,    2,   40,

 // enum data: key, value
      11, uint(Action::ActiveShortcut),
      12, uint(Action::DefaultShortcut),

       0        // eod
};

void Action::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Action *_t = static_cast<Action *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2]))); break;
        case 1: _t->slotTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Action::*_t)(Qt::MouseButtons , Qt::KeyboardModifiers );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Action::triggered)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Action *_t = static_cast<Action *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QKeySequence*>(_v) = _t->shortcut(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isShortcutConfigurable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Action *_t = static_cast<Action *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShortcut(*reinterpret_cast< QKeySequence*>(_v)); break;
        case 1: _t->setShortcutConfigurable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Action::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_Action.data,
      qt_meta_data_Action,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Action::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Action::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Action.stringdata0))
        return static_cast<void*>(const_cast< Action*>(this));
    return QAction::qt_metacast(_clname);
}

int Action::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Action::triggered(Qt::MouseButtons _t1, Qt::KeyboardModifiers _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

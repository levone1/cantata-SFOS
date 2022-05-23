/****************************************************************************
** Meta object code from reading C++ file 'keysequencewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../keysequencewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keysequencewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KeySequenceWidget_t {
    QByteArrayData data[11];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeySequenceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeySequenceWidget_t qt_meta_stringdata_KeySequenceWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "KeySequenceWidget"
QT_MOC_LITERAL(1, 18, 18), // "keySequenceChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 3), // "seq"
QT_MOC_LITERAL(4, 42, 11), // "conflicting"
QT_MOC_LITERAL(5, 54, 7), // "clicked"
QT_MOC_LITERAL(6, 62, 14), // "setKeySequence"
QT_MOC_LITERAL(7, 77, 21), // "updateShortcutDisplay"
QT_MOC_LITERAL(8, 99, 14), // "startRecording"
QT_MOC_LITERAL(9, 114, 15), // "cancelRecording"
QT_MOC_LITERAL(10, 130, 5) // "clear"

    },
    "KeySequenceWidget\0keySequenceChanged\0"
    "\0seq\0conflicting\0clicked\0setKeySequence\0"
    "updateShortcutDisplay\0startRecording\0"
    "cancelRecording\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeySequenceWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       1,    1,   59,    2, 0x26 /* Public | MethodCloned */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QKeySequence, QMetaType::QModelIndex,    3,    4,
    QMetaType::Void, QMetaType::QKeySequence,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QKeySequence,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void KeySequenceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeySequenceWidget *_t = static_cast<KeySequenceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->keySequenceChanged((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->keySequenceChanged((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 2: _t->clicked(); break;
        case 3: _t->setKeySequence((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 4: _t->updateShortcutDisplay(); break;
        case 5: _t->startRecording(); break;
        case 6: _t->cancelRecording(); break;
        case 7: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KeySequenceWidget::*_t)(const QKeySequence & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeySequenceWidget::keySequenceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (KeySequenceWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeySequenceWidget::clicked)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject KeySequenceWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_KeySequenceWidget.data,
      qt_meta_data_KeySequenceWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KeySequenceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeySequenceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KeySequenceWidget.stringdata0))
        return static_cast<void*>(const_cast< KeySequenceWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int KeySequenceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void KeySequenceWidget::keySequenceChanged(const QKeySequence & _t1, const QModelIndex & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void KeySequenceWidget::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
struct qt_meta_stringdata_KeySequenceButton_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeySequenceButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeySequenceButton_t qt_meta_stringdata_KeySequenceButton = {
    {
QT_MOC_LITERAL(0, 0, 17) // "KeySequenceButton"

    },
    "KeySequenceButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeySequenceButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void KeySequenceButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject KeySequenceButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_KeySequenceButton.data,
      qt_meta_data_KeySequenceButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KeySequenceButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeySequenceButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KeySequenceButton.stringdata0))
        return static_cast<void*>(const_cast< KeySequenceButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int KeySequenceButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

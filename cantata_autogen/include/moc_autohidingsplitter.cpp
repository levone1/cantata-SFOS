/****************************************************************************
** Meta object code from reading C++ file 'autohidingsplitter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/autohidingsplitter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autohidingsplitter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AutohidingSplitterHandle_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutohidingSplitterHandle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutohidingSplitterHandle_t qt_meta_stringdata_AutohidingSplitterHandle = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AutohidingSplitterHandle"
QT_MOC_LITERAL(1, 25, 12), // "hoverStarted"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13) // "hoverFinished"

    },
    "AutohidingSplitterHandle\0hoverStarted\0"
    "\0hoverFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutohidingSplitterHandle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutohidingSplitterHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutohidingSplitterHandle *_t = static_cast<AutohidingSplitterHandle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hoverStarted(); break;
        case 1: _t->hoverFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutohidingSplitterHandle::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutohidingSplitterHandle::hoverStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AutohidingSplitterHandle::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutohidingSplitterHandle::hoverFinished)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AutohidingSplitterHandle::staticMetaObject = {
    { &ThinSplitterHandle::staticMetaObject, qt_meta_stringdata_AutohidingSplitterHandle.data,
      qt_meta_data_AutohidingSplitterHandle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AutohidingSplitterHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutohidingSplitterHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AutohidingSplitterHandle.stringdata0))
        return static_cast<void*>(const_cast< AutohidingSplitterHandle*>(this));
    return ThinSplitterHandle::qt_metacast(_clname);
}

int AutohidingSplitterHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ThinSplitterHandle::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void AutohidingSplitterHandle::hoverStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AutohidingSplitterHandle::hoverFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_AutohidingSplitter_t {
    QByteArrayData data[18];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutohidingSplitter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutohidingSplitter_t qt_meta_stringdata_AutohidingSplitter = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AutohidingSplitter"
QT_MOC_LITERAL(1, 19, 18), // "setAutoHideEnabled"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 2), // "en"
QT_MOC_LITERAL(4, 42, 10), // "setVisible"
QT_MOC_LITERAL(5, 53, 7), // "visible"
QT_MOC_LITERAL(6, 61, 18), // "widgetHoverStarted"
QT_MOC_LITERAL(7, 80, 5), // "index"
QT_MOC_LITERAL(8, 86, 19), // "widgetHoverFinished"
QT_MOC_LITERAL(9, 106, 18), // "handleHoverStarted"
QT_MOC_LITERAL(10, 125, 19), // "handleHoverFinished"
QT_MOC_LITERAL(11, 145, 17), // "updateResizeQueue"
QT_MOC_LITERAL(12, 163, 18), // "setWidgetForHiding"
QT_MOC_LITERAL(13, 182, 14), // "startAnimation"
QT_MOC_LITERAL(14, 197, 24), // "updateAfterSplitterMoved"
QT_MOC_LITERAL(15, 222, 3), // "pos"
QT_MOC_LITERAL(16, 226, 20), // "inhibitModifications"
QT_MOC_LITERAL(17, 247, 19) // "resumeModifications"

    },
    "AutohidingSplitter\0setAutoHideEnabled\0"
    "\0en\0setVisible\0visible\0widgetHoverStarted\0"
    "index\0widgetHoverFinished\0handleHoverStarted\0"
    "handleHoverFinished\0updateResizeQueue\0"
    "setWidgetForHiding\0startAnimation\0"
    "updateAfterSplitterMoved\0pos\0"
    "inhibitModifications\0resumeModifications"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutohidingSplitter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       6,    1,   80,    2, 0x08 /* Private */,
       8,    1,   83,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    2,   91,    2, 0x08 /* Private */,
      16,    0,   96,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutohidingSplitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutohidingSplitter *_t = static_cast<AutohidingSplitter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAutoHideEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->widgetHoverStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->widgetHoverFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleHoverStarted(); break;
        case 5: _t->handleHoverFinished(); break;
        case 6: _t->updateResizeQueue(); break;
        case 7: _t->setWidgetForHiding(); break;
        case 8: _t->startAnimation(); break;
        case 9: _t->updateAfterSplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->inhibitModifications(); break;
        case 11: _t->resumeModifications(); break;
        default: ;
        }
    }
}

const QMetaObject AutohidingSplitter::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_AutohidingSplitter.data,
      qt_meta_data_AutohidingSplitter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AutohidingSplitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutohidingSplitter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AutohidingSplitter.stringdata0))
        return static_cast<void*>(const_cast< AutohidingSplitter*>(this));
    return QSplitter::qt_metacast(_clname);
}

int AutohidingSplitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

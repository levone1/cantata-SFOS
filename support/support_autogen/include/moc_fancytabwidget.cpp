/****************************************************************************
** Meta object code from reading C++ file 'fancytabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fancytabwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fancytabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FancyTabProxyStyle_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FancyTabProxyStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FancyTabProxyStyle_t qt_meta_stringdata_FancyTabProxyStyle = {
    {
QT_MOC_LITERAL(0, 0, 18) // "FancyTabProxyStyle"

    },
    "FancyTabProxyStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FancyTabProxyStyle[] = {

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

void FancyTabProxyStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FancyTabProxyStyle::staticMetaObject = {
    { &QProxyStyle::staticMetaObject, qt_meta_stringdata_FancyTabProxyStyle.data,
      qt_meta_data_FancyTabProxyStyle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FancyTabProxyStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FancyTabProxyStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FancyTabProxyStyle.stringdata0))
        return static_cast<void*>(const_cast< FancyTabProxyStyle*>(this));
    return QProxyStyle::qt_metacast(_clname);
}

int FancyTabProxyStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_FancyTabBar_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FancyTabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FancyTabBar_t qt_meta_stringdata_FancyTabBar = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FancyTabBar"
QT_MOC_LITERAL(1, 12, 14), // "currentChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16) // "emitCurrentIndex"

    },
    "FancyTabBar\0currentChanged\0\0"
    "emitCurrentIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FancyTabBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void FancyTabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FancyTabBar *_t = static_cast<FancyTabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->emitCurrentIndex(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FancyTabBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FancyTabBar::currentChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FancyTabBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FancyTabBar.data,
      qt_meta_data_FancyTabBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FancyTabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FancyTabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FancyTabBar.stringdata0))
        return static_cast<void*>(const_cast< FancyTabBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int FancyTabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void FancyTabBar::currentChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FancyTabWidget_t {
    QByteArrayData data[14];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FancyTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FancyTabWidget_t qt_meta_stringdata_FancyTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FancyTabWidget"
QT_MOC_LITERAL(1, 15, 14), // "currentChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "index"
QT_MOC_LITERAL(4, 37, 12), // "styleChanged"
QT_MOC_LITERAL(5, 50, 12), // "styleSetting"
QT_MOC_LITERAL(6, 63, 10), // "tabToggled"
QT_MOC_LITERAL(7, 74, 15), // "setCurrentIndex"
QT_MOC_LITERAL(8, 90, 8), // "setStyle"
QT_MOC_LITERAL(9, 99, 1), // "s"
QT_MOC_LITERAL(10, 101, 9), // "toggleTab"
QT_MOC_LITERAL(11, 111, 3), // "tab"
QT_MOC_LITERAL(12, 115, 4), // "show"
QT_MOC_LITERAL(13, 120, 10) // "showWidget"

    },
    "FancyTabWidget\0currentChanged\0\0index\0"
    "styleChanged\0styleSetting\0tabToggled\0"
    "setCurrentIndex\0setStyle\0s\0toggleTab\0"
    "tab\0show\0showWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FancyTabWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,
      10,    2,   64,    2, 0x0a /* Public */,
      13,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void FancyTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FancyTabWidget *_t = static_cast<FancyTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->styleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->tabToggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->toggleTab((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->showWidget((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FancyTabWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FancyTabWidget::currentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FancyTabWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FancyTabWidget::styleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FancyTabWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FancyTabWidget::tabToggled)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject FancyTabWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FancyTabWidget.data,
      qt_meta_data_FancyTabWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FancyTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FancyTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FancyTabWidget.stringdata0))
        return static_cast<void*>(const_cast< FancyTabWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int FancyTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FancyTabWidget::currentChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FancyTabWidget::styleChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FancyTabWidget::tabToggled(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'searchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/searchwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SearchWidget_t {
    QByteArrayData data[13];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchWidget_t qt_meta_stringdata_SearchWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SearchWidget"
QT_MOC_LITERAL(1, 13, 11), // "textChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "returnPressed"
QT_MOC_LITERAL(4, 40, 6), // "active"
QT_MOC_LITERAL(5, 47, 6), // "toggle"
QT_MOC_LITERAL(6, 54, 5), // "clear"
QT_MOC_LITERAL(7, 60, 8), // "activate"
QT_MOC_LITERAL(8, 69, 4), // "text"
QT_MOC_LITERAL(9, 74, 4), // "show"
QT_MOC_LITERAL(10, 79, 5), // "close"
QT_MOC_LITERAL(11, 85, 17), // "categoryActivated"
QT_MOC_LITERAL(12, 103, 1) // "c"

    },
    "SearchWidget\0textChanged\0\0returnPressed\0"
    "active\0toggle\0clear\0activate\0text\0"
    "show\0close\0categoryActivated\0c"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    0,   67,    2, 0x06 /* Public */,
       4,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   71,    2, 0x0a /* Public */,
       6,    0,   72,    2, 0x0a /* Public */,
       7,    1,   73,    2, 0x0a /* Public */,
       7,    0,   76,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void SearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchWidget *_t = static_cast<SearchWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->returnPressed(); break;
        case 2: _t->active((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->toggle(); break;
        case 4: _t->clear(); break;
        case 5: _t->activate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->activate(); break;
        case 7: _t->show(); break;
        case 8: _t->close(); break;
        case 9: _t->categoryActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchWidget::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SearchWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchWidget::returnPressed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SearchWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchWidget::active)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SearchWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SearchWidget.data,
      qt_meta_data_SearchWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SearchWidget.stringdata0))
        return static_cast<void*>(const_cast< SearchWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SearchWidget::textChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SearchWidget::returnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SearchWidget::active(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

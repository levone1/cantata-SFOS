/****************************************************************************
** Meta object code from reading C++ file 'multipagewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/multipagewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multipagewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MultiPageWidget_t {
    QByteArrayData data[7];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiPageWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiPageWidget_t qt_meta_stringdata_MultiPageWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "MultiPageWidget"
QT_MOC_LITERAL(1, 16, 17), // "updatePageSubText"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "name"
QT_MOC_LITERAL(4, 40, 4), // "text"
QT_MOC_LITERAL(5, 45, 12), // "showMainView"
QT_MOC_LITERAL(6, 58, 7) // "setPage"

    },
    "MultiPageWidget\0updatePageSubText\0\0"
    "name\0text\0showMainView\0setPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiPageWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       5,    0,   34,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultiPageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiPageWidget *_t = static_cast<MultiPageWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updatePageSubText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->showMainView(); break;
        case 2: _t->setPage(); break;
        default: ;
        }
    }
}

const QMetaObject MultiPageWidget::staticMetaObject = {
    { &StackedPageWidget::staticMetaObject, qt_meta_stringdata_MultiPageWidget.data,
      qt_meta_data_MultiPageWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MultiPageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiPageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MultiPageWidget.stringdata0))
        return static_cast<void*>(const_cast< MultiPageWidget*>(this));
    return StackedPageWidget::qt_metacast(_clname);
}

int MultiPageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StackedPageWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

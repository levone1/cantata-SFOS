/****************************************************************************
** Meta object code from reading C++ file 'shortcutssettingswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../shortcutssettingswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcutssettingswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ShortcutsFilter_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutsFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutsFilter_t qt_meta_stringdata_ShortcutsFilter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ShortcutsFilter"
QT_MOC_LITERAL(1, 16, 15), // "setFilterString"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12) // "filterString"

    },
    "ShortcutsFilter\0setFilterString\0\0"
    "filterString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutsFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void ShortcutsFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShortcutsFilter *_t = static_cast<ShortcutsFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setFilterString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ShortcutsFilter::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_ShortcutsFilter.data,
      qt_meta_data_ShortcutsFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ShortcutsFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutsFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutsFilter.stringdata0))
        return static_cast<void*>(const_cast< ShortcutsFilter*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int ShortcutsFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ShortcutsSettingsWidget_t {
    QByteArrayData data[10];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShortcutsSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShortcutsSettingsWidget_t qt_meta_stringdata_ShortcutsSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ShortcutsSettingsWidget"
QT_MOC_LITERAL(1, 24, 4), // "save"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25), // "on_searchEdit_textChanged"
QT_MOC_LITERAL(4, 56, 4), // "text"
QT_MOC_LITERAL(5, 61, 18), // "keySequenceChanged"
QT_MOC_LITERAL(6, 80, 3), // "seq"
QT_MOC_LITERAL(7, 84, 11), // "conflicting"
QT_MOC_LITERAL(8, 96, 15), // "setWidgetStates"
QT_MOC_LITERAL(9, 112, 22) // "toggledCustomOrDefault"

    },
    "ShortcutsSettingsWidget\0save\0\0"
    "on_searchEdit_textChanged\0text\0"
    "keySequenceChanged\0seq\0conflicting\0"
    "setWidgetStates\0toggledCustomOrDefault"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShortcutsSettingsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    2,   43,    2, 0x08 /* Private */,
       8,    0,   48,    2, 0x08 /* Private */,
       9,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QKeySequence, QMetaType::QModelIndex,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ShortcutsSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ShortcutsSettingsWidget *_t = static_cast<ShortcutsSettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->save(); break;
        case 1: _t->on_searchEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->keySequenceChanged((*reinterpret_cast< const QKeySequence(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->setWidgetStates(); break;
        case 4: _t->toggledCustomOrDefault(); break;
        default: ;
        }
    }
}

const QMetaObject ShortcutsSettingsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ShortcutsSettingsWidget.data,
      qt_meta_data_ShortcutsSettingsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ShortcutsSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShortcutsSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ShortcutsSettingsWidget.stringdata0))
        return static_cast<void*>(const_cast< ShortcutsSettingsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ShortcutsSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

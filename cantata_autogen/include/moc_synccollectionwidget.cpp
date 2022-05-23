/****************************************************************************
** Meta object code from reading C++ file 'synccollectionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devices/synccollectionwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'synccollectionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SyncCollectionWidget_t {
    QByteArrayData data[16];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SyncCollectionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SyncCollectionWidget_t qt_meta_stringdata_SyncCollectionWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SyncCollectionWidget"
QT_MOC_LITERAL(1, 21, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 9), // "configure"
QT_MOC_LITERAL(4, 49, 11), // "dataChanged"
QT_MOC_LITERAL(5, 61, 2), // "tl"
QT_MOC_LITERAL(6, 64, 2), // "br"
QT_MOC_LITERAL(7, 67, 10), // "checkItems"
QT_MOC_LITERAL(8, 78, 12), // "unCheckItems"
QT_MOC_LITERAL(9, 91, 16), // "delaySearchItems"
QT_MOC_LITERAL(10, 108, 11), // "searchItems"
QT_MOC_LITERAL(11, 120, 9), // "expandAll"
QT_MOC_LITERAL(12, 130, 11), // "collapseAll"
QT_MOC_LITERAL(13, 142, 11), // "itemClicked"
QT_MOC_LITERAL(14, 154, 5), // "index"
QT_MOC_LITERAL(15, 160, 13) // "itemActivated"

    },
    "SyncCollectionWidget\0selectionChanged\0"
    "\0configure\0dataChanged\0tl\0br\0checkItems\0"
    "unCheckItems\0delaySearchItems\0searchItems\0"
    "expandAll\0collapseAll\0itemClicked\0"
    "index\0itemActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SyncCollectionWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   71,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,
      13,    1,   82,    2, 0x08 /* Private */,
      15,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   14,
    QMetaType::Void, QMetaType::QModelIndex,   14,

       0        // eod
};

void SyncCollectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SyncCollectionWidget *_t = static_cast<SyncCollectionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->configure(); break;
        case 2: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->checkItems(); break;
        case 4: _t->unCheckItems(); break;
        case 5: _t->delaySearchItems(); break;
        case 6: _t->searchItems(); break;
        case 7: _t->expandAll(); break;
        case 8: _t->collapseAll(); break;
        case 9: _t->itemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->itemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SyncCollectionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncCollectionWidget::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SyncCollectionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SyncCollectionWidget::configure)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SyncCollectionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SyncCollectionWidget.data,
      qt_meta_data_SyncCollectionWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SyncCollectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyncCollectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SyncCollectionWidget.stringdata0))
        return static_cast<void*>(const_cast< SyncCollectionWidget*>(this));
    if (!strcmp(_clname, "Ui::SyncCollectionWidget"))
        return static_cast< Ui::SyncCollectionWidget*>(const_cast< SyncCollectionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SyncCollectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void SyncCollectionWidget::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SyncCollectionWidget::configure()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

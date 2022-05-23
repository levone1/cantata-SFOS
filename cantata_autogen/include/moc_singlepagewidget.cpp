/****************************************************************************
** Meta object code from reading C++ file 'singlepagewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/singlepagewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singlepagewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SinglePageWidget_t {
    QByteArrayData data[15];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SinglePageWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SinglePageWidget_t qt_meta_stringdata_SinglePageWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SinglePageWidget"
QT_MOC_LITERAL(1, 17, 5), // "close"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "searchItems"
QT_MOC_LITERAL(4, 36, 3), // "add"
QT_MOC_LITERAL(5, 40, 5), // "files"
QT_MOC_LITERAL(6, 46, 6), // "action"
QT_MOC_LITERAL(7, 53, 8), // "priority"
QT_MOC_LITERAL(8, 62, 16), // "decreasePriority"
QT_MOC_LITERAL(9, 79, 18), // "addSongsToPlaylist"
QT_MOC_LITERAL(10, 98, 4), // "name"
QT_MOC_LITERAL(11, 103, 8), // "doSearch"
QT_MOC_LITERAL(12, 112, 7), // "refresh"
QT_MOC_LITERAL(13, 120, 14), // "controlActions"
QT_MOC_LITERAL(14, 135, 16) // "viewModeSelected"

    },
    "SinglePageWidget\0close\0\0searchItems\0"
    "add\0files\0action\0priority\0decreasePriority\0"
    "addSongsToPlaylist\0name\0doSearch\0"
    "refresh\0controlActions\0viewModeSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SinglePageWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    4,   56,    2, 0x06 /* Public */,
       9,    2,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   70,    2, 0x0a /* Public */,
      12,    0,   71,    2, 0x0a /* Public */,
      13,    0,   72,    2, 0x0a /* Public */,
      14,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int, QMetaType::UChar, QMetaType::Bool,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   10,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SinglePageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SinglePageWidget *_t = static_cast<SinglePageWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->close(); break;
        case 1: _t->searchItems(); break;
        case 2: _t->add((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->addSongsToPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 4: _t->doSearch(); break;
        case 5: _t->refresh(); break;
        case 6: _t->controlActions(); break;
        case 7: _t->viewModeSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SinglePageWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SinglePageWidget::close)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SinglePageWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SinglePageWidget::searchItems)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SinglePageWidget::*_t)(const QStringList & , int , quint8 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SinglePageWidget::add)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SinglePageWidget::*_t)(const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SinglePageWidget::addSongsToPlaylist)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SinglePageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SinglePageWidget.data,
      qt_meta_data_SinglePageWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SinglePageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SinglePageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SinglePageWidget.stringdata0))
        return static_cast<void*>(const_cast< SinglePageWidget*>(this));
    if (!strcmp(_clname, "Page"))
        return static_cast< Page*>(const_cast< SinglePageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SinglePageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SinglePageWidget::close()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SinglePageWidget::searchItems()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SinglePageWidget::add(const QStringList & _t1, int _t2, quint8 _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SinglePageWidget::addSongsToPlaylist(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

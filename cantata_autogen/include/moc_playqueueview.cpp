/****************************************************************************
** Meta object code from reading C++ file 'playqueueview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/playqueueview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playqueueview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlayQueueView_t {
    QByteArrayData data[16];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayQueueView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayQueueView_t qt_meta_stringdata_PlayQueueView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PlayQueueView"
QT_MOC_LITERAL(1, 14, 13), // "itemsSelected"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "doubleClicked"
QT_MOC_LITERAL(4, 43, 17), // "cancelStreamFetch"
QT_MOC_LITERAL(5, 61, 11), // "focusSearch"
QT_MOC_LITERAL(6, 73, 4), // "text"
QT_MOC_LITERAL(7, 78, 11), // "showSpinner"
QT_MOC_LITERAL(8, 90, 11), // "hideSpinner"
QT_MOC_LITERAL(9, 102, 8), // "setImage"
QT_MOC_LITERAL(10, 111, 3), // "img"
QT_MOC_LITERAL(11, 115, 17), // "streamFetchStatus"
QT_MOC_LITERAL(12, 133, 3), // "msg"
QT_MOC_LITERAL(13, 137, 12), // "searchActive"
QT_MOC_LITERAL(14, 150, 1), // "a"
QT_MOC_LITERAL(15, 152, 4) // "fade"

    },
    "PlayQueueView\0itemsSelected\0\0doubleClicked\0"
    "cancelStreamFetch\0focusSearch\0text\0"
    "showSpinner\0hideSpinner\0setImage\0img\0"
    "streamFetchStatus\0msg\0searchActive\0a\0"
    "fade"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayQueueView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    0,   65,    2, 0x06 /* Public */,
       5,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      13,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Bool,   14,

 // properties: name, type, flags
      15, QMetaType::Float, 0x00095103,

       0        // eod
};

void PlayQueueView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayQueueView *_t = static_cast<PlayQueueView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemsSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->cancelStreamFetch(); break;
        case 3: _t->focusSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->showSpinner(); break;
        case 5: _t->hideSpinner(); break;
        case 6: _t->setImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 7: _t->streamFetchStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->searchActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlayQueueView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueView::itemsSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlayQueueView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueView::doubleClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlayQueueView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueView::cancelStreamFetch)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlayQueueView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueView::focusSearch)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PlayQueueView *_t = static_cast<PlayQueueView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->fade(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PlayQueueView *_t = static_cast<PlayQueueView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFade(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PlayQueueView::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_PlayQueueView.data,
      qt_meta_data_PlayQueueView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlayQueueView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayQueueView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlayQueueView.stringdata0))
        return static_cast<void*>(const_cast< PlayQueueView*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int PlayQueueView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PlayQueueView::itemsSelected(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlayQueueView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlayQueueView::cancelStreamFetch()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void PlayQueueView::focusSearch(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE

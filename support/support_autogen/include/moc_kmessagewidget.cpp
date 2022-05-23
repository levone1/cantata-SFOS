/****************************************************************************
** Meta object code from reading C++ file 'kmessagewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kmessagewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kmessagewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KMsgWidget_t {
    QByteArrayData data[22];
    char stringdata0[265];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KMsgWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KMsgWidget_t qt_meta_stringdata_KMsgWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "KMsgWidget"
QT_MOC_LITERAL(1, 11, 7), // "setText"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "text"
QT_MOC_LITERAL(4, 25, 11), // "setWordWrap"
QT_MOC_LITERAL(5, 37, 8), // "wordWrap"
QT_MOC_LITERAL(6, 46, 21), // "setCloseButtonVisible"
QT_MOC_LITERAL(7, 68, 7), // "visible"
QT_MOC_LITERAL(8, 76, 14), // "setMessageType"
QT_MOC_LITERAL(9, 91, 23), // "KMsgWidget::MessageType"
QT_MOC_LITERAL(10, 115, 4), // "type"
QT_MOC_LITERAL(11, 120, 12), // "animatedShow"
QT_MOC_LITERAL(12, 133, 12), // "animatedHide"
QT_MOC_LITERAL(13, 146, 19), // "slotTimeLineChanged"
QT_MOC_LITERAL(14, 166, 20), // "slotTimeLineFinished"
QT_MOC_LITERAL(15, 187, 18), // "closeButtonVisible"
QT_MOC_LITERAL(16, 206, 11), // "messageType"
QT_MOC_LITERAL(17, 218, 11), // "MessageType"
QT_MOC_LITERAL(18, 230, 8), // "Positive"
QT_MOC_LITERAL(19, 239, 11), // "Information"
QT_MOC_LITERAL(20, 251, 7), // "Warning"
QT_MOC_LITERAL(21, 259, 5) // "Error"

    },
    "KMsgWidget\0setText\0\0text\0setWordWrap\0"
    "wordWrap\0setCloseButtonVisible\0visible\0"
    "setMessageType\0KMsgWidget::MessageType\0"
    "type\0animatedShow\0animatedHide\0"
    "slotTimeLineChanged\0slotTimeLineFinished\0"
    "closeButtonVisible\0messageType\0"
    "MessageType\0Positive\0Information\0"
    "Warning\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KMsgWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   72, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       8,    1,   63,    2, 0x0a /* Public */,
      11,    0,   66,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x0a /* Public */,
      13,    1,   68,    2, 0x08 /* Private */,
      14,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095103,
       5, QMetaType::Bool, 0x00095103,
      15, QMetaType::Bool, 0x00095103,
      16, 0x80000000 | 17, 0x0009510b,

 // enums: name, flags, count, data
      17, 0x0,    4,   88,

 // enum data: key, value
      18, uint(KMsgWidget::Positive),
      19, uint(KMsgWidget::Information),
      20, uint(KMsgWidget::Warning),
      21, uint(KMsgWidget::Error),

       0        // eod
};

void KMsgWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KMsgWidget *_t = static_cast<KMsgWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setWordWrap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setCloseButtonVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setMessageType((*reinterpret_cast< KMsgWidget::MessageType(*)>(_a[1]))); break;
        case 4: _t->animatedShow(); break;
        case 5: _t->animatedHide(); break;
        case 6: _t->d->slotTimeLineChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->d->slotTimeLineFinished(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        KMsgWidget *_t = static_cast<KMsgWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->wordWrap(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isCloseButtonVisible(); break;
        case 3: *reinterpret_cast< MessageType*>(_v) = _t->messageType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        KMsgWidget *_t = static_cast<KMsgWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCloseButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMessageType(*reinterpret_cast< MessageType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject KMsgWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_KMsgWidget.data,
      qt_meta_data_KMsgWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KMsgWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMsgWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KMsgWidget.stringdata0))
        return static_cast<void*>(const_cast< KMsgWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int KMsgWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

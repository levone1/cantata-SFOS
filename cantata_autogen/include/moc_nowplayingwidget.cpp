/****************************************************************************
** Meta object code from reading C++ file 'nowplayingwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/nowplayingwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nowplayingwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PosSlider_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PosSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PosSlider_t qt_meta_stringdata_PosSlider = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PosSlider"
QT_MOC_LITERAL(1, 10, 11), // "positionSet"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "PosSlider\0positionSet\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PosSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void PosSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PosSlider *_t = static_cast<PosSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionSet(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PosSlider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PosSlider::positionSet)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PosSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_PosSlider.data,
      qt_meta_data_PosSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PosSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PosSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PosSlider.stringdata0))
        return static_cast<void*>(const_cast< PosSlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int PosSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PosSlider::positionSet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_NowPlayingWidget_t {
    QByteArrayData data[15];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NowPlayingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NowPlayingWidget_t qt_meta_stringdata_NowPlayingWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "NowPlayingWidget"
QT_MOC_LITERAL(1, 17, 14), // "sliderReleased"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "mpdPoll"
QT_MOC_LITERAL(4, 41, 9), // "setRating"
QT_MOC_LITERAL(5, 51, 4), // "file"
QT_MOC_LITERAL(6, 56, 1), // "r"
QT_MOC_LITERAL(7, 58, 6), // "rating"
QT_MOC_LITERAL(8, 65, 11), // "updateTimes"
QT_MOC_LITERAL(9, 77, 9), // "updatePos"
QT_MOC_LITERAL(10, 87, 7), // "pressed"
QT_MOC_LITERAL(11, 95, 8), // "released"
QT_MOC_LITERAL(12, 104, 1), // "v"
QT_MOC_LITERAL(13, 106, 10), // "updateInfo"
QT_MOC_LITERAL(14, 117, 8) // "copyInfo"

    },
    "NowPlayingWidget\0sliderReleased\0\0"
    "mpdPoll\0setRating\0file\0r\0rating\0"
    "updateTimes\0updatePos\0pressed\0released\0"
    "v\0updateInfo\0copyInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NowPlayingWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    2,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   76,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
       4,    1,   85,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NowPlayingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NowPlayingWidget *_t = static_cast<NowPlayingWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliderReleased(); break;
        case 1: _t->mpdPoll(); break;
        case 2: _t->setRating((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 3: _t->rating((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 4: _t->updateTimes(); break;
        case 5: _t->updatePos(); break;
        case 6: _t->pressed(); break;
        case 7: _t->released(); break;
        case 8: _t->setRating((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->updateInfo(); break;
        case 10: _t->copyInfo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NowPlayingWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NowPlayingWidget::sliderReleased)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NowPlayingWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NowPlayingWidget::mpdPoll)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NowPlayingWidget::*_t)(const QString & , quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NowPlayingWidget::setRating)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject NowPlayingWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_NowPlayingWidget.data,
      qt_meta_data_NowPlayingWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NowPlayingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NowPlayingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NowPlayingWidget.stringdata0))
        return static_cast<void*>(const_cast< NowPlayingWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int NowPlayingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NowPlayingWidget::sliderReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void NowPlayingWidget::mpdPoll()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void NowPlayingWidget::setRating(const QString & _t1, quint8 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'mpris.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dbus/mpris.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpris.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Mpris_t {
    QByteArrayData data[40];
    char stringdata0[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mpris_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mpris_t qt_meta_stringdata_Mpris = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Mpris"
QT_MOC_LITERAL(1, 6, 9), // "setRandom"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 6), // "toggle"
QT_MOC_LITERAL(4, 24, 9), // "setRepeat"
QT_MOC_LITERAL(5, 34, 9), // "setSeekId"
QT_MOC_LITERAL(6, 44, 6), // "songId"
QT_MOC_LITERAL(7, 51, 4), // "time"
QT_MOC_LITERAL(8, 56, 4), // "seek"
QT_MOC_LITERAL(9, 61, 6), // "offset"
QT_MOC_LITERAL(10, 68, 9), // "setVolume"
QT_MOC_LITERAL(11, 78, 3), // "vol"
QT_MOC_LITERAL(12, 82, 14), // "showMainWindow"
QT_MOC_LITERAL(13, 97, 5), // "Raise"
QT_MOC_LITERAL(14, 103, 4), // "Quit"
QT_MOC_LITERAL(15, 108, 18), // "updateCurrentCover"
QT_MOC_LITERAL(16, 127, 8), // "fileName"
QT_MOC_LITERAL(17, 136, 12), // "updateStatus"
QT_MOC_LITERAL(18, 149, 4), // "Rate"
QT_MOC_LITERAL(19, 154, 8), // "Position"
QT_MOC_LITERAL(20, 163, 11), // "MinimumRate"
QT_MOC_LITERAL(21, 175, 11), // "MaximumRate"
QT_MOC_LITERAL(22, 187, 10), // "CanControl"
QT_MOC_LITERAL(23, 198, 7), // "CanPlay"
QT_MOC_LITERAL(24, 206, 8), // "CanPause"
QT_MOC_LITERAL(25, 215, 7), // "CanSeek"
QT_MOC_LITERAL(26, 223, 9), // "CanGoNext"
QT_MOC_LITERAL(27, 233, 13), // "CanGoPrevious"
QT_MOC_LITERAL(28, 247, 14), // "PlaybackStatus"
QT_MOC_LITERAL(29, 262, 10), // "LoopStatus"
QT_MOC_LITERAL(30, 273, 7), // "Shuffle"
QT_MOC_LITERAL(31, 281, 8), // "Metadata"
QT_MOC_LITERAL(32, 290, 6), // "Volume"
QT_MOC_LITERAL(33, 297, 7), // "CanQuit"
QT_MOC_LITERAL(34, 305, 8), // "CanRaise"
QT_MOC_LITERAL(35, 314, 12), // "DesktopEntry"
QT_MOC_LITERAL(36, 327, 12), // "HasTrackList"
QT_MOC_LITERAL(37, 340, 8), // "Identity"
QT_MOC_LITERAL(38, 349, 18), // "SupportedMimeTypes"
QT_MOC_LITERAL(39, 368, 19) // "SupportedUriSchemes"

    },
    "Mpris\0setRandom\0\0toggle\0setRepeat\0"
    "setSeekId\0songId\0time\0seek\0offset\0"
    "setVolume\0vol\0showMainWindow\0Raise\0"
    "Quit\0updateCurrentCover\0fileName\0"
    "updateStatus\0Rate\0Position\0MinimumRate\0"
    "MaximumRate\0CanControl\0CanPlay\0CanPause\0"
    "CanSeek\0CanGoNext\0CanGoPrevious\0"
    "PlaybackStatus\0LoopStatus\0Shuffle\0"
    "Metadata\0Volume\0CanQuit\0CanRaise\0"
    "DesktopEntry\0HasTrackList\0Identity\0"
    "SupportedMimeTypes\0SupportedUriSchemes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mpris[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      22,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    2,   70,    2, 0x06 /* Public */,
       8,    1,   75,    2, 0x06 /* Public */,
      10,    1,   78,    2, 0x06 /* Public */,
      12,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   82,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x0a /* Public */,
      15,    1,   84,    2, 0x0a /* Public */,
      17,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Double, 0x00095003,
      19, QMetaType::LongLong, 0x00095001,
      20, QMetaType::Double, 0x00095001,
      21, QMetaType::Double, 0x00095001,
      22, QMetaType::Bool, 0x00095001,
      23, QMetaType::Bool, 0x00095001,
      24, QMetaType::Bool, 0x00095001,
      25, QMetaType::Bool, 0x00095001,
      26, QMetaType::Bool, 0x00095001,
      27, QMetaType::Bool, 0x00095001,
      28, QMetaType::QString, 0x00095001,
      29, QMetaType::QString, 0x00095003,
      30, QMetaType::Bool, 0x00095003,
      31, QMetaType::QVariantMap, 0x00095001,
      32, QMetaType::Double, 0x00095003,
      33, QMetaType::Bool, 0x00095001,
      34, QMetaType::Bool, 0x00095001,
      35, QMetaType::QString, 0x00095001,
      36, QMetaType::Bool, 0x00095001,
      37, QMetaType::QString, 0x00095001,
      38, QMetaType::QStringList, 0x00095001,
      39, QMetaType::QStringList, 0x00095001,

       0        // eod
};

void Mpris::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mpris *_t = static_cast<Mpris *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setRandom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setRepeat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSeekId((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 3: _t->seek((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 4: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->showMainWindow(); break;
        case 6: _t->Raise(); break;
        case 7: _t->Quit(); break;
        case 8: _t->updateCurrentCover((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->updateStatus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Mpris::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mpris::setRandom)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Mpris::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mpris::setRepeat)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Mpris::*_t)(qint32 , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mpris::setSeekId)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Mpris::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mpris::seek)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Mpris::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mpris::setVolume)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Mpris::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Mpris::showMainWindow)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Mpris *_t = static_cast<Mpris *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->Rate(); break;
        case 1: *reinterpret_cast< qlonglong*>(_v) = _t->Position(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->MinimumRate(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->MaximumRate(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->CanControl(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->CanPlay(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->CanPause(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->CanSeek(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->CanGoNext(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->CanGoPrevious(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->PlaybackStatus(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->LoopStatus(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->Shuffle(); break;
        case 13: *reinterpret_cast< QVariantMap*>(_v) = _t->Metadata(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->Volume(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->CanQuit(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->CanRaise(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->DesktopEntry(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->HasTrackList(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->Identity(); break;
        case 20: *reinterpret_cast< QStringList*>(_v) = _t->SupportedMimeTypes(); break;
        case 21: *reinterpret_cast< QStringList*>(_v) = _t->SupportedUriSchemes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Mpris *_t = static_cast<Mpris *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetRate(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->SetLoopStatus(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->SetShuffle(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->SetVolume(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Mpris::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Mpris.data,
      qt_meta_data_Mpris,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Mpris::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mpris::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Mpris.stringdata0))
        return static_cast<void*>(const_cast< Mpris*>(this));
    return QObject::qt_metacast(_clname);
}

int Mpris::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Mpris::setRandom(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Mpris::setRepeat(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Mpris::setSeekId(qint32 _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Mpris::seek(qint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Mpris::setVolume(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Mpris::showMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

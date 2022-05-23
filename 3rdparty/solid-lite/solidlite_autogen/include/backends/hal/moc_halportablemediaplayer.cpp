/****************************************************************************
** Meta object code from reading C++ file 'halportablemediaplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../backends/hal/halportablemediaplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'halportablemediaplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Solid__Backends__Hal__PortableMediaPlayer_t {
    QByteArrayData data[1];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Solid__Backends__Hal__PortableMediaPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Solid__Backends__Hal__PortableMediaPlayer_t qt_meta_stringdata_Solid__Backends__Hal__PortableMediaPlayer = {
    {
QT_MOC_LITERAL(0, 0, 41) // "Solid::Backends::Hal::Portabl..."

    },
    "Solid::Backends::Hal::PortableMediaPlayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Solid__Backends__Hal__PortableMediaPlayer[] = {

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

void Solid::Backends::Hal::PortableMediaPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Solid::Backends::Hal::PortableMediaPlayer::staticMetaObject = {
    { &DeviceInterface::staticMetaObject, qt_meta_stringdata_Solid__Backends__Hal__PortableMediaPlayer.data,
      qt_meta_data_Solid__Backends__Hal__PortableMediaPlayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Solid::Backends::Hal::PortableMediaPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Solid::Backends::Hal::PortableMediaPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Solid__Backends__Hal__PortableMediaPlayer.stringdata0))
        return static_cast<void*>(const_cast< PortableMediaPlayer*>(this));
    if (!strcmp(_clname, "Solid::Ifaces::PortableMediaPlayer"))
        return static_cast< Solid::Ifaces::PortableMediaPlayer*>(const_cast< PortableMediaPlayer*>(this));
    if (!strcmp(_clname, "org.kde.Solid.Ifaces.PortableMediaPlayer/0.1"))
        return static_cast< Solid::Ifaces::PortableMediaPlayer*>(const_cast< PortableMediaPlayer*>(this));
    return DeviceInterface::qt_metacast(_clname);
}

int Solid::Backends::Hal::PortableMediaPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

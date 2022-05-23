/****************************************************************************
** Meta object code from reading C++ file 'tageditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tags/tageditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tageditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TagEditor_t {
    QByteArrayData data[25];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagEditor_t qt_meta_stringdata_TagEditor = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TagEditor"
QT_MOC_LITERAL(1, 10, 6), // "update"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "getRating"
QT_MOC_LITERAL(4, 28, 1), // "f"
QT_MOC_LITERAL(5, 30, 9), // "setRating"
QT_MOC_LITERAL(6, 40, 1), // "r"
QT_MOC_LITERAL(7, 42, 12), // "readComments"
QT_MOC_LITERAL(8, 55, 7), // "applyVa"
QT_MOC_LITERAL(9, 63, 8), // "revertVa"
QT_MOC_LITERAL(10, 72, 24), // "setAlbumArtistFromArtist"
QT_MOC_LITERAL(11, 97, 10), // "capitalise"
QT_MOC_LITERAL(12, 108, 12), // "checkChanged"
QT_MOC_LITERAL(13, 121, 18), // "adjustTrackNumbers"
QT_MOC_LITERAL(14, 140, 11), // "readRatings"
QT_MOC_LITERAL(15, 152, 12), // "writeRatings"
QT_MOC_LITERAL(16, 165, 12), // "updateEdited"
QT_MOC_LITERAL(17, 178, 9), // "isFromAll"
QT_MOC_LITERAL(18, 188, 7), // "setSong"
QT_MOC_LITERAL(19, 196, 4), // "Song"
QT_MOC_LITERAL(20, 201, 1), // "s"
QT_MOC_LITERAL(21, 203, 8), // "setIndex"
QT_MOC_LITERAL(22, 212, 3), // "idx"
QT_MOC_LITERAL(23, 216, 6), // "rating"
QT_MOC_LITERAL(24, 223, 11) // "checkRating"

    },
    "TagEditor\0update\0\0getRating\0f\0setRating\0"
    "r\0readComments\0applyVa\0revertVa\0"
    "setAlbumArtistFromArtist\0capitalise\0"
    "checkChanged\0adjustTrackNumbers\0"
    "readRatings\0writeRatings\0updateEdited\0"
    "isFromAll\0setSong\0Song\0s\0setIndex\0idx\0"
    "rating\0checkRating"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,
       5,    2,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  113,    2, 0x08 /* Private */,
       8,    0,  114,    2, 0x08 /* Private */,
       9,    0,  115,    2, 0x08 /* Private */,
      10,    0,  116,    2, 0x08 /* Private */,
      11,    0,  117,    2, 0x08 /* Private */,
      12,    0,  118,    2, 0x08 /* Private */,
      13,    0,  119,    2, 0x08 /* Private */,
      14,    0,  120,    2, 0x08 /* Private */,
      15,    0,  121,    2, 0x08 /* Private */,
      16,    1,  122,    2, 0x08 /* Private */,
      16,    0,  125,    2, 0x28 /* Private | MethodCloned */,
      18,    1,  126,    2, 0x08 /* Private */,
      21,    1,  129,    2, 0x08 /* Private */,
      23,    2,  132,    2, 0x08 /* Private */,
      24,    0,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,    4,    6,
    QMetaType::Void,

       0        // eod
};

void TagEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TagEditor *_t = static_cast<TagEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->getRating((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setRating((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 3: _t->readComments(); break;
        case 4: _t->applyVa(); break;
        case 5: _t->revertVa(); break;
        case 6: _t->setAlbumArtistFromArtist(); break;
        case 7: _t->capitalise(); break;
        case 8: _t->checkChanged(); break;
        case 9: _t->adjustTrackNumbers(); break;
        case 10: _t->readRatings(); break;
        case 11: _t->writeRatings(); break;
        case 12: _t->updateEdited((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->updateEdited(); break;
        case 14: _t->setSong((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 15: _t->setIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->rating((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 17: _t->checkRating(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TagEditor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TagEditor::update)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TagEditor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TagEditor::getRating)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (TagEditor::*_t)(const QString & , quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TagEditor::setRating)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject TagEditor::staticMetaObject = {
    { &SongDialog::staticMetaObject, qt_meta_stringdata_TagEditor.data,
      qt_meta_data_TagEditor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TagEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TagEditor.stringdata0))
        return static_cast<void*>(const_cast< TagEditor*>(this));
    if (!strcmp(_clname, "Ui::TagEditor"))
        return static_cast< Ui::TagEditor*>(const_cast< TagEditor*>(this));
    return SongDialog::qt_metacast(_clname);
}

int TagEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SongDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void TagEditor::update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void TagEditor::getRating(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TagEditor::setRating(const QString & _t1, quint8 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

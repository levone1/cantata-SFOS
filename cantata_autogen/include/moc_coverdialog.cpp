/****************************************************************************
** Meta object code from reading C++ file 'coverdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gui/coverdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coverdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CoverPreview_t {
    QByteArrayData data[5];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoverPreview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoverPreview_t qt_meta_stringdata_CoverPreview = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CoverPreview"
QT_MOC_LITERAL(1, 13, 8), // "progress"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 2), // "rx"
QT_MOC_LITERAL(4, 26, 5) // "total"

    },
    "CoverPreview\0progress\0\0rx\0total"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoverPreview[] = {

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
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,

       0        // eod
};

void CoverPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoverPreview *_t = static_cast<CoverPreview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject CoverPreview::staticMetaObject = {
    { &Dialog::staticMetaObject, qt_meta_stringdata_CoverPreview.data,
      qt_meta_data_CoverPreview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CoverPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoverPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CoverPreview.stringdata0))
        return static_cast<void*>(const_cast< CoverPreview*>(this));
    return Dialog::qt_metacast(_clname);
}

int CoverPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CoverDialog_t {
    QByteArrayData data[18];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoverDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoverDialog_t qt_meta_stringdata_CoverDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CoverDialog"
QT_MOC_LITERAL(1, 12, 13), // "selectedCover"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "img"
QT_MOC_LITERAL(4, 31, 8), // "fileName"
QT_MOC_LITERAL(5, 40, 16), // "queryJobFinished"
QT_MOC_LITERAL(6, 57, 19), // "downloadJobFinished"
QT_MOC_LITERAL(7, 77, 9), // "showImage"
QT_MOC_LITERAL(8, 87, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(9, 104, 4), // "item"
QT_MOC_LITERAL(10, 109, 9), // "sendQuery"
QT_MOC_LITERAL(11, 119, 11), // "cancelQuery"
QT_MOC_LITERAL(12, 131, 11), // "checkStatus"
QT_MOC_LITERAL(13, 143, 12), // "addLocalFile"
QT_MOC_LITERAL(14, 156, 13), // "menuRequested"
QT_MOC_LITERAL(15, 170, 3), // "pos"
QT_MOC_LITERAL(16, 174, 12), // "removeImages"
QT_MOC_LITERAL(17, 187, 15) // "updateProviders"

    },
    "CoverDialog\0selectedCover\0\0img\0fileName\0"
    "queryJobFinished\0downloadJobFinished\0"
    "showImage\0QListWidgetItem*\0item\0"
    "sendQuery\0cancelQuery\0checkStatus\0"
    "addLocalFile\0menuRequested\0pos\0"
    "removeImages\0updateProviders"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoverDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   79,    2, 0x08 /* Private */,
       6,    0,   80,    2, 0x08 /* Private */,
       7,    1,   81,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    1,   88,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
      16,    0,   92,    2, 0x08 /* Private */,
      17,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CoverDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CoverDialog *_t = static_cast<CoverDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedCover((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->queryJobFinished(); break;
        case 2: _t->downloadJobFinished(); break;
        case 3: _t->showImage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->sendQuery(); break;
        case 5: _t->cancelQuery(); break;
        case 6: _t->checkStatus(); break;
        case 7: _t->addLocalFile(); break;
        case 8: _t->menuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->showImage(); break;
        case 10: _t->removeImages(); break;
        case 11: _t->updateProviders(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CoverDialog::*_t)(const QImage & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CoverDialog::selectedCover)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CoverDialog::staticMetaObject = {
    { &Dialog::staticMetaObject, qt_meta_stringdata_CoverDialog.data,
      qt_meta_data_CoverDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CoverDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoverDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CoverDialog.stringdata0))
        return static_cast<void*>(const_cast< CoverDialog*>(this));
    if (!strcmp(_clname, "Ui::CoverDialog"))
        return static_cast< Ui::CoverDialog*>(const_cast< CoverDialog*>(this));
    return Dialog::qt_metacast(_clname);
}

int CoverDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CoverDialog::selectedCover(const QImage & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

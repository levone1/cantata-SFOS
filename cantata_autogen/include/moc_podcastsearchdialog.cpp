/****************************************************************************
** Meta object code from reading C++ file 'podcastsearchdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../online/podcastsearchdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcastsearchdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PodcastPage_t {
    QByteArrayData data[10];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PodcastPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PodcastPage_t qt_meta_stringdata_PodcastPage = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PodcastPage"
QT_MOC_LITERAL(1, 12, 11), // "rssSelected"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "url"
QT_MOC_LITERAL(4, 29, 5), // "error"
QT_MOC_LITERAL(5, 35, 3), // "msg"
QT_MOC_LITERAL(6, 39, 16), // "selectionChanged"
QT_MOC_LITERAL(7, 56, 11), // "jobFinished"
QT_MOC_LITERAL(8, 68, 16), // "imageJobFinished"
QT_MOC_LITERAL(9, 85, 8) // "openLink"

    },
    "PodcastPage\0rssSelected\0\0url\0error\0"
    "msg\0selectionChanged\0jobFinished\0"
    "imageJobFinished\0openLink"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PodcastPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    3,

       0        // eod
};

void PodcastPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PodcastPage *_t = static_cast<PodcastPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rssSelected((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->selectionChanged(); break;
        case 3: _t->jobFinished(); break;
        case 4: _t->imageJobFinished(); break;
        case 5: _t->openLink((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PodcastPage::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PodcastPage::rssSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PodcastPage::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PodcastPage::error)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject PodcastPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PodcastPage.data,
      qt_meta_data_PodcastPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PodcastPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PodcastPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastPage.stringdata0))
        return static_cast<void*>(const_cast< PodcastPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int PodcastPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PodcastPage::rssSelected(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PodcastPage::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_PodcastSearchPage_t {
    QByteArrayData data[5];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PodcastSearchPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PodcastSearchPage_t qt_meta_stringdata_PodcastSearchPage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PodcastSearchPage"
QT_MOC_LITERAL(1, 18, 8), // "doSearch"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "parse"
QT_MOC_LITERAL(4, 34, 4) // "data"

    },
    "PodcastSearchPage\0doSearch\0\0parse\0"
    "data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PodcastSearchPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    4,

       0        // eod
};

void PodcastSearchPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PodcastSearchPage *_t = static_cast<PodcastSearchPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doSearch(); break;
        case 1: _t->parse((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PodcastSearchPage::staticMetaObject = {
    { &PodcastPage::staticMetaObject, qt_meta_stringdata_PodcastSearchPage.data,
      qt_meta_data_PodcastSearchPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PodcastSearchPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PodcastSearchPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastSearchPage.stringdata0))
        return static_cast<void*>(const_cast< PodcastSearchPage*>(this));
    return PodcastPage::qt_metacast(_clname);
}

int PodcastSearchPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PodcastPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_OpmlBrowsePage_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpmlBrowsePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpmlBrowsePage_t qt_meta_stringdata_OpmlBrowsePage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OpmlBrowsePage"
QT_MOC_LITERAL(1, 15, 6), // "reload"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "OpmlBrowsePage\0reload\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpmlBrowsePage[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void OpmlBrowsePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpmlBrowsePage *_t = static_cast<OpmlBrowsePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reload(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OpmlBrowsePage::staticMetaObject = {
    { &PodcastPage::staticMetaObject, qt_meta_stringdata_OpmlBrowsePage.data,
      qt_meta_data_OpmlBrowsePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpmlBrowsePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpmlBrowsePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpmlBrowsePage.stringdata0))
        return static_cast<void*>(const_cast< OpmlBrowsePage*>(this));
    return PodcastPage::qt_metacast(_clname);
}

int OpmlBrowsePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PodcastPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_PodcastUrlPage_t {
    QByteArrayData data[4];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PodcastUrlPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PodcastUrlPage_t qt_meta_stringdata_PodcastUrlPage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PodcastUrlPage"
QT_MOC_LITERAL(1, 15, 7), // "loadUrl"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8) // "openPath"

    },
    "PodcastUrlPage\0loadUrl\0\0openPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PodcastUrlPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PodcastUrlPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PodcastUrlPage *_t = static_cast<PodcastUrlPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadUrl(); break;
        case 1: _t->openPath(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PodcastUrlPage::staticMetaObject = {
    { &PodcastPage::staticMetaObject, qt_meta_stringdata_PodcastUrlPage.data,
      qt_meta_data_PodcastUrlPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PodcastUrlPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PodcastUrlPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastUrlPage.stringdata0))
        return static_cast<void*>(const_cast< PodcastUrlPage*>(this));
    return PodcastPage::qt_metacast(_clname);
}

int PodcastUrlPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PodcastPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_PodcastSearchDialog_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PodcastSearchDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PodcastSearchDialog_t qt_meta_stringdata_PodcastSearchDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PodcastSearchDialog"
QT_MOC_LITERAL(1, 20, 11), // "rssSelected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "url"
QT_MOC_LITERAL(4, 37, 9), // "showError"
QT_MOC_LITERAL(5, 47, 3), // "msg"
QT_MOC_LITERAL(6, 51, 8), // "showInfo"
QT_MOC_LITERAL(7, 60, 16), // "msgWidgetVisible"
QT_MOC_LITERAL(8, 77, 1), // "v"
QT_MOC_LITERAL(9, 79, 11) // "pageChanged"

    },
    "PodcastSearchDialog\0rssSelected\0\0url\0"
    "showError\0msg\0showInfo\0msgWidgetVisible\0"
    "v\0pageChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PodcastSearchDialog[] = {

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
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       7,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

       0        // eod
};

void PodcastSearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PodcastSearchDialog *_t = static_cast<PodcastSearchDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rssSelected((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->showError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->msgWidgetVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->pageChanged(); break;
        default: ;
        }
    }
}

const QMetaObject PodcastSearchDialog::staticMetaObject = {
    { &Dialog::staticMetaObject, qt_meta_stringdata_PodcastSearchDialog.data,
      qt_meta_data_PodcastSearchDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PodcastSearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PodcastSearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastSearchDialog.stringdata0))
        return static_cast<void*>(const_cast< PodcastSearchDialog*>(this));
    return Dialog::qt_metacast(_clname);
}

int PodcastSearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Dialog::qt_metacall(_c, _id, _a);
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

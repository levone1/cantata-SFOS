/****************************************************************************
** Meta object code from reading C++ file 'itemview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/itemview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_KeyEventHandler_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KeyEventHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KeyEventHandler_t qt_meta_stringdata_KeyEventHandler = {
    {
QT_MOC_LITERAL(0, 0, 15), // "KeyEventHandler"
QT_MOC_LITERAL(1, 16, 16), // "backspacePressed"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "KeyEventHandler\0backspacePressed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KeyEventHandler[] = {

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

void KeyEventHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        KeyEventHandler *_t = static_cast<KeyEventHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backspacePressed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (KeyEventHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&KeyEventHandler::backspacePressed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject KeyEventHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_KeyEventHandler.data,
      qt_meta_data_KeyEventHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *KeyEventHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KeyEventHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_KeyEventHandler.stringdata0))
        return static_cast<void*>(const_cast< KeyEventHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int KeyEventHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void KeyEventHandler::backspacePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_ItemView_t {
    QByteArrayData data[48];
    char stringdata0[490];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ItemView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ItemView_t qt_meta_stringdata_ItemView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ItemView"
QT_MOC_LITERAL(1, 9, 11), // "searchItems"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "searchIsActive"
QT_MOC_LITERAL(4, 37, 13), // "itemsSelected"
QT_MOC_LITERAL(5, 51, 13), // "doubleClicked"
QT_MOC_LITERAL(6, 65, 12), // "rootIndexSet"
QT_MOC_LITERAL(7, 78, 13), // "headerClicked"
QT_MOC_LITERAL(8, 92, 5), // "level"
QT_MOC_LITERAL(9, 98, 17), // "updateToPlayQueue"
QT_MOC_LITERAL(10, 116, 3), // "idx"
QT_MOC_LITERAL(11, 120, 7), // "replace"
QT_MOC_LITERAL(12, 128, 11), // "focusSearch"
QT_MOC_LITERAL(13, 140, 4), // "text"
QT_MOC_LITERAL(14, 145, 9), // "focusView"
QT_MOC_LITERAL(15, 155, 11), // "showSpinner"
QT_MOC_LITERAL(16, 167, 1), // "v"
QT_MOC_LITERAL(17, 169, 11), // "hideSpinner"
QT_MOC_LITERAL(18, 181, 8), // "updating"
QT_MOC_LITERAL(19, 190, 7), // "updated"
QT_MOC_LITERAL(20, 198, 17), // "collectionRemoved"
QT_MOC_LITERAL(21, 216, 3), // "key"
QT_MOC_LITERAL(22, 220, 10), // "updateRows"
QT_MOC_LITERAL(23, 231, 13), // "backActivated"
QT_MOC_LITERAL(24, 245, 11), // "setExpanded"
QT_MOC_LITERAL(25, 257, 3), // "exp"
QT_MOC_LITERAL(26, 261, 11), // "closeSearch"
QT_MOC_LITERAL(27, 273, 11), // "itemClicked"
QT_MOC_LITERAL(28, 285, 5), // "index"
QT_MOC_LITERAL(29, 291, 13), // "itemActivated"
QT_MOC_LITERAL(30, 305, 16), // "delaySearchItems"
QT_MOC_LITERAL(31, 322, 8), // "doSearch"
QT_MOC_LITERAL(32, 331, 12), // "searchActive"
QT_MOC_LITERAL(33, 344, 1), // "a"
QT_MOC_LITERAL(34, 346, 12), // "activateItem"
QT_MOC_LITERAL(35, 359, 11), // "emitRootSet"
QT_MOC_LITERAL(36, 371, 10), // "modelReset"
QT_MOC_LITERAL(37, 382, 11), // "dataChanged"
QT_MOC_LITERAL(38, 394, 2), // "tl"
QT_MOC_LITERAL(39, 397, 2), // "br"
QT_MOC_LITERAL(40, 400, 21), // "addTitleButtonClicked"
QT_MOC_LITERAL(41, 422, 25), // "replaceTitleButtonClicked"
QT_MOC_LITERAL(42, 448, 11), // "coverLoaded"
QT_MOC_LITERAL(43, 460, 4), // "Song"
QT_MOC_LITERAL(44, 465, 4), // "song"
QT_MOC_LITERAL(45, 470, 4), // "size"
QT_MOC_LITERAL(46, 475, 6), // "zoomIn"
QT_MOC_LITERAL(47, 482, 7) // "zoomOut"

    },
    "ItemView\0searchItems\0\0searchIsActive\0"
    "itemsSelected\0doubleClicked\0rootIndexSet\0"
    "headerClicked\0level\0updateToPlayQueue\0"
    "idx\0replace\0focusSearch\0text\0focusView\0"
    "showSpinner\0v\0hideSpinner\0updating\0"
    "updated\0collectionRemoved\0key\0updateRows\0"
    "backActivated\0setExpanded\0exp\0closeSearch\0"
    "itemClicked\0index\0itemActivated\0"
    "delaySearchItems\0doSearch\0searchActive\0"
    "a\0activateItem\0emitRootSet\0modelReset\0"
    "dataChanged\0tl\0br\0addTitleButtonClicked\0"
    "replaceTitleButtonClicked\0coverLoaded\0"
    "Song\0song\0size\0zoomIn\0zoomOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ItemView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  194,    2, 0x06 /* Public */,
       3,    1,  195,    2, 0x06 /* Public */,
       4,    1,  198,    2, 0x06 /* Public */,
       5,    1,  201,    2, 0x06 /* Public */,
       6,    1,  204,    2, 0x06 /* Public */,
       7,    1,  207,    2, 0x06 /* Public */,
       9,    2,  210,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  215,    2, 0x0a /* Public */,
      12,    0,  218,    2, 0x2a /* Public | MethodCloned */,
      14,    0,  219,    2, 0x0a /* Public */,
      15,    1,  220,    2, 0x0a /* Public */,
      15,    0,  223,    2, 0x2a /* Public | MethodCloned */,
      17,    0,  224,    2, 0x0a /* Public */,
      18,    0,  225,    2, 0x0a /* Public */,
      19,    0,  226,    2, 0x0a /* Public */,
      20,    1,  227,    2, 0x0a /* Public */,
      22,    0,  230,    2, 0x0a /* Public */,
      22,    1,  231,    2, 0x0a /* Public */,
      23,    0,  234,    2, 0x0a /* Public */,
      24,    2,  235,    2, 0x0a /* Public */,
      24,    1,  240,    2, 0x2a /* Public | MethodCloned */,
      26,    0,  243,    2, 0x0a /* Public */,
      27,    1,  244,    2, 0x08 /* Private */,
      29,    1,  247,    2, 0x08 /* Private */,
      30,    0,  250,    2, 0x08 /* Private */,
      31,    0,  251,    2, 0x08 /* Private */,
      32,    1,  252,    2, 0x08 /* Private */,
      34,    2,  255,    2, 0x08 /* Private */,
      34,    1,  260,    2, 0x28 /* Private | MethodCloned */,
      36,    0,  263,    2, 0x08 /* Private */,
      37,    2,  264,    2, 0x08 /* Private */,
      40,    0,  269,    2, 0x08 /* Private */,
      41,    0,  270,    2, 0x08 /* Private */,
      42,    2,  271,    2, 0x08 /* Private */,
      46,    0,  276,    2, 0x08 /* Private */,
      47,    0,  277,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Bool,   10,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Bool,   10,   25,
    QMetaType::Void, QMetaType::QModelIndex,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   28,
    QMetaType::Void, QMetaType::QModelIndex,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Bool,   28,   35,
    QMetaType::Void, QMetaType::QModelIndex,   28,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43, QMetaType::Int,   44,   45,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ItemView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ItemView *_t = static_cast<ItemView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchItems(); break;
        case 1: _t->searchIsActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->itemsSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->rootIndexSet((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->headerClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateToPlayQueue((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->focusSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->focusSearch(); break;
        case 9: _t->focusView(); break;
        case 10: _t->showSpinner((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->showSpinner(); break;
        case 12: _t->hideSpinner(); break;
        case 13: _t->updating(); break;
        case 14: _t->updated(); break;
        case 15: _t->collectionRemoved((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 16: _t->updateRows(); break;
        case 17: _t->updateRows((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 18: _t->backActivated(); break;
        case 19: _t->setExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 20: _t->setExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 21: _t->closeSearch(); break;
        case 22: _t->itemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 23: _t->itemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 24: _t->delaySearchItems(); break;
        case 25: _t->doSearch(); break;
        case 26: _t->searchActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->activateItem((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->activateItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 29: _t->modelReset(); break;
        case 30: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 31: _t->addTitleButtonClicked(); break;
        case 32: _t->replaceTitleButtonClicked(); break;
        case 33: _t->coverLoaded((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->zoomIn(); break;
        case 35: _t->zoomOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ItemView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemView::searchItems)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ItemView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemView::searchIsActive)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ItemView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemView::itemsSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ItemView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemView::doubleClicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ItemView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemView::rootIndexSet)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ItemView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemView::headerClicked)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ItemView::*_t)(const QModelIndex & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ItemView::updateToPlayQueue)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject ItemView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ItemView.data,
      qt_meta_data_ItemView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ItemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ItemView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ItemView.stringdata0))
        return static_cast<void*>(const_cast< ItemView*>(this));
    if (!strcmp(_clname, "Ui::ItemView"))
        return static_cast< Ui::ItemView*>(const_cast< ItemView*>(this));
    return QWidget::qt_metacast(_clname);
}

int ItemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void ItemView::searchItems()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ItemView::searchIsActive(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ItemView::itemsSelected(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ItemView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ItemView::rootIndexSet(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ItemView::headerClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ItemView::updateToPlayQueue(const QModelIndex & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE

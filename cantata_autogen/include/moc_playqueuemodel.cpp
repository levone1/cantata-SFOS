/****************************************************************************
** Meta object code from reading C++ file 'playqueuemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/playqueuemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playqueuemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlayQueueModel_t {
    QByteArrayData data[64];
    char stringdata0[642];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayQueueModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayQueueModel_t qt_meta_stringdata_PlayQueueModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PlayQueueModel"
QT_MOC_LITERAL(1, 15, 4), // "stop"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "afterCurrent"
QT_MOC_LITERAL(4, 34, 14), // "clearStopAfter"
QT_MOC_LITERAL(5, 49, 10), // "filesAdded"
QT_MOC_LITERAL(6, 60, 9), // "filenames"
QT_MOC_LITERAL(7, 70, 3), // "row"
QT_MOC_LITERAL(8, 74, 4), // "size"
QT_MOC_LITERAL(9, 79, 6), // "action"
QT_MOC_LITERAL(10, 86, 8), // "priority"
QT_MOC_LITERAL(11, 95, 16), // "decreasePriority"
QT_MOC_LITERAL(12, 112, 8), // "populate"
QT_MOC_LITERAL(13, 121, 5), // "items"
QT_MOC_LITERAL(14, 127, 13), // "QList<quint8>"
QT_MOC_LITERAL(15, 141, 4), // "move"
QT_MOC_LITERAL(16, 146, 14), // "QList<quint32>"
QT_MOC_LITERAL(17, 161, 8), // "setOrder"
QT_MOC_LITERAL(18, 170, 9), // "getRating"
QT_MOC_LITERAL(19, 180, 4), // "file"
QT_MOC_LITERAL(20, 185, 9), // "setRating"
QT_MOC_LITERAL(21, 195, 5), // "files"
QT_MOC_LITERAL(22, 201, 6), // "rating"
QT_MOC_LITERAL(23, 208, 12), // "statsUpdated"
QT_MOC_LITERAL(24, 221, 5), // "songs"
QT_MOC_LITERAL(25, 227, 4), // "time"
QT_MOC_LITERAL(26, 232, 15), // "fetchingStreams"
QT_MOC_LITERAL(27, 248, 14), // "streamsFetched"
QT_MOC_LITERAL(28, 263, 11), // "removeSongs"
QT_MOC_LITERAL(29, 275, 13), // "QList<qint32>"
QT_MOC_LITERAL(30, 289, 13), // "updateCurrent"
QT_MOC_LITERAL(31, 303, 4), // "Song"
QT_MOC_LITERAL(32, 308, 1), // "s"
QT_MOC_LITERAL(33, 310, 17), // "streamFetchStatus"
QT_MOC_LITERAL(34, 328, 3), // "msg"
QT_MOC_LITERAL(35, 332, 12), // "clearEntries"
QT_MOC_LITERAL(36, 345, 10), // "addAndPlay"
QT_MOC_LITERAL(37, 356, 18), // "startPlayingSongId"
QT_MOC_LITERAL(38, 375, 2), // "id"
QT_MOC_LITERAL(39, 378, 17), // "currentSongRating"
QT_MOC_LITERAL(40, 396, 1), // "r"
QT_MOC_LITERAL(41, 398, 5), // "error"
QT_MOC_LITERAL(42, 404, 3), // "str"
QT_MOC_LITERAL(43, 408, 4), // "load"
QT_MOC_LITERAL(44, 413, 4), // "urls"
QT_MOC_LITERAL(45, 418, 8), // "addItems"
QT_MOC_LITERAL(46, 427, 8), // "addFiles"
QT_MOC_LITERAL(47, 436, 11), // "prioritySet"
QT_MOC_LITERAL(48, 448, 19), // "QMap<qint32,quint8>"
QT_MOC_LITERAL(49, 468, 4), // "prio"
QT_MOC_LITERAL(50, 473, 5), // "stats"
QT_MOC_LITERAL(51, 479, 17), // "cancelStreamFetch"
QT_MOC_LITERAL(52, 497, 13), // "shuffleAlbums"
QT_MOC_LITERAL(53, 511, 8), // "playSong"
QT_MOC_LITERAL(54, 520, 6), // "sortBy"
QT_MOC_LITERAL(55, 527, 23), // "stopAfterCurrentChanged"
QT_MOC_LITERAL(56, 551, 13), // "updateDetails"
QT_MOC_LITERAL(57, 565, 11), // "QList<Song>"
QT_MOC_LITERAL(58, 577, 7), // "updated"
QT_MOC_LITERAL(59, 585, 4), // "undo"
QT_MOC_LITERAL(60, 590, 4), // "redo"
QT_MOC_LITERAL(61, 595, 16), // "removeDuplicates"
QT_MOC_LITERAL(62, 612, 12), // "ratingResult"
QT_MOC_LITERAL(63, 625, 16) // "stickerDbChanged"

    },
    "PlayQueueModel\0stop\0\0afterCurrent\0"
    "clearStopAfter\0filesAdded\0filenames\0"
    "row\0size\0action\0priority\0decreasePriority\0"
    "populate\0items\0QList<quint8>\0move\0"
    "QList<quint32>\0setOrder\0getRating\0"
    "file\0setRating\0files\0rating\0statsUpdated\0"
    "songs\0time\0fetchingStreams\0streamsFetched\0"
    "removeSongs\0QList<qint32>\0updateCurrent\0"
    "Song\0s\0streamFetchStatus\0msg\0clearEntries\0"
    "addAndPlay\0startPlayingSongId\0id\0"
    "currentSongRating\0r\0error\0str\0load\0"
    "urls\0addItems\0addFiles\0prioritySet\0"
    "QMap<qint32,quint8>\0prio\0stats\0"
    "cancelStreamFetch\0shuffleAlbums\0"
    "playSong\0sortBy\0stopAfterCurrentChanged\0"
    "updateDetails\0QList<Song>\0updated\0"
    "undo\0redo\0removeDuplicates\0ratingResult\0"
    "stickerDbChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayQueueModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  214,    2, 0x06 /* Public */,
       4,    0,  217,    2, 0x06 /* Public */,
       5,    6,  218,    2, 0x06 /* Public */,
      12,    2,  231,    2, 0x06 /* Public */,
      15,    3,  236,    2, 0x06 /* Public */,
      17,    1,  243,    2, 0x06 /* Public */,
      18,    1,  246,    2, 0x06 /* Public */,
      20,    2,  249,    2, 0x06 /* Public */,
      23,    2,  254,    2, 0x06 /* Public */,
      26,    0,  259,    2, 0x06 /* Public */,
      27,    0,  260,    2, 0x06 /* Public */,
      28,    1,  261,    2, 0x06 /* Public */,
      30,    1,  264,    2, 0x06 /* Public */,
      33,    1,  267,    2, 0x06 /* Public */,
      35,    0,  270,    2, 0x06 /* Public */,
      36,    1,  271,    2, 0x06 /* Public */,
      37,    1,  274,    2, 0x06 /* Public */,
      39,    2,  277,    2, 0x06 /* Public */,
      41,    1,  282,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      43,    4,  285,    2, 0x0a /* Public */,
      43,    3,  294,    2, 0x2a /* Public | MethodCloned */,
      43,    2,  301,    2, 0x2a /* Public | MethodCloned */,
      43,    1,  306,    2, 0x2a /* Public | MethodCloned */,
      45,    5,  309,    2, 0x0a /* Public */,
      45,    4,  320,    2, 0x0a /* Public */,
      46,    5,  329,    2, 0x0a /* Public */,
      46,    4,  340,    2, 0x2a /* Public | MethodCloned */,
      47,    1,  349,    2, 0x0a /* Public */,
      50,    0,  352,    2, 0x0a /* Public */,
      51,    0,  353,    2, 0x0a /* Public */,
      52,    0,  354,    2, 0x0a /* Public */,
      53,    1,  355,    2, 0x0a /* Public */,
      54,    0,  358,    2, 0x08 /* Private */,
      55,    1,  359,    2, 0x08 /* Private */,
      56,    1,  362,    2, 0x08 /* Private */,
      59,    0,  365,    2, 0x08 /* Private */,
      60,    0,  366,    2, 0x08 /* Private */,
      61,    0,  367,    2, 0x08 /* Private */,
      62,    2,  368,    2, 0x08 /* Private */,
      63,    0,  373,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::UInt, QMetaType::UInt, QMetaType::Int, QMetaType::UChar, QMetaType::Bool,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 14,   13,   10,
    QMetaType::Void, 0x80000000 | 16, QMetaType::UInt, QMetaType::UInt,   13,    7,    8,
    QMetaType::Void, 0x80000000 | 16,   13,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QStringList, QMetaType::UChar,   21,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,   24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   13,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,   19,   40,
    QMetaType::Void, QMetaType::QString,   42,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int, QMetaType::UChar, QMetaType::Bool,   44,    9,   10,   11,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int, QMetaType::UChar,   44,    9,   10,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int,   44,    9,
    QMetaType::Void, QMetaType::QStringList,   44,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int, QMetaType::Int, QMetaType::UChar, QMetaType::Bool,   13,    7,    9,   10,   11,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int, QMetaType::UChar, QMetaType::Bool,   13,    9,   10,   11,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int, QMetaType::Int, QMetaType::UChar, QMetaType::Bool,    6,    7,    9,   10,   11,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int, QMetaType::Int, QMetaType::UChar,    6,    7,    9,   10,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,   19,   40,
    QMetaType::Void,

       0        // eod
};

void PlayQueueModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayQueueModel *_t = static_cast<PlayQueueModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->clearStopAfter(); break;
        case 2: _t->filesAdded((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const quint32(*)>(_a[2])),(*reinterpret_cast< const quint32(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< quint8(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 3: _t->populate((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QList<quint8>(*)>(_a[2]))); break;
        case 4: _t->move((*reinterpret_cast< const QList<quint32>(*)>(_a[1])),(*reinterpret_cast< const quint32(*)>(_a[2])),(*reinterpret_cast< const quint32(*)>(_a[3]))); break;
        case 5: _t->setOrder((*reinterpret_cast< const QList<quint32>(*)>(_a[1]))); break;
        case 6: _t->getRating((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setRating((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 8: _t->statsUpdated((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 9: _t->fetchingStreams(); break;
        case 10: _t->streamsFetched(); break;
        case 11: _t->removeSongs((*reinterpret_cast< const QList<qint32>(*)>(_a[1]))); break;
        case 12: _t->updateCurrent((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 13: _t->streamFetchStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->clearEntries(); break;
        case 15: _t->addAndPlay((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->startPlayingSongId((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 17: _t->currentSongRating((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 18: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->load((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 20: _t->load((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 21: _t->load((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->load((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 23: _t->addItems((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 24: _t->addItems((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 25: _t->addFiles((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 26: _t->addFiles((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< quint8(*)>(_a[4]))); break;
        case 27: _t->prioritySet((*reinterpret_cast< const QMap<qint32,quint8>(*)>(_a[1]))); break;
        case 28: _t->stats(); break;
        case 29: _t->cancelStreamFetch(); break;
        case 30: _t->shuffleAlbums(); break;
        case 31: _t->playSong((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->sortBy(); break;
        case 33: _t->stopAfterCurrentChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->updateDetails((*reinterpret_cast< const QList<Song>(*)>(_a[1]))); break;
        case 35: _t->undo(); break;
        case 36: _t->redo(); break;
        case 37: _t->removeDuplicates(); break;
        case 38: _t->ratingResult((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 39: _t->stickerDbChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint8> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlayQueueModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::stop)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::clearStopAfter)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QStringList , const quint32 , const quint32 , int , quint8 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::filesAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QStringList & , const QList<quint8> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::populate)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QList<quint32> & , const quint32 , const quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::move)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QList<quint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::setOrder)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::getRating)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QStringList & , quint8 ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::setRating)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(int , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::statsUpdated)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::fetchingStreams)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::streamsFetched)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QList<qint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::removeSongs)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::updateCurrent)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::streamFetchStatus)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::clearEntries)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::addAndPlay)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::startPlayingSongId)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QString & , quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::currentSongRating)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (PlayQueueModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlayQueueModel::error)) {
                *result = 18;
                return;
            }
        }
    }
}

const QMetaObject PlayQueueModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_PlayQueueModel.data,
      qt_meta_data_PlayQueueModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlayQueueModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayQueueModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlayQueueModel.stringdata0))
        return static_cast<void*>(const_cast< PlayQueueModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int PlayQueueModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void PlayQueueModel::stop(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlayQueueModel::clearStopAfter()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PlayQueueModel::filesAdded(const QStringList _t1, const quint32 _t2, const quint32 _t3, int _t4, quint8 _t5, bool _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlayQueueModel::populate(const QStringList & _t1, const QList<quint8> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlayQueueModel::move(const QList<quint32> & _t1, const quint32 _t2, const quint32 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlayQueueModel::setOrder(const QList<quint32> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlayQueueModel::getRating(const QString & _t1)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< PlayQueueModel *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlayQueueModel::setRating(const QStringList & _t1, quint8 _t2)const
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< PlayQueueModel *>(this), &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlayQueueModel::statsUpdated(int _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PlayQueueModel::fetchingStreams()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void PlayQueueModel::streamsFetched()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void PlayQueueModel::removeSongs(const QList<qint32> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PlayQueueModel::updateCurrent(const Song & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PlayQueueModel::streamFetchStatus(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void PlayQueueModel::clearEntries()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void PlayQueueModel::addAndPlay(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void PlayQueueModel::startPlayingSongId(qint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void PlayQueueModel::currentSongRating(const QString & _t1, quint8 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void PlayQueueModel::error(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_END_MOC_NAMESPACE

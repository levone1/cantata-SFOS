/****************************************************************************
** Meta object code from reading C++ file 'mpdconnection.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mpd-interface/mpdconnection.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mpdconnection.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MpdSocket_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MpdSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MpdSocket_t qt_meta_stringdata_MpdSocket = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MpdSocket"
QT_MOC_LITERAL(1, 10, 12), // "stateChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(4, 53, 5), // "state"
QT_MOC_LITERAL(5, 59, 9), // "readyRead"
QT_MOC_LITERAL(6, 69, 17), // "localStateChanged"
QT_MOC_LITERAL(7, 87, 30) // "QLocalSocket::LocalSocketState"

    },
    "MpdSocket\0stateChanged\0\0"
    "QAbstractSocket::SocketState\0state\0"
    "readyRead\0localStateChanged\0"
    "QLocalSocket::LocalSocketState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MpdSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    4,

       0        // eod
};

void MpdSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MpdSocket *_t = static_cast<MpdSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 1: _t->readyRead(); break;
        case 2: _t->localStateChanged((*reinterpret_cast< QLocalSocket::LocalSocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MpdSocket::*_t)(QAbstractSocket::SocketState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpdSocket::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MpdSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MpdSocket::readyRead)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MpdSocket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MpdSocket.data,
      qt_meta_data_MpdSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MpdSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MpdSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MpdSocket.stringdata0))
        return static_cast<void*>(const_cast< MpdSocket*>(this));
    return QObject::qt_metacast(_clname);
}

int MpdSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MpdSocket::stateChanged(QAbstractSocket::SocketState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MpdSocket::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_MPDConnection_t {
    QByteArrayData data[193];
    char stringdata0[2110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MPDConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MPDConnection_t qt_meta_stringdata_MPDConnection = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MPDConnection"
QT_MOC_LITERAL(1, 14, 17), // "connectionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "MPDConnectionDetails"
QT_MOC_LITERAL(4, 54, 7), // "details"
QT_MOC_LITERAL(5, 62, 20), // "connectionNotChanged"
QT_MOC_LITERAL(6, 83, 4), // "name"
QT_MOC_LITERAL(7, 88, 12), // "stateChanged"
QT_MOC_LITERAL(8, 101, 9), // "connected"
QT_MOC_LITERAL(9, 111, 13), // "passwordError"
QT_MOC_LITERAL(10, 125, 18), // "currentSongUpdated"
QT_MOC_LITERAL(11, 144, 4), // "Song"
QT_MOC_LITERAL(12, 149, 4), // "song"
QT_MOC_LITERAL(13, 154, 15), // "playlistUpdated"
QT_MOC_LITERAL(14, 170, 11), // "QList<Song>"
QT_MOC_LITERAL(15, 182, 5), // "songs"
QT_MOC_LITERAL(16, 188, 10), // "isComplete"
QT_MOC_LITERAL(17, 199, 12), // "statsUpdated"
QT_MOC_LITERAL(18, 212, 14), // "MPDStatsValues"
QT_MOC_LITERAL(19, 227, 5), // "stats"
QT_MOC_LITERAL(20, 233, 13), // "statusUpdated"
QT_MOC_LITERAL(21, 247, 15), // "MPDStatusValues"
QT_MOC_LITERAL(22, 263, 6), // "status"
QT_MOC_LITERAL(23, 270, 14), // "outputsUpdated"
QT_MOC_LITERAL(24, 285, 13), // "QList<Output>"
QT_MOC_LITERAL(25, 299, 7), // "outputs"
QT_MOC_LITERAL(26, 307, 12), // "librarySongs"
QT_MOC_LITERAL(27, 320, 12), // "QList<Song>*"
QT_MOC_LITERAL(28, 333, 14), // "folderContents"
QT_MOC_LITERAL(29, 348, 6), // "folder"
QT_MOC_LITERAL(30, 355, 10), // "subFolders"
QT_MOC_LITERAL(31, 366, 18), // "playlistsRetrieved"
QT_MOC_LITERAL(32, 385, 15), // "QList<Playlist>"
QT_MOC_LITERAL(33, 401, 4), // "data"
QT_MOC_LITERAL(34, 406, 21), // "playlistInfoRetrieved"
QT_MOC_LITERAL(35, 428, 15), // "playlistRenamed"
QT_MOC_LITERAL(36, 444, 4), // "from"
QT_MOC_LITERAL(37, 449, 2), // "to"
QT_MOC_LITERAL(38, 452, 19), // "removedFromPlaylist"
QT_MOC_LITERAL(39, 472, 14), // "QList<quint32>"
QT_MOC_LITERAL(40, 487, 9), // "positions"
QT_MOC_LITERAL(41, 497, 15), // "movedInPlaylist"
QT_MOC_LITERAL(42, 513, 5), // "items"
QT_MOC_LITERAL(43, 519, 3), // "pos"
QT_MOC_LITERAL(44, 523, 16), // "updatingDatabase"
QT_MOC_LITERAL(45, 540, 15), // "updatedDatabase"
QT_MOC_LITERAL(46, 556, 14), // "playlistLoaded"
QT_MOC_LITERAL(47, 571, 8), // "playlist"
QT_MOC_LITERAL(48, 580, 5), // "added"
QT_MOC_LITERAL(49, 586, 5), // "files"
QT_MOC_LITERAL(50, 592, 10), // "replayGain"
QT_MOC_LITERAL(51, 603, 15), // "updatingLibrary"
QT_MOC_LITERAL(52, 619, 6), // "time_t"
QT_MOC_LITERAL(53, 626, 8), // "dbUpdate"
QT_MOC_LITERAL(54, 635, 14), // "updatedLibrary"
QT_MOC_LITERAL(55, 650, 16), // "updatingFileList"
QT_MOC_LITERAL(56, 667, 15), // "updatedFileList"
QT_MOC_LITERAL(57, 683, 5), // "error"
QT_MOC_LITERAL(58, 689, 3), // "err"
QT_MOC_LITERAL(59, 693, 11), // "showActions"
QT_MOC_LITERAL(60, 705, 4), // "info"
QT_MOC_LITERAL(61, 710, 3), // "msg"
QT_MOC_LITERAL(62, 714, 10), // "dirChanged"
QT_MOC_LITERAL(63, 725, 11), // "prioritySet"
QT_MOC_LITERAL(64, 737, 19), // "QMap<qint32,quint8>"
QT_MOC_LITERAL(65, 757, 6), // "tracks"
QT_MOC_LITERAL(66, 764, 23), // "stopAfterCurrentChanged"
QT_MOC_LITERAL(67, 788, 12), // "afterCurrent"
QT_MOC_LITERAL(68, 801, 9), // "streamUrl"
QT_MOC_LITERAL(69, 811, 3), // "url"
QT_MOC_LITERAL(70, 815, 14), // "searchResponse"
QT_MOC_LITERAL(71, 830, 2), // "id"
QT_MOC_LITERAL(72, 833, 13), // "socketAddress"
QT_MOC_LITERAL(73, 847, 4), // "addr"
QT_MOC_LITERAL(74, 852, 14), // "cantataStreams"
QT_MOC_LITERAL(75, 867, 8), // "isUpdate"
QT_MOC_LITERAL(76, 876, 10), // "removedIds"
QT_MOC_LITERAL(77, 887, 12), // "QSet<qint32>"
QT_MOC_LITERAL(78, 900, 3), // "ids"
QT_MOC_LITERAL(79, 904, 11), // "savedStream"
QT_MOC_LITERAL(80, 916, 14), // "removedStreams"
QT_MOC_LITERAL(81, 931, 7), // "removed"
QT_MOC_LITERAL(82, 939, 12), // "editedStream"
QT_MOC_LITERAL(83, 952, 8), // "position"
QT_MOC_LITERAL(84, 961, 10), // "streamList"
QT_MOC_LITERAL(85, 972, 13), // "QList<Stream>"
QT_MOC_LITERAL(86, 986, 7), // "streams"
QT_MOC_LITERAL(87, 994, 19), // "clientMessageFailed"
QT_MOC_LITERAL(88, 1014, 6), // "client"
QT_MOC_LITERAL(89, 1021, 14), // "dynamicSupport"
QT_MOC_LITERAL(90, 1036, 1), // "e"
QT_MOC_LITERAL(91, 1038, 15), // "dynamicResponse"
QT_MOC_LITERAL(92, 1054, 4), // "resp"
QT_MOC_LITERAL(93, 1059, 6), // "rating"
QT_MOC_LITERAL(94, 1066, 4), // "file"
QT_MOC_LITERAL(95, 1071, 3), // "val"
QT_MOC_LITERAL(96, 1075, 16), // "stickerDbChanged"
QT_MOC_LITERAL(97, 1092, 7), // "ifaceIp"
QT_MOC_LITERAL(98, 1100, 8), // "albumArt"
QT_MOC_LITERAL(99, 1109, 4), // "stop"
QT_MOC_LITERAL(100, 1114, 9), // "reconnect"
QT_MOC_LITERAL(101, 1124, 10), // "setDetails"
QT_MOC_LITERAL(102, 1135, 1), // "d"
QT_MOC_LITERAL(103, 1137, 3), // "add"
QT_MOC_LITERAL(104, 1141, 6), // "action"
QT_MOC_LITERAL(105, 1148, 8), // "priority"
QT_MOC_LITERAL(106, 1157, 16), // "decreasePriority"
QT_MOC_LITERAL(107, 1174, 4), // "size"
QT_MOC_LITERAL(108, 1179, 13), // "QList<quint8>"
QT_MOC_LITERAL(109, 1193, 8), // "populate"
QT_MOC_LITERAL(110, 1202, 10), // "addAndPlay"
QT_MOC_LITERAL(111, 1213, 11), // "currentSong"
QT_MOC_LITERAL(112, 1225, 15), // "playListChanges"
QT_MOC_LITERAL(113, 1241, 12), // "playListInfo"
QT_MOC_LITERAL(114, 1254, 11), // "removeSongs"
QT_MOC_LITERAL(115, 1266, 13), // "QList<qint32>"
QT_MOC_LITERAL(116, 1280, 4), // "move"
QT_MOC_LITERAL(117, 1285, 8), // "setOrder"
QT_MOC_LITERAL(118, 1294, 7), // "shuffle"
QT_MOC_LITERAL(119, 1302, 5), // "clear"
QT_MOC_LITERAL(120, 1308, 12), // "setCrossFade"
QT_MOC_LITERAL(121, 1321, 4), // "secs"
QT_MOC_LITERAL(122, 1326, 13), // "setReplayGain"
QT_MOC_LITERAL(123, 1340, 1), // "v"
QT_MOC_LITERAL(124, 1342, 13), // "getReplayGain"
QT_MOC_LITERAL(125, 1356, 8), // "goToNext"
QT_MOC_LITERAL(126, 1365, 8), // "setPause"
QT_MOC_LITERAL(127, 1374, 6), // "toggle"
QT_MOC_LITERAL(128, 1381, 4), // "play"
QT_MOC_LITERAL(129, 1386, 16), // "startPlayingSong"
QT_MOC_LITERAL(130, 1403, 18), // "startPlayingSongId"
QT_MOC_LITERAL(131, 1422, 6), // "songId"
QT_MOC_LITERAL(132, 1429, 12), // "goToPrevious"
QT_MOC_LITERAL(133, 1442, 10), // "setConsume"
QT_MOC_LITERAL(134, 1453, 9), // "setRandom"
QT_MOC_LITERAL(135, 1463, 9), // "setRepeat"
QT_MOC_LITERAL(136, 1473, 9), // "setSingle"
QT_MOC_LITERAL(137, 1483, 7), // "setSeek"
QT_MOC_LITERAL(138, 1491, 4), // "time"
QT_MOC_LITERAL(139, 1496, 9), // "setSeekId"
QT_MOC_LITERAL(140, 1506, 9), // "setVolume"
QT_MOC_LITERAL(141, 1516, 3), // "vol"
QT_MOC_LITERAL(142, 1520, 10), // "toggleMute"
QT_MOC_LITERAL(143, 1531, 11), // "stopPlaying"
QT_MOC_LITERAL(144, 1543, 14), // "clearStopAfter"
QT_MOC_LITERAL(145, 1558, 12), // "enableOutput"
QT_MOC_LITERAL(146, 1571, 6), // "enable"
QT_MOC_LITERAL(147, 1578, 8), // "getStats"
QT_MOC_LITERAL(148, 1587, 9), // "getStatus"
QT_MOC_LITERAL(149, 1597, 14), // "getUrlHandlers"
QT_MOC_LITERAL(150, 1612, 11), // "getTagTypes"
QT_MOC_LITERAL(151, 1624, 8), // "getCover"
QT_MOC_LITERAL(152, 1633, 11), // "loadLibrary"
QT_MOC_LITERAL(153, 1645, 10), // "listFolder"
QT_MOC_LITERAL(154, 1656, 11), // "updateMaybe"
QT_MOC_LITERAL(155, 1668, 6), // "update"
QT_MOC_LITERAL(156, 1675, 13), // "listPlaylists"
QT_MOC_LITERAL(157, 1689, 12), // "playlistInfo"
QT_MOC_LITERAL(158, 1702, 12), // "loadPlaylist"
QT_MOC_LITERAL(159, 1715, 7), // "replace"
QT_MOC_LITERAL(160, 1723, 14), // "renamePlaylist"
QT_MOC_LITERAL(161, 1738, 7), // "oldName"
QT_MOC_LITERAL(162, 1746, 7), // "newName"
QT_MOC_LITERAL(163, 1754, 14), // "removePlaylist"
QT_MOC_LITERAL(164, 1769, 12), // "savePlaylist"
QT_MOC_LITERAL(165, 1782, 9), // "overwrite"
QT_MOC_LITERAL(166, 1792, 13), // "addToPlaylist"
QT_MOC_LITERAL(167, 1806, 18), // "removeFromPlaylist"
QT_MOC_LITERAL(168, 1825, 14), // "moveInPlaylist"
QT_MOC_LITERAL(169, 1840, 3), // "row"
QT_MOC_LITERAL(170, 1844, 11), // "setPriority"
QT_MOC_LITERAL(171, 1856, 6), // "search"
QT_MOC_LITERAL(172, 1863, 5), // "field"
QT_MOC_LITERAL(173, 1869, 5), // "value"
QT_MOC_LITERAL(174, 1875, 5), // "query"
QT_MOC_LITERAL(175, 1881, 11), // "listStreams"
QT_MOC_LITERAL(176, 1893, 10), // "saveStream"
QT_MOC_LITERAL(177, 1904, 13), // "removeStreams"
QT_MOC_LITERAL(178, 1918, 10), // "editStream"
QT_MOC_LITERAL(179, 1929, 17), // "sendClientMessage"
QT_MOC_LITERAL(180, 1947, 7), // "channel"
QT_MOC_LITERAL(181, 1955, 10), // "clientName"
QT_MOC_LITERAL(182, 1966, 18), // "sendDynamicMessage"
QT_MOC_LITERAL(183, 1985, 9), // "getVolume"
QT_MOC_LITERAL(184, 1995, 9), // "setRating"
QT_MOC_LITERAL(185, 2005, 9), // "getRating"
QT_MOC_LITERAL(186, 2015, 4), // "seek"
QT_MOC_LITERAL(187, 2020, 6), // "offset"
QT_MOC_LITERAL(188, 2027, 13), // "idleDataReady"
QT_MOC_LITERAL(189, 2041, 20), // "onSocketStateChanged"
QT_MOC_LITERAL(190, 2062, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(191, 2091, 11), // "socketState"
QT_MOC_LITERAL(192, 2103, 6) // "volume"

    },
    "MPDConnection\0connectionChanged\0\0"
    "MPDConnectionDetails\0details\0"
    "connectionNotChanged\0name\0stateChanged\0"
    "connected\0passwordError\0currentSongUpdated\0"
    "Song\0song\0playlistUpdated\0QList<Song>\0"
    "songs\0isComplete\0statsUpdated\0"
    "MPDStatsValues\0stats\0statusUpdated\0"
    "MPDStatusValues\0status\0outputsUpdated\0"
    "QList<Output>\0outputs\0librarySongs\0"
    "QList<Song>*\0folderContents\0folder\0"
    "subFolders\0playlistsRetrieved\0"
    "QList<Playlist>\0data\0playlistInfoRetrieved\0"
    "playlistRenamed\0from\0to\0removedFromPlaylist\0"
    "QList<quint32>\0positions\0movedInPlaylist\0"
    "items\0pos\0updatingDatabase\0updatedDatabase\0"
    "playlistLoaded\0playlist\0added\0files\0"
    "replayGain\0updatingLibrary\0time_t\0"
    "dbUpdate\0updatedLibrary\0updatingFileList\0"
    "updatedFileList\0error\0err\0showActions\0"
    "info\0msg\0dirChanged\0prioritySet\0"
    "QMap<qint32,quint8>\0tracks\0"
    "stopAfterCurrentChanged\0afterCurrent\0"
    "streamUrl\0url\0searchResponse\0id\0"
    "socketAddress\0addr\0cantataStreams\0"
    "isUpdate\0removedIds\0QSet<qint32>\0ids\0"
    "savedStream\0removedStreams\0removed\0"
    "editedStream\0position\0streamList\0"
    "QList<Stream>\0streams\0clientMessageFailed\0"
    "client\0dynamicSupport\0e\0dynamicResponse\0"
    "resp\0rating\0file\0val\0stickerDbChanged\0"
    "ifaceIp\0albumArt\0stop\0reconnect\0"
    "setDetails\0d\0add\0action\0priority\0"
    "decreasePriority\0size\0QList<quint8>\0"
    "populate\0addAndPlay\0currentSong\0"
    "playListChanges\0playListInfo\0removeSongs\0"
    "QList<qint32>\0move\0setOrder\0shuffle\0"
    "clear\0setCrossFade\0secs\0setReplayGain\0"
    "v\0getReplayGain\0goToNext\0setPause\0"
    "toggle\0play\0startPlayingSong\0"
    "startPlayingSongId\0songId\0goToPrevious\0"
    "setConsume\0setRandom\0setRepeat\0setSingle\0"
    "setSeek\0time\0setSeekId\0setVolume\0vol\0"
    "toggleMute\0stopPlaying\0clearStopAfter\0"
    "enableOutput\0enable\0getStats\0getStatus\0"
    "getUrlHandlers\0getTagTypes\0getCover\0"
    "loadLibrary\0listFolder\0updateMaybe\0"
    "update\0listPlaylists\0playlistInfo\0"
    "loadPlaylist\0replace\0renamePlaylist\0"
    "oldName\0newName\0removePlaylist\0"
    "savePlaylist\0overwrite\0addToPlaylist\0"
    "removeFromPlaylist\0moveInPlaylist\0row\0"
    "setPriority\0search\0field\0value\0query\0"
    "listStreams\0saveStream\0removeStreams\0"
    "editStream\0sendClientMessage\0channel\0"
    "clientName\0sendDynamicMessage\0getVolume\0"
    "setRating\0getRating\0seek\0offset\0"
    "idleDataReady\0onSocketStateChanged\0"
    "QAbstractSocket::SocketState\0socketState\0"
    "volume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MPDConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     128,   14, // methods
       1, 1096, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      49,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  654,    2, 0x06 /* Public */,
       5,    1,  657,    2, 0x06 /* Public */,
       7,    1,  660,    2, 0x06 /* Public */,
       9,    0,  663,    2, 0x06 /* Public */,
      10,    1,  664,    2, 0x06 /* Public */,
      13,    2,  667,    2, 0x06 /* Public */,
      17,    1,  672,    2, 0x06 /* Public */,
      20,    1,  675,    2, 0x06 /* Public */,
      23,    1,  678,    2, 0x06 /* Public */,
      26,    1,  681,    2, 0x06 /* Public */,
      28,    3,  684,    2, 0x06 /* Public */,
      31,    1,  691,    2, 0x06 /* Public */,
      34,    2,  694,    2, 0x06 /* Public */,
      35,    2,  699,    2, 0x06 /* Public */,
      38,    2,  704,    2, 0x06 /* Public */,
      41,    3,  709,    2, 0x06 /* Public */,
      44,    0,  716,    2, 0x06 /* Public */,
      45,    0,  717,    2, 0x06 /* Public */,
      46,    1,  718,    2, 0x06 /* Public */,
      48,    1,  721,    2, 0x06 /* Public */,
      50,    1,  724,    2, 0x06 /* Public */,
      51,    1,  727,    2, 0x06 /* Public */,
      54,    0,  730,    2, 0x06 /* Public */,
      55,    0,  731,    2, 0x06 /* Public */,
      56,    0,  732,    2, 0x06 /* Public */,
      57,    2,  733,    2, 0x06 /* Public */,
      57,    1,  738,    2, 0x26 /* Public | MethodCloned */,
      60,    1,  741,    2, 0x06 /* Public */,
      62,    0,  744,    2, 0x06 /* Public */,
      63,    1,  745,    2, 0x06 /* Public */,
      66,    1,  748,    2, 0x06 /* Public */,
      68,    1,  751,    2, 0x06 /* Public */,
      70,    2,  754,    2, 0x06 /* Public */,
      70,    2,  759,    2, 0x06 /* Public */,
      72,    1,  764,    2, 0x06 /* Public */,
      74,    1,  767,    2, 0x06 /* Public */,
      74,    2,  770,    2, 0x06 /* Public */,
      76,    1,  775,    2, 0x06 /* Public */,
      79,    2,  778,    2, 0x06 /* Public */,
      80,    1,  783,    2, 0x06 /* Public */,
      82,    3,  786,    2, 0x06 /* Public */,
      84,    1,  793,    2, 0x06 /* Public */,
      87,    2,  796,    2, 0x06 /* Public */,
      89,    1,  801,    2, 0x06 /* Public */,
      91,    1,  804,    2, 0x06 /* Public */,
      93,    2,  807,    2, 0x06 /* Public */,
      96,    0,  812,    2, 0x06 /* Public */,
      97,    1,  813,    2, 0x06 /* Public */,
      98,    2,  816,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      99,    0,  821,    2, 0x0a /* Public */,
     100,    0,  822,    2, 0x0a /* Public */,
     101,    1,  823,    2, 0x0a /* Public */,
     103,    4,  826,    2, 0x0a /* Public */,
     103,    6,  835,    2, 0x0a /* Public */,
     103,    5,  848,    2, 0x0a /* Public */,
     103,    6,  859,    2, 0x0a /* Public */,
     109,    2,  872,    2, 0x0a /* Public */,
     110,    1,  877,    2, 0x0a /* Public */,
     111,    0,  880,    2, 0x0a /* Public */,
     112,    0,  881,    2, 0x0a /* Public */,
     113,    0,  882,    2, 0x0a /* Public */,
     114,    1,  883,    2, 0x0a /* Public */,
     116,    2,  886,    2, 0x0a /* Public */,
     116,    3,  891,    2, 0x0a /* Public */,
     117,    1,  898,    2, 0x0a /* Public */,
     118,    2,  901,    2, 0x0a /* Public */,
     119,    0,  906,    2, 0x0a /* Public */,
     118,    0,  907,    2, 0x0a /* Public */,
     120,    1,  908,    2, 0x0a /* Public */,
     122,    1,  911,    2, 0x0a /* Public */,
     124,    0,  914,    2, 0x0a /* Public */,
     125,    0,  915,    2, 0x0a /* Public */,
     126,    1,  916,    2, 0x0a /* Public */,
     128,    0,  919,    2, 0x0a /* Public */,
     129,    1,  920,    2, 0x0a /* Public */,
     129,    0,  923,    2, 0x2a /* Public | MethodCloned */,
     130,    1,  924,    2, 0x0a /* Public */,
     130,    0,  927,    2, 0x2a /* Public | MethodCloned */,
     132,    0,  928,    2, 0x0a /* Public */,
     133,    1,  929,    2, 0x0a /* Public */,
     134,    1,  932,    2, 0x0a /* Public */,
     135,    1,  935,    2, 0x0a /* Public */,
     136,    1,  938,    2, 0x0a /* Public */,
     137,    2,  941,    2, 0x0a /* Public */,
     139,    2,  946,    2, 0x0a /* Public */,
     140,    1,  951,    2, 0x0a /* Public */,
     142,    0,  954,    2, 0x0a /* Public */,
     143,    1,  955,    2, 0x0a /* Public */,
     143,    0,  958,    2, 0x2a /* Public | MethodCloned */,
     144,    0,  959,    2, 0x0a /* Public */,
      25,    0,  960,    2, 0x0a /* Public */,
     145,    2,  961,    2, 0x0a /* Public */,
     147,    0,  966,    2, 0x0a /* Public */,
     148,    0,  967,    2, 0x0a /* Public */,
     149,    0,  968,    2, 0x0a /* Public */,
     150,    0,  969,    2, 0x0a /* Public */,
     151,    1,  970,    2, 0x0a /* Public */,
     152,    0,  973,    2, 0x0a /* Public */,
     153,    1,  974,    2, 0x0a /* Public */,
     154,    0,  977,    2, 0x0a /* Public */,
     155,    0,  978,    2, 0x0a /* Public */,
     156,    0,  979,    2, 0x0a /* Public */,
     157,    1,  980,    2, 0x0a /* Public */,
     158,    2,  983,    2, 0x0a /* Public */,
     160,    2,  988,    2, 0x0a /* Public */,
     163,    1,  993,    2, 0x0a /* Public */,
     164,    2,  996,    2, 0x0a /* Public */,
     166,    2, 1001,    2, 0x0a /* Public */,
     166,    4, 1006,    2, 0x0a /* Public */,
     167,    2, 1015,    2, 0x0a /* Public */,
     168,    4, 1020,    2, 0x0a /* Public */,
     170,    3, 1029,    2, 0x0a /* Public */,
     171,    3, 1036,    2, 0x0a /* Public */,
     171,    2, 1043,    2, 0x0a /* Public */,
     175,    0, 1048,    2, 0x0a /* Public */,
     176,    2, 1049,    2, 0x0a /* Public */,
     177,    1, 1054,    2, 0x0a /* Public */,
     178,    3, 1057,    2, 0x0a /* Public */,
     179,    3, 1064,    2, 0x0a /* Public */,
     182,    1, 1071,    2, 0x0a /* Public */,
     183,    0, 1074,    2, 0x0a /* Public */,
     184,    2, 1075,    2, 0x0a /* Public */,
     184,    2, 1080,    2, 0x0a /* Public */,
     185,    1, 1085,    2, 0x0a /* Public */,
     186,    1, 1088,    2, 0x0a /* Public */,
     186,    0, 1091,    2, 0x2a /* Public | MethodCloned */,
     188,    0, 1092,    2, 0x08 /* Private */,
     189,    1, 1093,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, 0x80000000 | 14,   29,   30,   15,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,    6,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   36,   37,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 39,    6,   40,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 39, QMetaType::UInt,    6,   42,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QStringList,   49,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   58,   59,
    QMetaType::Void, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 64,   65,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void, QMetaType::QString,   69,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   71,   15,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,   71,   15,
    QMetaType::Void, QMetaType::QString,   73,
    QMetaType::Void, QMetaType::QStringList,   49,
    QMetaType::Void, 0x80000000 | 14, QMetaType::Bool,   15,   75,
    QMetaType::Void, 0x80000000 | 77,   78,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   69,    6,
    QMetaType::Void, 0x80000000 | 39,   81,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   69,    6,   83,
    QMetaType::Void, 0x80000000 | 85,   86,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   88,   61,
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::Void, QMetaType::QStringList,   92,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,   94,   95,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   73,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QByteArray,   12,   33,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,  102,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Int, QMetaType::UChar, QMetaType::Bool,   49,  104,  105,  106,
    QMetaType::Void, QMetaType::QStringList, QMetaType::UInt, QMetaType::UInt, QMetaType::Int, QMetaType::UChar, QMetaType::Bool,   49,   43,  107,  104,  105,  106,
    QMetaType::Void, QMetaType::QStringList, QMetaType::UInt, QMetaType::UInt, QMetaType::Int, 0x80000000 | 108,   49,   43,  107,  104,  105,
    QMetaType::Void, QMetaType::QStringList, QMetaType::UInt, QMetaType::UInt, QMetaType::Int, 0x80000000 | 108, QMetaType::Bool,   49,   43,  107,  104,  105,  106,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 108,   49,  105,
    QMetaType::Void, QMetaType::QString,   94,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 115,   42,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   36,   37,
    QMetaType::Void, 0x80000000 | 39, QMetaType::UInt, QMetaType::UInt,   42,   43,  107,
    QMetaType::Void, 0x80000000 | 39,   42,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  121,
    QMetaType::Void, QMetaType::QString,  123,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  127,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  131,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  127,
    QMetaType::Void, QMetaType::Bool,  127,
    QMetaType::Void, QMetaType::Bool,  127,
    QMetaType::Void, QMetaType::Bool,  127,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   12,  138,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,  131,  138,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   67,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   71,  146,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,  159,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  161,  162,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,  165,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    6,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList, QMetaType::UInt, QMetaType::UInt,    6,   15,   43,  107,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 39,    6,   40,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 39, QMetaType::UInt, QMetaType::UInt,    6,   42,  169,  107,
    QMetaType::Void, 0x80000000 | 115, QMetaType::UChar, QMetaType::Bool,   78,  105,  106,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,  172,  173,   71,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString,  174,   71,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   69,    6,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   69,    6,   83,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,  180,   61,  181,
    QMetaType::Void, QMetaType::QStringList,   61,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString, QMetaType::UChar,   94,   95,
    QMetaType::Void, QMetaType::QStringList, QMetaType::UChar,   49,   95,
    QMetaType::Void, QMetaType::QString,   94,
    QMetaType::Void, QMetaType::Int,  187,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 190,  191,

 // properties: name, type, flags
     192, QMetaType::Int, 0x00095103,

       0        // eod
};

void MPDConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MPDConnection *_t = static_cast<MPDConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionChanged((*reinterpret_cast< const MPDConnectionDetails(*)>(_a[1]))); break;
        case 1: _t->connectionNotChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->passwordError(); break;
        case 4: _t->currentSongUpdated((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 5: _t->playlistUpdated((*reinterpret_cast< const QList<Song>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->statsUpdated((*reinterpret_cast< const MPDStatsValues(*)>(_a[1]))); break;
        case 7: _t->statusUpdated((*reinterpret_cast< const MPDStatusValues(*)>(_a[1]))); break;
        case 8: _t->outputsUpdated((*reinterpret_cast< const QList<Output>(*)>(_a[1]))); break;
        case 9: _t->librarySongs((*reinterpret_cast< QList<Song>*(*)>(_a[1]))); break;
        case 10: _t->folderContents((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< const QList<Song>(*)>(_a[3]))); break;
        case 11: _t->playlistsRetrieved((*reinterpret_cast< const QList<Playlist>(*)>(_a[1]))); break;
        case 12: _t->playlistInfoRetrieved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<Song>(*)>(_a[2]))); break;
        case 13: _t->playlistRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: _t->removedFromPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<quint32>(*)>(_a[2]))); break;
        case 15: _t->movedInPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<quint32>(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 16: _t->updatingDatabase(); break;
        case 17: _t->updatedDatabase(); break;
        case 18: _t->playlistLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->added((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 20: _t->replayGain((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->updatingLibrary((*reinterpret_cast< time_t(*)>(_a[1]))); break;
        case 22: _t->updatedLibrary(); break;
        case 23: _t->updatingFileList(); break;
        case 24: _t->updatedFileList(); break;
        case 25: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->info((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->dirChanged(); break;
        case 29: _t->prioritySet((*reinterpret_cast< const QMap<qint32,quint8>(*)>(_a[1]))); break;
        case 30: _t->stopAfterCurrentChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->streamUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: _t->searchResponse((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<Song>(*)>(_a[2]))); break;
        case 33: _t->searchResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<Song>(*)>(_a[2]))); break;
        case 34: _t->socketAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->cantataStreams((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 36: _t->cantataStreams((*reinterpret_cast< const QList<Song>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->removedIds((*reinterpret_cast< const QSet<qint32>(*)>(_a[1]))); break;
        case 38: _t->savedStream((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 39: _t->removedStreams((*reinterpret_cast< const QList<quint32>(*)>(_a[1]))); break;
        case 40: _t->editedStream((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 41: _t->streamList((*reinterpret_cast< const QList<Stream>(*)>(_a[1]))); break;
        case 42: _t->clientMessageFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 43: _t->dynamicSupport((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->dynamicResponse((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 45: _t->rating((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 46: _t->stickerDbChanged(); break;
        case 47: _t->ifaceIp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: _t->albumArt((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 49: _t->stop(); break;
        case 50: _t->reconnect(); break;
        case 51: _t->setDetails((*reinterpret_cast< const MPDConnectionDetails(*)>(_a[1]))); break;
        case 52: _t->add((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 53: _t->add((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< quint8(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 54: _t->add((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QList<quint8>(*)>(_a[5]))); break;
        case 55: _t->add((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QList<quint8>(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 56: _t->populate((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QList<quint8>(*)>(_a[2]))); break;
        case 57: _t->addAndPlay((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 58: _t->currentSong(); break;
        case 59: _t->playListChanges(); break;
        case 60: _t->playListInfo(); break;
        case 61: _t->removeSongs((*reinterpret_cast< const QList<qint32>(*)>(_a[1]))); break;
        case 62: _t->move((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 63: _t->move((*reinterpret_cast< const QList<quint32>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 64: _t->setOrder((*reinterpret_cast< const QList<quint32>(*)>(_a[1]))); break;
        case 65: _t->shuffle((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 66: _t->clear(); break;
        case 67: _t->shuffle(); break;
        case 68: _t->setCrossFade((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 69: _t->setReplayGain((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 70: _t->getReplayGain(); break;
        case 71: _t->goToNext(); break;
        case 72: _t->setPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: _t->play(); break;
        case 74: _t->startPlayingSong((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 75: _t->startPlayingSong(); break;
        case 76: _t->startPlayingSongId((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 77: _t->startPlayingSongId(); break;
        case 78: _t->goToPrevious(); break;
        case 79: _t->setConsume((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: _t->setRandom((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 81: _t->setRepeat((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: _t->setSingle((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: _t->setSeek((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 84: _t->setSeekId((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 85: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 86: _t->toggleMute(); break;
        case 87: _t->stopPlaying((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->stopPlaying(); break;
        case 89: _t->clearStopAfter(); break;
        case 90: _t->outputs(); break;
        case 91: _t->enableOutput((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 92: _t->getStats(); break;
        case 93: _t->getStatus(); break;
        case 94: _t->getUrlHandlers(); break;
        case 95: _t->getTagTypes(); break;
        case 96: _t->getCover((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 97: _t->loadLibrary(); break;
        case 98: _t->listFolder((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 99: _t->updateMaybe(); break;
        case 100: _t->update(); break;
        case 101: _t->listPlaylists(); break;
        case 102: _t->playlistInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 103: _t->loadPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 104: _t->renamePlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 105: _t->removePlaylist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 106: _t->savePlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 107: _t->addToPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 108: _t->addToPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4]))); break;
        case 109: _t->removeFromPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<quint32>(*)>(_a[2]))); break;
        case 110: _t->moveInPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<quint32>(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3])),(*reinterpret_cast< quint32(*)>(_a[4]))); break;
        case 111: _t->setPriority((*reinterpret_cast< const QList<qint32>(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 112: _t->search((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 113: _t->search((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 114: _t->listStreams(); break;
        case 115: _t->saveStream((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 116: _t->removeStreams((*reinterpret_cast< const QList<quint32>(*)>(_a[1]))); break;
        case 117: _t->editStream((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 118: _t->sendClientMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 119: _t->sendDynamicMessage((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 120: { int _r = _t->getVolume();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 121: _t->setRating((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 122: _t->setRating((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 123: _t->getRating((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 124: _t->seek((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 125: _t->seek(); break;
        case 126: _t->idleDataReady(); break;
        case 127: _t->onSocketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<qint32> >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint8> >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint8> >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint8> >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 96:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 109:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 110:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 111:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
            }
            break;
        case 116:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 127:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MPDConnection::*_t)(const MPDConnectionDetails & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::connectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::connectionNotChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::passwordError)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const Song & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::currentSongUpdated)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QList<Song> & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::playlistUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const MPDStatsValues & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::statsUpdated)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const MPDStatusValues & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::statusUpdated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QList<Output> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::outputsUpdated)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(QList<Song> * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::librarySongs)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , const QStringList & , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::folderContents)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QList<Playlist> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::playlistsRetrieved)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::playlistInfoRetrieved)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::playlistRenamed)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , const QList<quint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::removedFromPlaylist)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , const QList<quint32> & , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::movedInPlaylist)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::updatingDatabase)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::updatedDatabase)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::playlistLoaded)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::added)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::replayGain)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(time_t );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::updatingLibrary)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::updatedLibrary)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::updatingFileList)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::updatedFileList)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::error)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::info)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::dirChanged)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QMap<qint32,quint8> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::prioritySet)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::stopAfterCurrentChanged)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::streamUrl)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(int , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::searchResponse)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , const QList<Song> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::searchResponse)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::socketAddress)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::cantataStreams)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QList<Song> & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::cantataStreams)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QSet<qint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::removedIds)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::savedStream)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QList<quint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::removedStreams)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , const QString & , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::editedStream)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QList<Stream> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::streamList)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::clientMessageFailed)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::dynamicSupport)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::dynamicResponse)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & , quint8 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::rating)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::stickerDbChanged)) {
                *result = 46;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::ifaceIp)) {
                *result = 47;
                return;
            }
        }
        {
            typedef void (MPDConnection::*_t)(const Song & , const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MPDConnection::albumArt)) {
                *result = 48;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MPDConnection *_t = static_cast<MPDConnection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getVolume(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MPDConnection *_t = static_cast<MPDConnection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVolume(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MPDConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MPDConnection.data,
      qt_meta_data_MPDConnection,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MPDConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MPDConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MPDConnection.stringdata0))
        return static_cast<void*>(const_cast< MPDConnection*>(this));
    return QObject::qt_metacast(_clname);
}

int MPDConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 128)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 128;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 128)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 128;
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
void MPDConnection::connectionChanged(const MPDConnectionDetails & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MPDConnection::connectionNotChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MPDConnection::stateChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MPDConnection::passwordError()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void MPDConnection::currentSongUpdated(const Song & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MPDConnection::playlistUpdated(const QList<Song> & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MPDConnection::statsUpdated(const MPDStatsValues & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MPDConnection::statusUpdated(const MPDStatusValues & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MPDConnection::outputsUpdated(const QList<Output> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MPDConnection::librarySongs(QList<Song> * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MPDConnection::folderContents(const QString & _t1, const QStringList & _t2, const QList<Song> & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MPDConnection::playlistsRetrieved(const QList<Playlist> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MPDConnection::playlistInfoRetrieved(const QString & _t1, const QList<Song> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MPDConnection::playlistRenamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MPDConnection::removedFromPlaylist(const QString & _t1, const QList<quint32> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MPDConnection::movedInPlaylist(const QString & _t1, const QList<quint32> & _t2, quint32 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MPDConnection::updatingDatabase()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void MPDConnection::updatedDatabase()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void MPDConnection::playlistLoaded(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MPDConnection::added(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MPDConnection::replayGain(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MPDConnection::updatingLibrary(time_t _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MPDConnection::updatedLibrary()
{
    QMetaObject::activate(this, &staticMetaObject, 22, Q_NULLPTR);
}

// SIGNAL 23
void MPDConnection::updatingFileList()
{
    QMetaObject::activate(this, &staticMetaObject, 23, Q_NULLPTR);
}

// SIGNAL 24
void MPDConnection::updatedFileList()
{
    QMetaObject::activate(this, &staticMetaObject, 24, Q_NULLPTR);
}

// SIGNAL 25
void MPDConnection::error(const QString & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 27
void MPDConnection::info(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MPDConnection::dirChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, Q_NULLPTR);
}

// SIGNAL 29
void MPDConnection::prioritySet(const QMap<qint32,quint8> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MPDConnection::stopAfterCurrentChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MPDConnection::streamUrl(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void MPDConnection::searchResponse(int _t1, const QList<Song> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void MPDConnection::searchResponse(const QString & _t1, const QList<Song> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MPDConnection::socketAddress(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MPDConnection::cantataStreams(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void MPDConnection::cantataStreams(const QList<Song> & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void MPDConnection::removedIds(const QSet<qint32> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void MPDConnection::savedStream(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void MPDConnection::removedStreams(const QList<quint32> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void MPDConnection::editedStream(const QString & _t1, const QString & _t2, quint32 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void MPDConnection::streamList(const QList<Stream> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void MPDConnection::clientMessageFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void MPDConnection::dynamicSupport(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void MPDConnection::dynamicResponse(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void MPDConnection::rating(const QString & _t1, quint8 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void MPDConnection::stickerDbChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 46, Q_NULLPTR);
}

// SIGNAL 47
void MPDConnection::ifaceIp(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void MPDConnection::albumArt(const Song & _t1, const QByteArray & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}
QT_END_MOC_NAMESPACE

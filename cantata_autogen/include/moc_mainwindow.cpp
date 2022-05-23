/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlayQueuePage_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayQueuePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayQueuePage_t qt_meta_stringdata_PlayQueuePage = {
    {
QT_MOC_LITERAL(0, 0, 13) // "PlayQueuePage"

    },
    "PlayQueuePage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayQueuePage[] = {

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

void PlayQueuePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject PlayQueuePage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlayQueuePage.data,
      qt_meta_data_PlayQueuePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlayQueuePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayQueuePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlayQueuePage.stringdata0))
        return static_cast<void*>(const_cast< PlayQueuePage*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlayQueuePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ContextPage_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContextPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContextPage_t qt_meta_stringdata_ContextPage = {
    {
QT_MOC_LITERAL(0, 0, 11) // "ContextPage"

    },
    "ContextPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContextPage[] = {

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

void ContextPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ContextPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ContextPage.data,
      qt_meta_data_ContextPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ContextPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContextPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ContextPage.stringdata0))
        return static_cast<void*>(const_cast< ContextPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ContextPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[158];
    char stringdata0[2063];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "setDetails"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 20), // "MPDConnectionDetails"
QT_MOC_LITERAL(4, 44, 3), // "det"
QT_MOC_LITERAL(5, 48, 5), // "pause"
QT_MOC_LITERAL(6, 54, 1), // "p"
QT_MOC_LITERAL(7, 56, 4), // "play"
QT_MOC_LITERAL(8, 61, 4), // "stop"
QT_MOC_LITERAL(9, 66, 12), // "afterCurrent"
QT_MOC_LITERAL(10, 79, 11), // "terminating"
QT_MOC_LITERAL(11, 91, 9), // "getStatus"
QT_MOC_LITERAL(12, 101, 12), // "playListInfo"
QT_MOC_LITERAL(13, 114, 11), // "currentSong"
QT_MOC_LITERAL(14, 126, 9), // "setSeekId"
QT_MOC_LITERAL(15, 136, 18), // "startPlayingSongId"
QT_MOC_LITERAL(16, 155, 9), // "setVolume"
QT_MOC_LITERAL(17, 165, 7), // "outputs"
QT_MOC_LITERAL(18, 173, 12), // "enableOutput"
QT_MOC_LITERAL(19, 186, 2), // "id"
QT_MOC_LITERAL(20, 189, 11), // "setPriority"
QT_MOC_LITERAL(21, 201, 13), // "QList<qint32>"
QT_MOC_LITERAL(22, 215, 3), // "ids"
QT_MOC_LITERAL(23, 219, 8), // "priority"
QT_MOC_LITERAL(24, 228, 16), // "decreasePriority"
QT_MOC_LITERAL(25, 245, 18), // "addSongsToPlaylist"
QT_MOC_LITERAL(26, 264, 4), // "name"
QT_MOC_LITERAL(27, 269, 5), // "files"
QT_MOC_LITERAL(28, 275, 19), // "showPreferencesPage"
QT_MOC_LITERAL(29, 295, 4), // "page"
QT_MOC_LITERAL(30, 300, 8), // "playNext"
QT_MOC_LITERAL(31, 309, 14), // "QList<quint32>"
QT_MOC_LITERAL(32, 324, 5), // "items"
QT_MOC_LITERAL(33, 330, 3), // "pos"
QT_MOC_LITERAL(34, 334, 4), // "size"
QT_MOC_LITERAL(35, 339, 9), // "showError"
QT_MOC_LITERAL(36, 349, 7), // "message"
QT_MOC_LITERAL(37, 357, 11), // "showActions"
QT_MOC_LITERAL(38, 369, 15), // "showInformation"
QT_MOC_LITERAL(39, 385, 13), // "dynamicStatus"
QT_MOC_LITERAL(40, 399, 13), // "setCollection"
QT_MOC_LITERAL(41, 413, 10), // "collection"
QT_MOC_LITERAL(42, 424, 17), // "mpdConnectionName"
QT_MOC_LITERAL(43, 442, 10), // "hideWindow"
QT_MOC_LITERAL(44, 453, 13), // "restoreWindow"
QT_MOC_LITERAL(45, 467, 4), // "load"
QT_MOC_LITERAL(46, 472, 4), // "urls"
QT_MOC_LITERAL(47, 477, 15), // "showAboutDialog"
QT_MOC_LITERAL(48, 493, 25), // "mpdConnectionStateChanged"
QT_MOC_LITERAL(49, 519, 9), // "connected"
QT_MOC_LITERAL(50, 529, 22), // "playQueueItemsSelected"
QT_MOC_LITERAL(51, 552, 1), // "s"
QT_MOC_LITERAL(52, 554, 21), // "showPreferencesDialog"
QT_MOC_LITERAL(53, 576, 4), // "quit"
QT_MOC_LITERAL(54, 581, 17), // "commitDataRequest"
QT_MOC_LITERAL(55, 599, 16), // "QSessionManager&"
QT_MOC_LITERAL(56, 616, 3), // "mgr"
QT_MOC_LITERAL(57, 620, 14), // "updateSettings"
QT_MOC_LITERAL(58, 635, 12), // "toggleOutput"
QT_MOC_LITERAL(59, 648, 16), // "changeConnection"
QT_MOC_LITERAL(60, 665, 12), // "connectToMpd"
QT_MOC_LITERAL(61, 678, 7), // "details"
QT_MOC_LITERAL(62, 686, 9), // "streamUrl"
QT_MOC_LITERAL(63, 696, 1), // "u"
QT_MOC_LITERAL(64, 698, 14), // "refreshDbPromp"
QT_MOC_LITERAL(65, 713, 14), // "showServerInfo"
QT_MOC_LITERAL(66, 728, 12), // "stopPlayback"
QT_MOC_LITERAL(67, 741, 21), // "stopAfterCurrentTrack"
QT_MOC_LITERAL(68, 763, 14), // "stopAfterTrack"
QT_MOC_LITERAL(69, 778, 14), // "playPauseTrack"
QT_MOC_LITERAL(70, 793, 11), // "setPosition"
QT_MOC_LITERAL(71, 805, 15), // "searchPlayQueue"
QT_MOC_LITERAL(72, 821, 19), // "realSearchPlayQueue"
QT_MOC_LITERAL(73, 841, 24), // "playQueueSearchActivated"
QT_MOC_LITERAL(74, 866, 1), // "a"
QT_MOC_LITERAL(75, 868, 15), // "updatePlayQueue"
QT_MOC_LITERAL(76, 884, 11), // "QList<Song>"
QT_MOC_LITERAL(77, 896, 5), // "songs"
QT_MOC_LITERAL(78, 902, 10), // "isComplete"
QT_MOC_LITERAL(79, 913, 17), // "updateCurrentSong"
QT_MOC_LITERAL(80, 931, 4), // "Song"
QT_MOC_LITERAL(81, 936, 4), // "song"
QT_MOC_LITERAL(82, 941, 8), // "wasEmpty"
QT_MOC_LITERAL(83, 950, 15), // "scrollPlayQueue"
QT_MOC_LITERAL(84, 966, 12), // "updateStatus"
QT_MOC_LITERAL(85, 979, 22), // "playQueueItemActivated"
QT_MOC_LITERAL(86, 1002, 14), // "clearPlayQueue"
QT_MOC_LITERAL(87, 1017, 15), // "centerPlayQueue"
QT_MOC_LITERAL(88, 1033, 19), // "removeFromPlayQueue"
QT_MOC_LITERAL(89, 1053, 16), // "replacePlayQueue"
QT_MOC_LITERAL(90, 1070, 17), // "appendToPlayQueue"
QT_MOC_LITERAL(91, 1088, 24), // "appendToPlayQueueAndPlay"
QT_MOC_LITERAL(92, 1113, 21), // "addToPlayQueueAndPlay"
QT_MOC_LITERAL(93, 1135, 19), // "insertIntoPlayQueue"
QT_MOC_LITERAL(94, 1155, 15), // "addWithPriority"
QT_MOC_LITERAL(95, 1171, 22), // "addToNewStoredPlaylist"
QT_MOC_LITERAL(96, 1194, 27), // "addToExistingStoredPlaylist"
QT_MOC_LITERAL(97, 1222, 2), // "pq"
QT_MOC_LITERAL(98, 1225, 20), // "addStreamToPlayQueue"
QT_MOC_LITERAL(99, 1246, 24), // "addLocalFilesToPlayQueue"
QT_MOC_LITERAL(100, 1271, 11), // "removeItems"
QT_MOC_LITERAL(101, 1283, 21), // "checkMpdAccessibility"
QT_MOC_LITERAL(102, 1305, 13), // "cropPlayQueue"
QT_MOC_LITERAL(103, 1319, 20), // "updatePlayQueueStats"
QT_MOC_LITERAL(104, 1340, 4), // "time"
QT_MOC_LITERAL(105, 1345, 16), // "expandOrCollapse"
QT_MOC_LITERAL(106, 1362, 15), // "saveCurrentSize"
QT_MOC_LITERAL(107, 1378, 12), // "showSongInfo"
QT_MOC_LITERAL(108, 1391, 10), // "fullScreen"
QT_MOC_LITERAL(109, 1402, 18), // "sidebarModeChanged"
QT_MOC_LITERAL(110, 1421, 17), // "currentTabChanged"
QT_MOC_LITERAL(111, 1439, 5), // "index"
QT_MOC_LITERAL(112, 1445, 10), // "tabToggled"
QT_MOC_LITERAL(113, 1456, 13), // "showPlayQueue"
QT_MOC_LITERAL(114, 1470, 14), // "showLibraryTab"
QT_MOC_LITERAL(115, 1485, 14), // "showFoldersTab"
QT_MOC_LITERAL(116, 1500, 16), // "showPlaylistsTab"
QT_MOC_LITERAL(117, 1517, 13), // "showOnlineTab"
QT_MOC_LITERAL(118, 1531, 14), // "showContextTab"
QT_MOC_LITERAL(119, 1546, 14), // "showDevicesTab"
QT_MOC_LITERAL(120, 1561, 13), // "showSearchTab"
QT_MOC_LITERAL(121, 1575, 22), // "toggleSplitterAutoHide"
QT_MOC_LITERAL(122, 1598, 12), // "locateTracks"
QT_MOC_LITERAL(123, 1611, 11), // "locateTrack"
QT_MOC_LITERAL(124, 1623, 29), // "moveSelectionAfterCurrentSong"
QT_MOC_LITERAL(125, 1653, 12), // "locateArtist"
QT_MOC_LITERAL(126, 1666, 6), // "artist"
QT_MOC_LITERAL(127, 1673, 11), // "locateAlbum"
QT_MOC_LITERAL(128, 1685, 5), // "album"
QT_MOC_LITERAL(129, 1691, 8), // "editTags"
QT_MOC_LITERAL(130, 1700, 13), // "organiseFiles"
QT_MOC_LITERAL(131, 1714, 11), // "addToDevice"
QT_MOC_LITERAL(132, 1726, 3), // "udi"
QT_MOC_LITERAL(133, 1730, 11), // "deleteSongs"
QT_MOC_LITERAL(134, 1742, 12), // "copyToDevice"
QT_MOC_LITERAL(135, 1755, 4), // "from"
QT_MOC_LITERAL(136, 1760, 2), // "to"
QT_MOC_LITERAL(137, 1763, 10), // "replayGain"
QT_MOC_LITERAL(138, 1774, 8), // "setCover"
QT_MOC_LITERAL(139, 1783, 19), // "showPlayQueueSearch"
QT_MOC_LITERAL(140, 1803, 10), // "showSearch"
QT_MOC_LITERAL(141, 1814, 9), // "expandAll"
QT_MOC_LITERAL(142, 1824, 11), // "collapseAll"
QT_MOC_LITERAL(143, 1836, 11), // "checkMpdDir"
QT_MOC_LITERAL(144, 1848, 14), // "outputsUpdated"
QT_MOC_LITERAL(145, 1863, 13), // "QList<Output>"
QT_MOC_LITERAL(146, 1877, 21), // "updateConnectionsMenu"
QT_MOC_LITERAL(147, 1899, 22), // "controlConnectionsMenu"
QT_MOC_LITERAL(148, 1922, 6), // "enable"
QT_MOC_LITERAL(149, 1929, 20), // "controlDynamicButton"
QT_MOC_LITERAL(150, 1950, 9), // "setRating"
QT_MOC_LITERAL(151, 1960, 13), // "triggerAction"
QT_MOC_LITERAL(152, 1974, 23), // "controlPlayQueueButtons"
QT_MOC_LITERAL(153, 1998, 13), // "toggleContext"
QT_MOC_LITERAL(154, 2012, 9), // "initMpris"
QT_MOC_LITERAL(155, 2022, 13), // "toggleMenubar"
QT_MOC_LITERAL(156, 2036, 14), // "paletteChanged"
QT_MOC_LITERAL(157, 2051, 11) // "listActions"

    },
    "MainWindow\0setDetails\0\0MPDConnectionDetails\0"
    "det\0pause\0p\0play\0stop\0afterCurrent\0"
    "terminating\0getStatus\0playListInfo\0"
    "currentSong\0setSeekId\0startPlayingSongId\0"
    "setVolume\0outputs\0enableOutput\0id\0"
    "setPriority\0QList<qint32>\0ids\0priority\0"
    "decreasePriority\0addSongsToPlaylist\0"
    "name\0files\0showPreferencesPage\0page\0"
    "playNext\0QList<quint32>\0items\0pos\0"
    "size\0showError\0message\0showActions\0"
    "showInformation\0dynamicStatus\0"
    "setCollection\0collection\0mpdConnectionName\0"
    "hideWindow\0restoreWindow\0load\0urls\0"
    "showAboutDialog\0mpdConnectionStateChanged\0"
    "connected\0playQueueItemsSelected\0s\0"
    "showPreferencesDialog\0quit\0commitDataRequest\0"
    "QSessionManager&\0mgr\0updateSettings\0"
    "toggleOutput\0changeConnection\0"
    "connectToMpd\0details\0streamUrl\0u\0"
    "refreshDbPromp\0showServerInfo\0"
    "stopPlayback\0stopAfterCurrentTrack\0"
    "stopAfterTrack\0playPauseTrack\0setPosition\0"
    "searchPlayQueue\0realSearchPlayQueue\0"
    "playQueueSearchActivated\0a\0updatePlayQueue\0"
    "QList<Song>\0songs\0isComplete\0"
    "updateCurrentSong\0Song\0song\0wasEmpty\0"
    "scrollPlayQueue\0updateStatus\0"
    "playQueueItemActivated\0clearPlayQueue\0"
    "centerPlayQueue\0removeFromPlayQueue\0"
    "replacePlayQueue\0appendToPlayQueue\0"
    "appendToPlayQueueAndPlay\0addToPlayQueueAndPlay\0"
    "insertIntoPlayQueue\0addWithPriority\0"
    "addToNewStoredPlaylist\0"
    "addToExistingStoredPlaylist\0pq\0"
    "addStreamToPlayQueue\0addLocalFilesToPlayQueue\0"
    "removeItems\0checkMpdAccessibility\0"
    "cropPlayQueue\0updatePlayQueueStats\0"
    "time\0expandOrCollapse\0saveCurrentSize\0"
    "showSongInfo\0fullScreen\0sidebarModeChanged\0"
    "currentTabChanged\0index\0tabToggled\0"
    "showPlayQueue\0showLibraryTab\0"
    "showFoldersTab\0showPlaylistsTab\0"
    "showOnlineTab\0showContextTab\0"
    "showDevicesTab\0showSearchTab\0"
    "toggleSplitterAutoHide\0locateTracks\0"
    "locateTrack\0moveSelectionAfterCurrentSong\0"
    "locateArtist\0artist\0locateAlbum\0album\0"
    "editTags\0organiseFiles\0addToDevice\0"
    "udi\0deleteSongs\0copyToDevice\0from\0to\0"
    "replayGain\0setCover\0showPlayQueueSearch\0"
    "showSearch\0expandAll\0collapseAll\0"
    "checkMpdDir\0outputsUpdated\0QList<Output>\0"
    "updateConnectionsMenu\0controlConnectionsMenu\0"
    "enable\0controlDynamicButton\0setRating\0"
    "triggerAction\0controlPlayQueueButtons\0"
    "toggleContext\0initMpris\0toggleMenubar\0"
    "paletteChanged\0listActions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     121,   14, // methods
       1,  862, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  619,    2, 0x06 /* Public */,
       5,    1,  622,    2, 0x06 /* Public */,
       7,    0,  625,    2, 0x06 /* Public */,
       8,    1,  626,    2, 0x06 /* Public */,
       8,    0,  629,    2, 0x26 /* Public | MethodCloned */,
      10,    0,  630,    2, 0x06 /* Public */,
      11,    0,  631,    2, 0x06 /* Public */,
      12,    0,  632,    2, 0x06 /* Public */,
      13,    0,  633,    2, 0x06 /* Public */,
      14,    2,  634,    2, 0x06 /* Public */,
      15,    1,  639,    2, 0x06 /* Public */,
      16,    1,  642,    2, 0x06 /* Public */,
      17,    0,  645,    2, 0x06 /* Public */,
      18,    2,  646,    2, 0x06 /* Public */,
      20,    3,  651,    2, 0x06 /* Public */,
      25,    2,  658,    2, 0x06 /* Public */,
      28,    1,  663,    2, 0x06 /* Public */,
      30,    3,  666,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      35,    2,  673,    2, 0x0a /* Public */,
      35,    1,  678,    2, 0x2a /* Public | MethodCloned */,
      38,    1,  681,    2, 0x0a /* Public */,
      39,    1,  684,    2, 0x0a /* Public */,
      40,    1,  687,    2, 0x0a /* Public */,
      42,    1,  690,    2, 0x0a /* Public */,
      43,    0,  693,    2, 0x0a /* Public */,
      44,    0,  694,    2, 0x0a /* Public */,
      45,    1,  695,    2, 0x0a /* Public */,
      47,    0,  698,    2, 0x0a /* Public */,
      48,    1,  699,    2, 0x0a /* Public */,
      50,    1,  702,    2, 0x0a /* Public */,
      52,    1,  705,    2, 0x0a /* Public */,
      52,    0,  708,    2, 0x2a /* Public | MethodCloned */,
      53,    0,  709,    2, 0x0a /* Public */,
      54,    1,  710,    2, 0x0a /* Public */,
      57,    0,  713,    2, 0x0a /* Public */,
      58,    0,  714,    2, 0x0a /* Public */,
      59,    0,  715,    2, 0x0a /* Public */,
      60,    0,  716,    2, 0x0a /* Public */,
      60,    1,  717,    2, 0x0a /* Public */,
      62,    1,  720,    2, 0x0a /* Public */,
      64,    0,  723,    2, 0x0a /* Public */,
      65,    0,  724,    2, 0x0a /* Public */,
      66,    0,  725,    2, 0x0a /* Public */,
      67,    0,  726,    2, 0x0a /* Public */,
      68,    0,  727,    2, 0x0a /* Public */,
      69,    0,  728,    2, 0x0a /* Public */,
      70,    0,  729,    2, 0x0a /* Public */,
      71,    0,  730,    2, 0x0a /* Public */,
      72,    0,  731,    2, 0x0a /* Public */,
      73,    1,  732,    2, 0x0a /* Public */,
      75,    2,  735,    2, 0x0a /* Public */,
      79,    2,  740,    2, 0x0a /* Public */,
      79,    1,  745,    2, 0x2a /* Public | MethodCloned */,
      83,    1,  748,    2, 0x0a /* Public */,
      83,    0,  751,    2, 0x2a /* Public | MethodCloned */,
      84,    0,  752,    2, 0x0a /* Public */,
      85,    1,  753,    2, 0x0a /* Public */,
      86,    0,  756,    2, 0x0a /* Public */,
      87,    0,  757,    2, 0x0a /* Public */,
      88,    0,  758,    2, 0x0a /* Public */,
      89,    0,  759,    2, 0x0a /* Public */,
      90,    0,  760,    2, 0x0a /* Public */,
      91,    0,  761,    2, 0x0a /* Public */,
      92,    0,  762,    2, 0x0a /* Public */,
      93,    0,  763,    2, 0x0a /* Public */,
      94,    0,  764,    2, 0x0a /* Public */,
      95,    0,  765,    2, 0x0a /* Public */,
      96,    1,  766,    2, 0x0a /* Public */,
      96,    2,  769,    2, 0x0a /* Public */,
      98,    0,  774,    2, 0x0a /* Public */,
      99,    0,  775,    2, 0x0a /* Public */,
     100,    0,  776,    2, 0x0a /* Public */,
     101,    0,  777,    2, 0x0a /* Public */,
     102,    0,  778,    2, 0x0a /* Public */,
     103,    2,  779,    2, 0x0a /* Public */,
     105,    1,  784,    2, 0x0a /* Public */,
     105,    0,  787,    2, 0x2a /* Public | MethodCloned */,
     107,    0,  788,    2, 0x0a /* Public */,
     108,    0,  789,    2, 0x0a /* Public */,
     109,    0,  790,    2, 0x0a /* Public */,
     110,    1,  791,    2, 0x0a /* Public */,
     112,    1,  794,    2, 0x0a /* Public */,
     113,    0,  797,    2, 0x0a /* Public */,
     114,    0,  798,    2, 0x0a /* Public */,
     115,    0,  799,    2, 0x0a /* Public */,
     116,    0,  800,    2, 0x0a /* Public */,
     117,    0,  801,    2, 0x0a /* Public */,
     118,    0,  802,    2, 0x0a /* Public */,
     119,    0,  803,    2, 0x0a /* Public */,
     120,    0,  804,    2, 0x0a /* Public */,
     121,    0,  805,    2, 0x0a /* Public */,
     122,    1,  806,    2, 0x0a /* Public */,
     123,    0,  809,    2, 0x0a /* Public */,
     124,    0,  810,    2, 0x0a /* Public */,
     125,    1,  811,    2, 0x0a /* Public */,
     127,    2,  814,    2, 0x0a /* Public */,
     129,    0,  819,    2, 0x0a /* Public */,
     130,    0,  820,    2, 0x0a /* Public */,
     131,    1,  821,    2, 0x0a /* Public */,
     133,    0,  824,    2, 0x0a /* Public */,
     134,    3,  825,    2, 0x0a /* Public */,
     133,    2,  832,    2, 0x0a /* Public */,
     137,    0,  837,    2, 0x0a /* Public */,
     138,    0,  838,    2, 0x0a /* Public */,
     139,    0,  839,    2, 0x0a /* Public */,
     140,    0,  840,    2, 0x0a /* Public */,
     141,    0,  841,    2, 0x0a /* Public */,
     142,    0,  842,    2, 0x0a /* Public */,
     143,    0,  843,    2, 0x0a /* Public */,
     144,    1,  844,    2, 0x0a /* Public */,
     146,    0,  847,    2, 0x0a /* Public */,
     147,    1,  848,    2, 0x0a /* Public */,
     147,    0,  851,    2, 0x2a /* Public | MethodCloned */,
     149,    0,  852,    2, 0x0a /* Public */,
     150,    0,  853,    2, 0x0a /* Public */,
     151,    1,  854,    2, 0x0a /* Public */,
     152,    0,  857,    2, 0x08 /* Private */,
     153,    0,  858,    2, 0x08 /* Private */,
     154,    0,  859,    2, 0x08 /* Private */,
     155,    0,  860,    2, 0x08 /* Private */,
     156,    0,  861,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::Bool,   19,    2,
    QMetaType::Void, 0x80000000 | 21, QMetaType::UChar, QMetaType::Bool,   22,   23,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   26,   27,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, 0x80000000 | 31, QMetaType::UInt, QMetaType::UInt,   32,   33,   34,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   36,   37,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   46,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 55,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   61,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   74,
    QMetaType::Void, 0x80000000 | 76, QMetaType::Bool,   77,   78,
    QMetaType::Void, 0x80000000 | 80, QMetaType::Bool,   81,   82,
    QMetaType::Void, 0x80000000 | 80,   81,
    QMetaType::Void, QMetaType::Bool,   82,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   26,   97,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,   77,  104,
    QMetaType::Void, QMetaType::Bool,  106,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  111,
    QMetaType::Void, QMetaType::Int,  111,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 76,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  126,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  126,  128,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  132,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 76,  135,  136,   77,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 76,  135,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 145,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  148,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
     157, QMetaType::QStringList, 0x00095001,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setDetails((*reinterpret_cast< const MPDConnectionDetails(*)>(_a[1]))); break;
        case 1: _t->pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->play(); break;
        case 3: _t->stop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->stop(); break;
        case 5: _t->terminating(); break;
        case 6: _t->getStatus(); break;
        case 7: _t->playListInfo(); break;
        case 8: _t->currentSong(); break;
        case 9: _t->setSeekId((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 10: _t->startPlayingSongId((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 11: _t->setVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->outputs(); break;
        case 13: _t->enableOutput((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->setPriority((*reinterpret_cast< const QList<qint32>(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 15: _t->addSongsToPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 16: _t->showPreferencesPage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->playNext((*reinterpret_cast< const QList<quint32>(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< quint32(*)>(_a[3]))); break;
        case 18: _t->showError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->showError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->showInformation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->dynamicStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->setCollection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->mpdConnectionName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->hideWindow(); break;
        case 25: _t->restoreWindow(); break;
        case 26: _t->load((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 27: _t->showAboutDialog(); break;
        case 28: _t->mpdConnectionStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->playQueueItemsSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->showPreferencesDialog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: _t->showPreferencesDialog(); break;
        case 32: _t->quit(); break;
        case 33: _t->commitDataRequest((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 34: _t->updateSettings(); break;
        case 35: _t->toggleOutput(); break;
        case 36: _t->changeConnection(); break;
        case 37: _t->connectToMpd(); break;
        case 38: _t->connectToMpd((*reinterpret_cast< const MPDConnectionDetails(*)>(_a[1]))); break;
        case 39: _t->streamUrl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->refreshDbPromp(); break;
        case 41: _t->showServerInfo(); break;
        case 42: _t->stopPlayback(); break;
        case 43: _t->stopAfterCurrentTrack(); break;
        case 44: _t->stopAfterTrack(); break;
        case 45: _t->playPauseTrack(); break;
        case 46: _t->setPosition(); break;
        case 47: _t->searchPlayQueue(); break;
        case 48: _t->realSearchPlayQueue(); break;
        case 49: _t->playQueueSearchActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->updatePlayQueue((*reinterpret_cast< const QList<Song>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: _t->updateCurrentSong((*reinterpret_cast< Song(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 52: _t->updateCurrentSong((*reinterpret_cast< Song(*)>(_a[1]))); break;
        case 53: _t->scrollPlayQueue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->scrollPlayQueue(); break;
        case 55: _t->updateStatus(); break;
        case 56: _t->playQueueItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 57: _t->clearPlayQueue(); break;
        case 58: _t->centerPlayQueue(); break;
        case 59: _t->removeFromPlayQueue(); break;
        case 60: _t->replacePlayQueue(); break;
        case 61: _t->appendToPlayQueue(); break;
        case 62: _t->appendToPlayQueueAndPlay(); break;
        case 63: _t->addToPlayQueueAndPlay(); break;
        case 64: _t->insertIntoPlayQueue(); break;
        case 65: _t->addWithPriority(); break;
        case 66: _t->addToNewStoredPlaylist(); break;
        case 67: _t->addToExistingStoredPlaylist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 68: _t->addToExistingStoredPlaylist((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 69: _t->addStreamToPlayQueue(); break;
        case 70: _t->addLocalFilesToPlayQueue(); break;
        case 71: _t->removeItems(); break;
        case 72: _t->checkMpdAccessibility(); break;
        case 73: _t->cropPlayQueue(); break;
        case 74: _t->updatePlayQueueStats((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 75: _t->expandOrCollapse((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 76: _t->expandOrCollapse(); break;
        case 77: _t->showSongInfo(); break;
        case 78: _t->fullScreen(); break;
        case 79: _t->sidebarModeChanged(); break;
        case 80: _t->currentTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->tabToggled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 82: _t->showPlayQueue(); break;
        case 83: _t->showLibraryTab(); break;
        case 84: _t->showFoldersTab(); break;
        case 85: _t->showPlaylistsTab(); break;
        case 86: _t->showOnlineTab(); break;
        case 87: _t->showContextTab(); break;
        case 88: _t->showDevicesTab(); break;
        case 89: _t->showSearchTab(); break;
        case 90: _t->toggleSplitterAutoHide(); break;
        case 91: _t->locateTracks((*reinterpret_cast< const QList<Song>(*)>(_a[1]))); break;
        case 92: _t->locateTrack(); break;
        case 93: _t->moveSelectionAfterCurrentSong(); break;
        case 94: _t->locateArtist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 95: _t->locateAlbum((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 96: _t->editTags(); break;
        case 97: _t->organiseFiles(); break;
        case 98: _t->addToDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 99: _t->deleteSongs(); break;
        case 100: _t->copyToDevice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QList<Song>(*)>(_a[3]))); break;
        case 101: _t->deleteSongs((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<Song>(*)>(_a[2]))); break;
        case 102: _t->replayGain(); break;
        case 103: _t->setCover(); break;
        case 104: _t->showPlayQueueSearch(); break;
        case 105: _t->showSearch(); break;
        case 106: _t->expandAll(); break;
        case 107: _t->collapseAll(); break;
        case 108: _t->checkMpdDir(); break;
        case 109: _t->outputsUpdated((*reinterpret_cast< const QList<Output>(*)>(_a[1]))); break;
        case 110: _t->updateConnectionsMenu(); break;
        case 111: _t->controlConnectionsMenu((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 112: _t->controlConnectionsMenu(); break;
        case 113: _t->controlDynamicButton(); break;
        case 114: _t->setRating(); break;
        case 115: _t->triggerAction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 116: _t->controlPlayQueueButtons(); break;
        case 117: _t->toggleContext(); break;
        case 118: _t->initMpris(); break;
        case 119: _t->toggleMenubar(); break;
        case 120: _t->paletteChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<quint32> >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 91:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 100:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        case 101:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<Song> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(const MPDConnectionDetails & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::setDetails)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::pause)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::play)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::stop)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::terminating)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::getStatus)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::playListInfo)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::currentSong)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(qint32 , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::setSeekId)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(qint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::startPlayingSongId)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::setVolume)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::outputs)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(quint32 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::enableOutput)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(const QList<qint32> & , quint8 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::setPriority)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::addSongsToPlaylist)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::showPreferencesPage)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(const QList<quint32> & , quint32 , quint32 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::playNext)) {
                *result = 17;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->listActions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 121)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 121;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 121)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 121;
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
void MainWindow::setDetails(const MPDConnectionDetails & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::pause(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::play()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void MainWindow::stop(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void MainWindow::terminating()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void MainWindow::getStatus()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void MainWindow::playListInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void MainWindow::currentSong()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void MainWindow::setSeekId(qint32 _t1, quint32 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::startPlayingSongId(qint32 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::setVolume(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::outputs()
{
    QMetaObject::activate(this, &staticMetaObject, 12, Q_NULLPTR);
}

// SIGNAL 13
void MainWindow::enableOutput(quint32 _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindow::setPriority(const QList<qint32> & _t1, quint8 _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainWindow::addSongsToPlaylist(const QString & _t1, const QStringList & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainWindow::showPreferencesPage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindow::playNext(const QList<quint32> & _t1, quint32 _t2, quint32 _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_END_MOC_NAMESPACE

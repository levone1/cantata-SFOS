#ifndef _CONFIG_H
#define _CONFIG_H

#include <QCoreApplication>
#include "support/utils.h"

#if QT_VERSION >= 0x050600
#define DEVICE_PIXEL_RATIO devicePixelRatioF
#else
#define DEVICE_PIXEL_RATIO devicePixelRatio
#endif

#define CANTATA_MAKE_VERSION(a, b, c) (((a) << 16) | ((b) << 8) | (c))
#define PACKAGE_NAME  "cantata"
#define ORGANIZATION_NAME "cantata"
#define PACKAGE_VERSION CANTATA_MAKE_VERSION(2, 4, 1)
#define PACKAGE_STRING  PACKAGE_NAME" 2.4.1"
#define PACKAGE_VERSION_STRING "2.4.1"
#define INSTALL_PREFIX "/usr"
#define SHARE_INSTALL_PREFIX "/usr/local/share"
#define ICON_INSTALL_PREFIX "/usr/local/share/icons/hicolor"

#define ENABLE_DEVICES_SUPPORT 1
#define ENABLE_REMOTE_DEVICES 1
/* #undef COMPLEX_TAGLIB_FILENAME */
#define TAGLIB_FOUND 1
#define TAGLIB_ASF_FOUND
#define TAGLIB_MP4_FOUND 1
#define TAGLIB_OPUS_FOUND 1
#define MTP_FOUND 1
#define ENABLE_HTTP_STREAM_PLAYBACK 1
/* #undef ENABLE_KWALLET */
#define FFMPEG_FOUND 1
/* #undef MPG123_FOUND */
/* #undef CDDB_FOUND */
/* #undef MUSICBRAINZ5_FOUND */
#define ENABLE_REPLAYGAIN_SUPPORT 1
#define TAGLIB_CAN_SAVE_ID3VER 1
#define ENABLE_PROXY_CONFIG 1
/* #undef CDPARANOIA_HAS_CACHEMODEL_SIZE */
/* #undef CDIOPARANOIA_FOUND */
#define QT_QTDBUS_FOUND 1
#define ENABLE_HTTP_SERVER 1
/* #undef IOKIT_FOUND */
/* #undef QT_MAC_EXTRAS_FOUND */
#define ENABLE_SIMPLE_MPD_SUPPORT 1
/* #undef AVAHI_FOUND */
#define ENABLE_CATEGORIZED_VIEW 1

/* #undef HAVE_CDIO_PARANOIA_H */
/* #undef HAVE_CDIO_PARANOIA_PARANOIA_H */
/* #undef HAVE_CDIO_CDDA_H */
/* #undef HAVE_CDIO_PARANOIA_CDDA_H */

#define CANTATA_REV_URL "mpd.cantata"
#define CANTATA_URL "cantata.mpd"

#define CANTATA_SYS_ICONS_DIR   Utils::systemDir(QLatin1String("icons"))
#define CANTATA_SYS_MPD_DIR     Utils::systemDir(QLatin1String("mpd"))
#define CANTATA_SYS_TRANS_DIR   Utils::systemDir(QLatin1String("translations"))
#define CANTATA_SYS_SCRIPTS_DIR Utils::systemDir(QLatin1String("scripts"))

#define LINUX_LIB_DIR "lib64"

#define CANTATA_ICON_THEME ""

#endif

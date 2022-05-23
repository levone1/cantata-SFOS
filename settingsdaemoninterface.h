/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -m -p settingsdaemoninterface /home/defaultuser/Downloads/tmp/cantata-2.4.1/dbus/org.gnome.SettingsDaemon.xml
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef SETTINGSDAEMONINTERFACE_H
#define SETTINGSDAEMONINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.gnome.SettingsDaemon
 */
class OrgGnomeSettingsDaemonInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.gnome.SettingsDaemon"; }

public:
    OrgGnomeSettingsDaemonInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OrgGnomeSettingsDaemonInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Awake()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Awake"), argumentList);
    }

    inline QDBusPendingReply<> Start()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("Start"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void PluginActivated(const QString &in0);
    void PluginDeactivated(const QString &in0);
};

#endif

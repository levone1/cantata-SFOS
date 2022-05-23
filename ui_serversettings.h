/********************************************************************************
** Form generated from reading UI file 'serversettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERSETTINGS_H
#define UI_SERVERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/flattoolbutton.h"
#include "support/lineedit.h"
#include "support/pathrequester.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_ServerSettings
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *combo;
    FlatToolButton *addButton;
    FlatToolButton *removeButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    LineEdit *name;
    BuddyLabel *hostLabel;
    QHBoxLayout *hostLayout;
    LineEdit *host;
    QSpinBox *port;
    BuddyLabel *passwordLabel;
    LineEdit *password;
    BuddyLabel *dirLabel;
    PathRequester *dir;
    BuddyLabel *streamUrlLabel;
    LineEdit *streamUrl;
    BuddyLabel *allowLocalStreamingLabel;
    QCheckBox *allowLocalStreaming;
    BuddyLabel *autoUpdateLabel;
    QCheckBox *autoUpdate;
    NoteLabel *musicFolderNoteLabel;
    NoteLabel *streamUrlNoteLabel;
    NoteLabel *allowLocalStreamingNoteLabel;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_7;
    QFormLayout *formLayout_2;
    BuddyLabel *dirLabel_2;
    PathRequester *basicDir;
    NoteLabel *basicMusicFolderNoteLabel;
    QSpacerItem *expandingSpacer;

    void setupUi(QWidget *ServerSettings)
    {
        if (ServerSettings->objectName().isEmpty())
            ServerSettings->setObjectName(QStringLiteral("ServerSettings"));
        ServerSettings->resize(599, 472);
        gridLayout_2 = new QGridLayout(ServerSettings);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 535, 0);
        label = new QLabel(ServerSettings);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        combo = new QComboBox(ServerSettings);
        combo->setObjectName(QStringLiteral("combo"));

        gridLayout_2->addWidget(combo, 0, 1, 1, 1);

        addButton = new FlatToolButton(ServerSettings);
        addButton->setObjectName(QStringLiteral("addButton"));

        gridLayout_2->addWidget(addButton, 0, 2, 1, 1);

        removeButton = new FlatToolButton(ServerSettings);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        gridLayout_2->addWidget(removeButton, 0, 3, 1, 1);

        stackedWidget = new QStackedWidget(ServerSettings);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        name = new LineEdit(page);
        name->setObjectName(QStringLiteral("name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        hostLabel = new BuddyLabel(page);
        hostLabel->setObjectName(QStringLiteral("hostLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, hostLabel);

        hostLayout = new QHBoxLayout();
        hostLayout->setContentsMargins(0, 0, 0, 0);
        hostLayout->setObjectName(QStringLiteral("hostLayout"));
        host = new LineEdit(page);
        host->setObjectName(QStringLiteral("host"));

        hostLayout->addWidget(host);

        port = new QSpinBox(page);
        port->setObjectName(QStringLiteral("port"));
        port->setMinimum(1);
        port->setMaximum(65535);
        port->setValue(6600);

        hostLayout->addWidget(port);


        formLayout->setLayout(1, QFormLayout::FieldRole, hostLayout);

        passwordLabel = new BuddyLabel(page);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, passwordLabel);

        password = new LineEdit(page);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, password);

        dirLabel = new BuddyLabel(page);
        dirLabel->setObjectName(QStringLiteral("dirLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, dirLabel);

        dir = new PathRequester(page);
        dir->setObjectName(QStringLiteral("dir"));

        formLayout->setWidget(3, QFormLayout::FieldRole, dir);

        streamUrlLabel = new BuddyLabel(page);
        streamUrlLabel->setObjectName(QStringLiteral("streamUrlLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, streamUrlLabel);

        streamUrl = new LineEdit(page);
        streamUrl->setObjectName(QStringLiteral("streamUrl"));

        formLayout->setWidget(4, QFormLayout::FieldRole, streamUrl);

        allowLocalStreamingLabel = new BuddyLabel(page);
        allowLocalStreamingLabel->setObjectName(QStringLiteral("allowLocalStreamingLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, allowLocalStreamingLabel);

        allowLocalStreaming = new QCheckBox(page);
        allowLocalStreaming->setObjectName(QStringLiteral("allowLocalStreaming"));

        formLayout->setWidget(5, QFormLayout::FieldRole, allowLocalStreaming);

        autoUpdateLabel = new BuddyLabel(page);
        autoUpdateLabel->setObjectName(QStringLiteral("autoUpdateLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, autoUpdateLabel);

        autoUpdate = new QCheckBox(page);
        autoUpdate->setObjectName(QStringLiteral("autoUpdate"));

        formLayout->setWidget(6, QFormLayout::FieldRole, autoUpdate);


        gridLayout->addLayout(formLayout, 0, 0, 1, 2);

        musicFolderNoteLabel = new NoteLabel(page);
        musicFolderNoteLabel->setObjectName(QStringLiteral("musicFolderNoteLabel"));

        gridLayout->addWidget(musicFolderNoteLabel, 2, 0, 1, 2);

        streamUrlNoteLabel = new NoteLabel(page);
        streamUrlNoteLabel->setObjectName(QStringLiteral("streamUrlNoteLabel"));

        gridLayout->addWidget(streamUrlNoteLabel, 3, 0, 1, 2);

        allowLocalStreamingNoteLabel = new NoteLabel(page);
        allowLocalStreamingNoteLabel->setObjectName(QStringLiteral("allowLocalStreamingNoteLabel"));

        gridLayout->addWidget(allowLocalStreamingNoteLabel, 4, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalSpacer_7 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_7, 1, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        dirLabel_2 = new BuddyLabel(page_2);
        dirLabel_2->setObjectName(QStringLiteral("dirLabel_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, dirLabel_2);

        basicDir = new PathRequester(page_2);
        basicDir->setObjectName(QStringLiteral("basicDir"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, basicDir);


        gridLayout_3->addLayout(formLayout_2, 0, 0, 1, 4);

        basicMusicFolderNoteLabel = new NoteLabel(page_2);
        basicMusicFolderNoteLabel->setObjectName(QStringLiteral("basicMusicFolderNoteLabel"));

        gridLayout_3->addWidget(basicMusicFolderNoteLabel, 1, 0, 1, 4);

        expandingSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(expandingSpacer, 2, 2, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 4);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(name);
        hostLabel->setBuddy(host);
        passwordLabel->setBuddy(password);
        dirLabel->setBuddy(dir);
        streamUrlLabel->setBuddy(streamUrl);
        allowLocalStreamingLabel->setBuddy(allowLocalStreaming);
        autoUpdateLabel->setBuddy(autoUpdate);
        dirLabel_2->setBuddy(dir);
#endif // QT_NO_SHORTCUT

        retranslateUi(ServerSettings);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ServerSettings);
    } // setupUi

    void retranslateUi(QWidget *ServerSettings)
    {
        label->setText(QApplication::translate("ServerSettings", "Collection:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ServerSettings", "Name:", Q_NULLPTR));
        hostLabel->setText(QApplication::translate("ServerSettings", "Host:", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("ServerSettings", "Password:", Q_NULLPTR));
        dirLabel->setText(QApplication::translate("ServerSettings", "Music folder:", Q_NULLPTR));
        streamUrlLabel->setText(QApplication::translate("ServerSettings", "HTTP stream URL:", Q_NULLPTR));
        allowLocalStreamingLabel->setText(QApplication::translate("ServerSettings", "Local file playback:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        allowLocalStreaming->setToolTip(QApplication::translate("ServerSettings", "Use a simple in-built HTTP server to allow MPD to playback files dropped onto the playqueue.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        allowLocalStreaming->setText(QApplication::translate("ServerSettings", "Via in-built HTTP server", Q_NULLPTR));
        autoUpdateLabel->setText(QApplication::translate("ServerSettings", "Auto update:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        autoUpdate->setToolTip(QApplication::translate("ServerSettings", "<p>Select this option if your MPD server detects modifications (e.g. newly added files) automatically. If so there is no need for Cantata to send update commands for certain actions.</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        autoUpdate->setText(QApplication::translate("ServerSettings", "Server detects changes automatically", Q_NULLPTR));
        musicFolderNoteLabel->setText(QApplication::translate("ServerSettings", "The 'Music folder' setting is used to lookup cover-art. It may be set to a HTTP URL if your MPD is on another machine, and covers are accessible via HTTP. If it is not set to a HTTP URL, and you also have write permissions to this folder (and it's sub-folders), then Cantata will save any downloaded covers into the respective album folder.", Q_NULLPTR));
        streamUrlNoteLabel->setText(QApplication::translate("ServerSettings", "'HTTP Stream URL' is only of use if you have MPD configured to output to a HTTP stream, and you wish Cantata to be able to play that stream.", Q_NULLPTR));
        allowLocalStreamingNoteLabel->setText(QApplication::translate("ServerSettings", "MPD usually only plays songs from within your collection. Newer MPD's (from v0.19 onwards) can also playback other files if you are connected to a local MPD server (e.g. address is '127.0.0.1' or 'localhost') For this to work, the MPD server needs read-access to wherever the files are located. If you are using an older MPD, a non-local MPD, or your local files are not accessible to other users, then you may elect to use the simple HTTP server that is supplied with Cantata. This server will only allow access to files in the playqueue, and only whilst Cantata is running.", Q_NULLPTR));
        dirLabel_2->setText(QApplication::translate("ServerSettings", "Music folder:", Q_NULLPTR));
        basicMusicFolderNoteLabel->setText(QApplication::translate("ServerSettings", "If you change the 'Music folder' setting, then you will need to manually update the music database. This can be performed by pressing the 'Refresh Database' button in the 'Artists' or 'Albums' views.", Q_NULLPTR));
        Q_UNUSED(ServerSettings);
    } // retranslateUi

};

namespace Ui {
    class ServerSettings: public Ui_ServerSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERSETTINGS_H

/********************************************************************************
** Form generated from reading UI file 'initialsettingswizard.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALSETTINGSWIZARD_H
#define UI_INITIALSETTINGSWIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizard>
#include "support/buddylabel.h"
#include "support/lineedit.h"
#include "support/pathrequester.h"
#include "widgets/notelabel.h"
#include "widgets/wizardpage.h"

QT_BEGIN_NAMESPACE

class Ui_InitialSettingsWizard
{
public:
    WizardPage *introPage;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *introStack;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_11;
    QLabel *label_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QRadioButton *advanced;
    BuddyLabel *label_10;
    QSpacerItem *verticalSpacer_10;
    QRadioButton *basic;
    BuddyLabel *label_9;
    NoteLabel *musicFolderNoteLabel_2;
    QSpacerItem *verticalSpacer_13;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_12;
    WizardPage *connectionPage;
    QVBoxLayout *verticalLayout_5;
    QStackedWidget *connectionStack;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_7;
    QFormLayout *formLayout;
    BuddyLabel *hostLabel;
    QHBoxLayout *hostLayout;
    LineEdit *host;
    QSpinBox *port;
    BuddyLabel *passwordLabel;
    LineEdit *password;
    BuddyLabel *dirLabel;
    PathRequester *dir;
    QLabel *statusLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *connectButton;
    NoteLabel *musicFolderNoteLabel;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_4;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_16;
    QLabel *label_12;
    QSpacerItem *verticalSpacer_18;
    BuddyLabel *dirLabel_2;
    PathRequester *basicDir;
    QLabel *statusLabel_2;
    QSpacerItem *verticalSpacer_14;
    WizardPage *coversPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6f;
    QSpacerItem *verticalSpacer_9f;
    QLabel *label_5f;
    QSpacerItem *verticalSpacer_7x;
    QCheckBox *fetchCovers;
    QCheckBox *storeCoversInMpdDir;
    NoteLabel *coverNote;
    QSpacerItem *verticalSpacer_8f;
    WizardPage *finishedPage;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_6x;
    NoteLabel *albumArtistsNoteLabel;
    QSpacerItem *verticalSpacer_6y;
    QSpacerItem *verticalSpacer_8;

    void setupUi(QWizard *InitialSettingsWizard)
    {
        if (InitialSettingsWizard->objectName().isEmpty())
            InitialSettingsWizard->setObjectName(QStringLiteral("InitialSettingsWizard"));
        InitialSettingsWizard->resize(668, 607);
        introPage = new WizardPage();
        introPage->setObjectName(QStringLiteral("introPage"));
        verticalLayout_4 = new QVBoxLayout(introPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        introStack = new QStackedWidget(introPage);
        introStack->setObjectName(QStringLiteral("introStack"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 319, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        introStack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_3->addWidget(label_7);

        verticalSpacer_11 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_11);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_8->setWordWrap(true);
        label_8->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_3->addWidget(label_8);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setTitle(QStringLiteral(""));
        groupBox->setFlat(true);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        advanced = new QRadioButton(groupBox);
        advanced->setObjectName(QStringLiteral("advanced"));

        gridLayout_2->addWidget(advanced, 0, 0, 1, 2);

        label_10 = new BuddyLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_10->setWordWrap(true);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 3);

        verticalSpacer_10 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_10, 2, 2, 1, 1);

        basic = new QRadioButton(groupBox);
        basic->setObjectName(QStringLiteral("basic"));

        gridLayout_2->addWidget(basic, 3, 0, 1, 2);

        label_9 = new BuddyLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_9->setWordWrap(true);

        gridLayout_2->addWidget(label_9, 4, 0, 1, 3);


        verticalLayout_3->addWidget(groupBox);

        musicFolderNoteLabel_2 = new NoteLabel(page_2);
        musicFolderNoteLabel_2->setObjectName(QStringLiteral("musicFolderNoteLabel_2"));

        verticalLayout_3->addWidget(musicFolderNoteLabel_2);

        verticalSpacer_13 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_13);

        label_11 = new QLabel(page_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_11->setWordWrap(true);
        label_11->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_3->addWidget(label_11);

        verticalSpacer_12 = new QSpacerItem(20, 39, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_12);

        introStack->addWidget(page_2);

        verticalLayout_4->addWidget(introStack);

        InitialSettingsWizard->addPage(introPage);
        connectionPage = new WizardPage();
        connectionPage->setObjectName(QStringLiteral("connectionPage"));
        verticalLayout_5 = new QVBoxLayout(connectionPage);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        connectionStack = new QStackedWidget(connectionPage);
        connectionStack->setObjectName(QStringLiteral("connectionStack"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_6 = new QVBoxLayout(page_3);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_6->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_3);

        label_4 = new QLabel(page_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4->setWordWrap(true);

        verticalLayout_6->addWidget(label_4);

        verticalSpacer_7 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_7);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        hostLabel = new BuddyLabel(page_3);
        hostLabel->setObjectName(QStringLiteral("hostLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, hostLabel);

        hostLayout = new QHBoxLayout();
        hostLayout->setContentsMargins(0, 0, 0, 0);
        hostLayout->setObjectName(QStringLiteral("hostLayout"));
        host = new LineEdit(page_3);
        host->setObjectName(QStringLiteral("host"));

        hostLayout->addWidget(host);

        port = new QSpinBox(page_3);
        port->setObjectName(QStringLiteral("port"));
        port->setMinimum(1);
        port->setMaximum(65535);
        port->setValue(6600);

        hostLayout->addWidget(port);


        formLayout->setLayout(0, QFormLayout::FieldRole, hostLayout);

        passwordLabel = new BuddyLabel(page_3);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        password = new LineEdit(page_3);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, password);

        dirLabel = new BuddyLabel(page_3);
        dirLabel->setObjectName(QStringLiteral("dirLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, dirLabel);

        dir = new PathRequester(page_3);
        dir->setObjectName(QStringLiteral("dir"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dir);


        verticalLayout_6->addLayout(formLayout);

        statusLabel = new QLabel(page_3);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        statusLabel->setFont(font1);
        statusLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_6->addWidget(statusLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        connectButton = new QPushButton(page_3);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout->addWidget(connectButton);


        verticalLayout_6->addLayout(horizontalLayout);

        musicFolderNoteLabel = new NoteLabel(page_3);
        musicFolderNoteLabel->setObjectName(QStringLiteral("musicFolderNoteLabel"));

        verticalLayout_6->addWidget(musicFolderNoteLabel);

        verticalSpacer_4 = new QSpacerItem(20, 158, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        connectionStack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_3 = new QGridLayout(page_4);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_13 = new QLabel(page_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font);

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        verticalSpacer_16 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_16, 1, 1, 1, 1);

        label_12 = new QLabel(page_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_12->setWordWrap(true);

        gridLayout_3->addWidget(label_12, 2, 0, 1, 2);

        verticalSpacer_18 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_18, 3, 1, 1, 1);

        dirLabel_2 = new BuddyLabel(page_4);
        dirLabel_2->setObjectName(QStringLiteral("dirLabel_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dirLabel_2->sizePolicy().hasHeightForWidth());
        dirLabel_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(dirLabel_2, 4, 0, 1, 1);

        basicDir = new PathRequester(page_4);
        basicDir->setObjectName(QStringLiteral("basicDir"));

        gridLayout_3->addWidget(basicDir, 4, 1, 1, 1);

        statusLabel_2 = new QLabel(page_4);
        statusLabel_2->setObjectName(QStringLiteral("statusLabel_2"));
        statusLabel_2->setFont(font1);

        gridLayout_3->addWidget(statusLabel_2, 5, 0, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 104, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_14, 6, 1, 1, 1);

        connectionStack->addWidget(page_4);

        verticalLayout_5->addWidget(connectionStack);

        InitialSettingsWizard->addPage(connectionPage);
        coversPage = new WizardPage();
        coversPage->setObjectName(QStringLiteral("coversPage"));
        verticalLayout_2 = new QVBoxLayout(coversPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6f = new QLabel(coversPage);
        label_6f->setObjectName(QStringLiteral("label_6f"));
        label_6f->setFont(font);

        verticalLayout_2->addWidget(label_6f);

        verticalSpacer_9f = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_9f);

        label_5f = new QLabel(coversPage);
        label_5f->setObjectName(QStringLiteral("label_5f"));
        label_5f->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5f->setWordWrap(true);
        label_5f->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_2->addWidget(label_5f);

        verticalSpacer_7x = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_7x);

        fetchCovers = new QCheckBox(coversPage);
        fetchCovers->setObjectName(QStringLiteral("fetchCovers"));

        verticalLayout_2->addWidget(fetchCovers);

        storeCoversInMpdDir = new QCheckBox(coversPage);
        storeCoversInMpdDir->setObjectName(QStringLiteral("storeCoversInMpdDir"));

        verticalLayout_2->addWidget(storeCoversInMpdDir);

        coverNote = new NoteLabel(coversPage);
        coverNote->setObjectName(QStringLiteral("coverNote"));

        verticalLayout_2->addWidget(coverNote);

        verticalSpacer_8f = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8f);

        InitialSettingsWizard->addPage(coversPage);
        finishedPage = new WizardPage();
        finishedPage->setObjectName(QStringLiteral("finishedPage"));
        gridLayout = new QGridLayout(finishedPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_6 = new QLabel(finishedPage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_9, 1, 1, 1, 1);

        label_5 = new QLabel(finishedPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_5->setWordWrap(true);
        label_5->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(label_5, 2, 0, 1, 2);

        verticalSpacer_6x = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_6x, 3, 1, 1, 1);

        albumArtistsNoteLabel = new NoteLabel(finishedPage);
        albumArtistsNoteLabel->setObjectName(QStringLiteral("albumArtistsNoteLabel"));

        gridLayout->addWidget(albumArtistsNoteLabel, 4, 0, 1, 2);

        verticalSpacer_6y = new QSpacerItem(20, 32, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_6y, 5, 1, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 6, 0, 1, 2);

        InitialSettingsWizard->addPage(finishedPage);
#ifndef QT_NO_SHORTCUT
        label_10->setBuddy(advanced);
        label_9->setBuddy(basic);
        hostLabel->setBuddy(host);
        passwordLabel->setBuddy(password);
        dirLabel->setBuddy(dir);
#endif // QT_NO_SHORTCUT

        retranslateUi(InitialSettingsWizard);

        introStack->setCurrentIndex(0);
        connectionStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InitialSettingsWizard);
    } // setupUi

    void retranslateUi(QWizard *InitialSettingsWizard)
    {
        InitialSettingsWizard->setWindowTitle(QApplication::translate("InitialSettingsWizard", "Cantata First Run", Q_NULLPTR));
        label->setText(QApplication::translate("InitialSettingsWizard", "Welcome to Cantata", Q_NULLPTR));
        label_2->setText(QApplication::translate("InitialSettingsWizard", "<p>Cantata is a feature-rich and user friendly client for Music Player Daemon (MPD). MPD is a flexible, powerful, server-side application for playing music.</p><p>For more information on MPD itself, please refer to the MPD website <a href=\"http://www.musicpd.org\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.musicpd.org</span></a></p><p>This 'wizard' will guide you through the basic settings required for Cantata to function correctly.</p>", Q_NULLPTR));
        label_7->setText(QApplication::translate("InitialSettingsWizard", "<p>Welcome to Cantata</p>", Q_NULLPTR));
        label_8->setText(QApplication::translate("InitialSettingsWizard", "<p>Cantata is a feature-rich and user friendly client for Music Player Daemon (MPD). MPD is a flexible, powerful, server-side application for playing music. MPD may be started either system-wide, or on a per-user basis.<br/><br/>Please select how you would like to have Cantata initially connect to (or startup) MPD:</p>", Q_NULLPTR));
        advanced->setText(QApplication::translate("InitialSettingsWizard", "Standard multi-user/server setup", Q_NULLPTR));
        label_10->setText(QApplication::translate("InitialSettingsWizard", "<i>Select this option if your music collection is shared between users, your MPD instance is running on another machine, you already have a personal MPD setup, or you wish to enable access from other clients (e.g. MPDroid). If you select this option then Cantata itself cannot control the starting and stopping of the MPD server. You will therefore need to ensure that MPD is already configured and running.</i>", Q_NULLPTR));
        basic->setText(QApplication::translate("InitialSettingsWizard", "Basic single user setup", Q_NULLPTR));
        label_9->setText(QApplication::translate("InitialSettingsWizard", "<i>Select this option if your music collection is not shared with others, and you wish Cantata to configure and control the MPD instance. This setup will be exclusive to Cantata, and will <b>not</b> be accessible to other MPD clients (e.g. MPDroid)</i>", Q_NULLPTR));
        musicFolderNoteLabel_2->setText(QApplication::translate("InitialSettingsWizard", "If you wish to have an advanced MPD setup (e.g. multiple audio outputs, full DSD support, etc) then you <b>must</b> choose 'Standard'", Q_NULLPTR));
        label_11->setText(QApplication::translate("InitialSettingsWizard", "For more information on MPD itself, please refer to the MPD website <a href=\"http://www.musicpd.org\"><span style=\" text-decoration: underline; color:#0000ff;\">http://www.musicpd.org</span></a><br/><br/>This 'wizard' will guide you through the basic settings required for Cantata to function correctly.", Q_NULLPTR));
        label_3->setText(QApplication::translate("InitialSettingsWizard", "Connection details", Q_NULLPTR));
        label_4->setText(QApplication::translate("InitialSettingsWizard", "The settings below are the basic settings required by Cantata. Please enter the relevant details, and use the 'Connect' button to test the connection.", Q_NULLPTR));
        hostLabel->setText(QApplication::translate("InitialSettingsWizard", "Host:", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("InitialSettingsWizard", "Password:", Q_NULLPTR));
        dirLabel->setText(QApplication::translate("InitialSettingsWizard", "Music folder:", Q_NULLPTR));
        statusLabel->setText(QString());
        connectButton->setText(QApplication::translate("InitialSettingsWizard", "Connect", Q_NULLPTR));
        musicFolderNoteLabel->setText(QApplication::translate("InitialSettingsWizard", "The 'Music folder' setting is used to lookup cover-art, lyrics, etc. If your MPD instance is on a remote host, you may set this to a HTTP URL.", Q_NULLPTR));
        label_13->setText(QApplication::translate("InitialSettingsWizard", "Music folder", Q_NULLPTR));
        label_12->setText(QApplication::translate("InitialSettingsWizard", "Please choose the folder containing your music collection.", Q_NULLPTR));
        dirLabel_2->setText(QApplication::translate("InitialSettingsWizard", "Music folder:", Q_NULLPTR));
        statusLabel_2->setText(QString());
        label_6f->setText(QApplication::translate("InitialSettingsWizard", "Album Covers", Q_NULLPTR));
        label_5f->setText(QApplication::translate("InitialSettingsWizard", "<p>Cantata can download missing covers, and store these either in the music folder or within your personal cache folder.</p>", Q_NULLPTR));
        fetchCovers->setText(QApplication::translate("InitialSettingsWizard", "Fetch missing covers", Q_NULLPTR));
        storeCoversInMpdDir->setText(QApplication::translate("InitialSettingsWizard", "Save downloaded covers into music folder", Q_NULLPTR));
        coverNote->setText(QApplication::translate("InitialSettingsWizard", "If you elect to have Cantata store covers within the music folder, and you do not have write access to this folder (or you have set this as a HTTP address), then Cantata will revert to saving the files in your personal cache folder.", Q_NULLPTR));
        label_6->setText(QApplication::translate("InitialSettingsWizard", "Finished!", Q_NULLPTR));
        label_5->setText(QApplication::translate("InitialSettingsWizard", "Cantata is now configured!<br/><br/>Cantata's configuration dialog maybe used to customise Cantata's appearance, as well as to add extra MPD hosts, etc.", Q_NULLPTR));
        albumArtistsNoteLabel->setText(QApplication::translate("InitialSettingsWizard", "Cantata will groups tracks into albums by using the 'AlbumArtist' tag if it is set, otherwise it will fallback to the 'Artist' tag. If you have albums with multiple artists, you <b>must</b> set the 'AlbumArtist' tag for the grouping to function correctly. It is suggested to use 'Various Artists' in this scenario.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InitialSettingsWizard: public Ui_InitialSettingsWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALSETTINGSWIZARD_H

/********************************************************************************
** Form generated from reading UI file 'interfacesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACESETTINGS_H
#define UI_INTERFACESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/lineedit.h"
#include "support/pathrequester.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_InterfaceSettings
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *sidebarTab;
    QVBoxLayout *sidebarLayout;
    QGroupBox *viewsGroup;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QListWidget *views;
    NoteLabel *sbPlayQueueLabel;
    QGroupBox *optionsGroup;
    QHBoxLayout *sbLayout;
    QFormLayout *styleLayout;
    BuddyLabel *sbStyleLabel;
    QComboBox *sbStyle;
    BuddyLabel *sbPositionLabel;
    QComboBox *sbPosition;
    QCheckBox *sbIconsOnly;
    QCheckBox *sbAutoHide;
    QCheckBox *responsiveSidebar;
    QWidget *tab_5;
    QFormLayout *formLayout_5;
    BuddyLabel *playQueueViewLabel;
    QComboBox *playQueueView;
    QCheckBox *playQueueStartClosed;
    QCheckBox *playQueueAutoExpand;
    QCheckBox *playQueueScroll;
    QCheckBox *playQueueConfirmClear;
    QCheckBox *playQueueSearch;
    QSpacerItem *macSpacerHack;
    QGroupBox *playQueueBackgroundOptions;
    QGridLayout *gridLayout;
    QRadioButton *playQueueBackground_none;
    QRadioButton *playQueueBackground_cover;
    QRadioButton *playQueueBackground_custom;
    PathRequester *playQueueBackgroundFile;
    QLabel *label_4b;
    QHBoxLayout *playQueueBackgroundBlurLayout;
    QSlider *playQueueBackgroundBlur;
    QLabel *playQueueBackgroundBlurLabel;
    QLabel *label_4;
    QHBoxLayout *playQueueBackgroundOpacityLayout;
    QSlider *playQueueBackgroundOpacity;
    QLabel *playQueueBackgroundOpacityLabel;
    QWidget *toolbarTab;
    QFormLayout *toolbarTabLayout;
    QCheckBox *showStopButton;
    QCheckBox *showCoverWidget;
    QCheckBox *showRatingWidget;
    QCheckBox *showTechnicalInfo;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *enableMpris;
    QCheckBox *systemTrayPopup;
    QCheckBox *systemTrayCheckBox;
    QCheckBox *minimiseOnClose;
    QGroupBox *startupState;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *startupStateShow;
    QRadioButton *startupStateHide;
    QRadioButton *startupStateRestore;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_4z;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2p;
    QVBoxLayout *verticalLayout_2p;
    QLabel *ignorePrefixesLabel;
    LineEdit *ignorePrefixes;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *composerGenresLabel;
    LineEdit *composerGenres;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *singleTracksFoldersLabel;
    LineEdit *singleTracksFolders;
    QGroupBox *groupBox_3xx;
    QFormLayout *miscLayout;
    QLabel *cueSupportLabel;
    QComboBox *cueSupport;
    QLabel *yearTagLabel;
    QComboBox *yearTag;
    NoteLabel *tweaksLabel;
    QSpacerItem *verticalSpacer_2f;
    QWidget *tab_4cvr;
    QVBoxLayout *verticalLayout_7cvr;
    QFormLayout *formLayout_4cvr;
    QCheckBox *fetchCovers;
    QCheckBox *storeCoversInMpdDir;
    BuddyLabel *coverFilenameLabel;
    LineEdit *coverFilename;
    NoteLabel *storeCoversInMpdDirLabel;
    NoteLabel *coverNameNoteLabel;
    QSpacerItem *verticalSpacer_2cvr;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_4;
    QCheckBox *showDeleteAction;
    QCheckBox *forceSingleClick;
    QCheckBox *infoTooltips;
    BuddyLabel *langLabel;
    QComboBox *lang;
    BuddyLabel *styleLabel;
    QComboBox *styleOption;
    NoteLabel *singleClickLabel;
    NoteLabel *langNoteLabel;
    NoteLabel *styleNoteLabel;
    QSpacerItem *verticalSpacer_2c;

    void setupUi(QWidget *InterfaceSettings)
    {
        if (InterfaceSettings->objectName().isEmpty())
            InterfaceSettings->setObjectName(QStringLiteral("InterfaceSettings"));
        InterfaceSettings->resize(200, 500);
        verticalLayout = new QVBoxLayout(InterfaceSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 770, 0);
        tabWidget = new QTabWidget(InterfaceSettings);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMovable(false);
        sidebarTab = new QWidget();
        sidebarTab->setObjectName(QStringLiteral("sidebarTab"));
        sidebarLayout = new QVBoxLayout(sidebarTab);
        sidebarLayout->setObjectName(QStringLiteral("sidebarLayout"));
        viewsGroup = new QGroupBox(sidebarTab);
        viewsGroup->setObjectName(QStringLiteral("viewsGroup"));
        verticalLayout_6 = new QVBoxLayout(viewsGroup);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_2 = new QLabel(viewsGroup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_6->addWidget(label_2);

        views = new QListWidget(viewsGroup);
        views->setObjectName(QStringLiteral("views"));

        verticalLayout_6->addWidget(views);

        sbPlayQueueLabel = new NoteLabel(viewsGroup);
        sbPlayQueueLabel->setObjectName(QStringLiteral("sbPlayQueueLabel"));

        verticalLayout_6->addWidget(sbPlayQueueLabel);


        sidebarLayout->addWidget(viewsGroup);

        optionsGroup = new QGroupBox(sidebarTab);
        optionsGroup->setObjectName(QStringLiteral("optionsGroup"));
        sbLayout = new QHBoxLayout(optionsGroup);
        sbLayout->setObjectName(QStringLiteral("sbLayout"));
        styleLayout = new QFormLayout();
        styleLayout->setObjectName(QStringLiteral("styleLayout"));
        styleLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        sbStyleLabel = new BuddyLabel(optionsGroup);
        sbStyleLabel->setObjectName(QStringLiteral("sbStyleLabel"));

        styleLayout->setWidget(0, QFormLayout::LabelRole, sbStyleLabel);

        sbStyle = new QComboBox(optionsGroup);
        sbStyle->setObjectName(QStringLiteral("sbStyle"));

        styleLayout->setWidget(0, QFormLayout::FieldRole, sbStyle);

        sbPositionLabel = new BuddyLabel(optionsGroup);
        sbPositionLabel->setObjectName(QStringLiteral("sbPositionLabel"));

        styleLayout->setWidget(1, QFormLayout::LabelRole, sbPositionLabel);

        sbPosition = new QComboBox(optionsGroup);
        sbPosition->setObjectName(QStringLiteral("sbPosition"));

        styleLayout->setWidget(1, QFormLayout::FieldRole, sbPosition);

        sbIconsOnly = new QCheckBox(optionsGroup);
        sbIconsOnly->setObjectName(QStringLiteral("sbIconsOnly"));

        styleLayout->setWidget(2, QFormLayout::SpanningRole, sbIconsOnly);

        sbAutoHide = new QCheckBox(optionsGroup);
        sbAutoHide->setObjectName(QStringLiteral("sbAutoHide"));

        styleLayout->setWidget(3, QFormLayout::SpanningRole, sbAutoHide);

        responsiveSidebar = new QCheckBox(optionsGroup);
        responsiveSidebar->setObjectName(QStringLiteral("responsiveSidebar"));

        styleLayout->setWidget(4, QFormLayout::SpanningRole, responsiveSidebar);


        sbLayout->addLayout(styleLayout);


        sidebarLayout->addWidget(optionsGroup);

        tabWidget->addTab(sidebarTab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        formLayout_5 = new QFormLayout(tab_5);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        playQueueViewLabel = new BuddyLabel(tab_5);
        playQueueViewLabel->setObjectName(QStringLiteral("playQueueViewLabel"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, playQueueViewLabel);

        playQueueView = new QComboBox(tab_5);
        playQueueView->setObjectName(QStringLiteral("playQueueView"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, playQueueView);

        playQueueStartClosed = new QCheckBox(tab_5);
        playQueueStartClosed->setObjectName(QStringLiteral("playQueueStartClosed"));

        formLayout_5->setWidget(1, QFormLayout::SpanningRole, playQueueStartClosed);

        playQueueAutoExpand = new QCheckBox(tab_5);
        playQueueAutoExpand->setObjectName(QStringLiteral("playQueueAutoExpand"));

        formLayout_5->setWidget(2, QFormLayout::SpanningRole, playQueueAutoExpand);

        playQueueScroll = new QCheckBox(tab_5);
        playQueueScroll->setObjectName(QStringLiteral("playQueueScroll"));

        formLayout_5->setWidget(3, QFormLayout::SpanningRole, playQueueScroll);

        playQueueConfirmClear = new QCheckBox(tab_5);
        playQueueConfirmClear->setObjectName(QStringLiteral("playQueueConfirmClear"));

        formLayout_5->setWidget(4, QFormLayout::SpanningRole, playQueueConfirmClear);

        playQueueSearch = new QCheckBox(tab_5);
        playQueueSearch->setObjectName(QStringLiteral("playQueueSearch"));

        formLayout_5->setWidget(5, QFormLayout::SpanningRole, playQueueSearch);

        macSpacerHack = new QSpacerItem(2, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout_5->setItem(6, QFormLayout::LabelRole, macSpacerHack);

        playQueueBackgroundOptions = new QGroupBox(tab_5);
        playQueueBackgroundOptions->setObjectName(QStringLiteral("playQueueBackgroundOptions"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playQueueBackgroundOptions->sizePolicy().hasHeightForWidth());
        playQueueBackgroundOptions->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(playQueueBackgroundOptions);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        playQueueBackground_none = new QRadioButton(playQueueBackgroundOptions);
        playQueueBackground_none->setObjectName(QStringLiteral("playQueueBackground_none"));

        gridLayout->addWidget(playQueueBackground_none, 0, 0, 1, 3);

        playQueueBackground_cover = new QRadioButton(playQueueBackgroundOptions);
        playQueueBackground_cover->setObjectName(QStringLiteral("playQueueBackground_cover"));

        gridLayout->addWidget(playQueueBackground_cover, 1, 0, 1, 3);

        playQueueBackground_custom = new QRadioButton(playQueueBackgroundOptions);
        playQueueBackground_custom->setObjectName(QStringLiteral("playQueueBackground_custom"));

        gridLayout->addWidget(playQueueBackground_custom, 2, 0, 1, 2);

        playQueueBackgroundFile = new PathRequester(playQueueBackgroundOptions);
        playQueueBackgroundFile->setObjectName(QStringLiteral("playQueueBackgroundFile"));
        playQueueBackgroundFile->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(playQueueBackgroundFile->sizePolicy().hasHeightForWidth());
        playQueueBackgroundFile->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(playQueueBackgroundFile, 2, 2, 1, 1);

        label_4b = new QLabel(playQueueBackgroundOptions);
        label_4b->setObjectName(QStringLiteral("label_4b"));

        gridLayout->addWidget(label_4b, 3, 0, 1, 1);

        playQueueBackgroundBlurLayout = new QHBoxLayout();
        playQueueBackgroundBlurLayout->setObjectName(QStringLiteral("playQueueBackgroundBlurLayout"));
        playQueueBackgroundBlurLayout->setContentsMargins(0, 0, 0, 0);
        playQueueBackgroundBlur = new QSlider(playQueueBackgroundOptions);
        playQueueBackgroundBlur->setObjectName(QStringLiteral("playQueueBackgroundBlur"));
        playQueueBackgroundBlur->setEnabled(false);
        playQueueBackgroundBlur->setMaximum(20);
        playQueueBackgroundBlur->setPageStep(1);
        playQueueBackgroundBlur->setOrientation(Qt::Horizontal);
        playQueueBackgroundBlur->setTickPosition(QSlider::TicksBelow);
        playQueueBackgroundBlur->setTickInterval(1);

        playQueueBackgroundBlurLayout->addWidget(playQueueBackgroundBlur);

        playQueueBackgroundBlurLabel = new QLabel(playQueueBackgroundOptions);
        playQueueBackgroundBlurLabel->setObjectName(QStringLiteral("playQueueBackgroundBlurLabel"));
        playQueueBackgroundBlurLabel->setEnabled(false);
        playQueueBackgroundBlurLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        playQueueBackgroundBlurLayout->addWidget(playQueueBackgroundBlurLabel);


        gridLayout->addLayout(playQueueBackgroundBlurLayout, 3, 1, 1, 2);

        label_4 = new QLabel(playQueueBackgroundOptions);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        playQueueBackgroundOpacityLayout = new QHBoxLayout();
        playQueueBackgroundOpacityLayout->setObjectName(QStringLiteral("playQueueBackgroundOpacityLayout"));
        playQueueBackgroundOpacityLayout->setContentsMargins(0, 0, 0, 0);
        playQueueBackgroundOpacity = new QSlider(playQueueBackgroundOptions);
        playQueueBackgroundOpacity->setObjectName(QStringLiteral("playQueueBackgroundOpacity"));
        playQueueBackgroundOpacity->setEnabled(false);
        playQueueBackgroundOpacity->setMaximum(100);
        playQueueBackgroundOpacity->setPageStep(10);
        playQueueBackgroundOpacity->setOrientation(Qt::Horizontal);
        playQueueBackgroundOpacity->setTickPosition(QSlider::TicksBelow);
        playQueueBackgroundOpacity->setTickInterval(10);

        playQueueBackgroundOpacityLayout->addWidget(playQueueBackgroundOpacity);

        playQueueBackgroundOpacityLabel = new QLabel(playQueueBackgroundOptions);
        playQueueBackgroundOpacityLabel->setObjectName(QStringLiteral("playQueueBackgroundOpacityLabel"));
        playQueueBackgroundOpacityLabel->setEnabled(false);
        playQueueBackgroundOpacityLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        playQueueBackgroundOpacityLayout->addWidget(playQueueBackgroundOpacityLabel);


        gridLayout->addLayout(playQueueBackgroundOpacityLayout, 4, 1, 1, 2);


        formLayout_5->setWidget(7, QFormLayout::SpanningRole, playQueueBackgroundOptions);

        tabWidget->addTab(tab_5, QString());
        toolbarTab = new QWidget();
        toolbarTab->setObjectName(QStringLiteral("toolbarTab"));
        toolbarTabLayout = new QFormLayout(toolbarTab);
        toolbarTabLayout->setObjectName(QStringLiteral("toolbarTabLayout"));
        toolbarTabLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        showStopButton = new QCheckBox(toolbarTab);
        showStopButton->setObjectName(QStringLiteral("showStopButton"));

        toolbarTabLayout->setWidget(0, QFormLayout::SpanningRole, showStopButton);

        showCoverWidget = new QCheckBox(toolbarTab);
        showCoverWidget->setObjectName(QStringLiteral("showCoverWidget"));

        toolbarTabLayout->setWidget(1, QFormLayout::SpanningRole, showCoverWidget);

        showRatingWidget = new QCheckBox(toolbarTab);
        showRatingWidget->setObjectName(QStringLiteral("showRatingWidget"));

        toolbarTabLayout->setWidget(3, QFormLayout::SpanningRole, showRatingWidget);

        showTechnicalInfo = new QCheckBox(toolbarTab);
        showTechnicalInfo->setObjectName(QStringLiteral("showTechnicalInfo"));

        toolbarTabLayout->setWidget(2, QFormLayout::LabelRole, showTechnicalInfo);

        tabWidget->addTab(toolbarTab, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        verticalLayout_5 = new QVBoxLayout(tab_7);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        enableMpris = new QCheckBox(tab_7);
        enableMpris->setObjectName(QStringLiteral("enableMpris"));

        verticalLayout_5->addWidget(enableMpris);

        systemTrayPopup = new QCheckBox(tab_7);
        systemTrayPopup->setObjectName(QStringLiteral("systemTrayPopup"));

        verticalLayout_5->addWidget(systemTrayPopup);

        systemTrayCheckBox = new QCheckBox(tab_7);
        systemTrayCheckBox->setObjectName(QStringLiteral("systemTrayCheckBox"));
        systemTrayCheckBox->setEnabled(true);

        verticalLayout_5->addWidget(systemTrayCheckBox);

        minimiseOnClose = new QCheckBox(tab_7);
        minimiseOnClose->setObjectName(QStringLiteral("minimiseOnClose"));
        minimiseOnClose->setEnabled(true);

        verticalLayout_5->addWidget(minimiseOnClose);

        startupState = new QGroupBox(tab_7);
        startupState->setObjectName(QStringLiteral("startupState"));
        verticalLayout_4 = new QVBoxLayout(startupState);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        startupStateShow = new QRadioButton(startupState);
        startupStateShow->setObjectName(QStringLiteral("startupStateShow"));

        verticalLayout_4->addWidget(startupStateShow);

        startupStateHide = new QRadioButton(startupState);
        startupStateHide->setObjectName(QStringLiteral("startupStateHide"));

        verticalLayout_4->addWidget(startupStateHide);

        startupStateRestore = new QRadioButton(startupState);
        startupStateRestore->setObjectName(QStringLiteral("startupStateRestore"));

        verticalLayout_4->addWidget(startupStateRestore);


        verticalLayout_5->addWidget(startupState);

        verticalSpacer_3 = new QSpacerItem(2, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_7, QString());
        tab_4z = new QWidget();
        tab_4z->setObjectName(QStringLiteral("tab_4z"));
        verticalLayout_7 = new QVBoxLayout(tab_4z);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_2p = new QGroupBox(tab_4z);
        groupBox_2p->setObjectName(QStringLiteral("groupBox_2p"));
        verticalLayout_2p = new QVBoxLayout(groupBox_2p);
        verticalLayout_2p->setObjectName(QStringLiteral("verticalLayout_2p"));
        ignorePrefixesLabel = new QLabel(groupBox_2p);
        ignorePrefixesLabel->setObjectName(QStringLiteral("ignorePrefixesLabel"));
        ignorePrefixesLabel->setWordWrap(true);

        verticalLayout_2p->addWidget(ignorePrefixesLabel);

        ignorePrefixes = new LineEdit(groupBox_2p);
        ignorePrefixes->setObjectName(QStringLiteral("ignorePrefixes"));

        verticalLayout_2p->addWidget(ignorePrefixes);


        verticalLayout_7->addWidget(groupBox_2p);

        groupBox_2 = new QGroupBox(tab_4z);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        composerGenresLabel = new QLabel(groupBox_2);
        composerGenresLabel->setObjectName(QStringLiteral("composerGenresLabel"));
        composerGenresLabel->setWordWrap(true);

        verticalLayout_2->addWidget(composerGenresLabel);

        composerGenres = new LineEdit(groupBox_2);
        composerGenres->setObjectName(QStringLiteral("composerGenres"));

        verticalLayout_2->addWidget(composerGenres);


        verticalLayout_7->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab_4z);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_8 = new QVBoxLayout(groupBox_3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        singleTracksFoldersLabel = new QLabel(groupBox_3);
        singleTracksFoldersLabel->setObjectName(QStringLiteral("singleTracksFoldersLabel"));
        singleTracksFoldersLabel->setWordWrap(true);

        verticalLayout_8->addWidget(singleTracksFoldersLabel);

        singleTracksFolders = new LineEdit(groupBox_3);
        singleTracksFolders->setObjectName(QStringLiteral("singleTracksFolders"));

        verticalLayout_8->addWidget(singleTracksFolders);


        verticalLayout_7->addWidget(groupBox_3);

        groupBox_3xx = new QGroupBox(tab_4z);
        groupBox_3xx->setObjectName(QStringLiteral("groupBox_3xx"));
        miscLayout = new QFormLayout(groupBox_3xx);
        miscLayout->setObjectName(QStringLiteral("miscLayout"));
        cueSupportLabel = new QLabel(groupBox_3xx);
        cueSupportLabel->setObjectName(QStringLiteral("cueSupportLabel"));

        miscLayout->setWidget(0, QFormLayout::LabelRole, cueSupportLabel);

        cueSupport = new QComboBox(groupBox_3xx);
        cueSupport->setObjectName(QStringLiteral("cueSupport"));

        miscLayout->setWidget(0, QFormLayout::FieldRole, cueSupport);

        yearTagLabel = new QLabel(groupBox_3xx);
        yearTagLabel->setObjectName(QStringLiteral("yearTagLabel"));

        miscLayout->setWidget(1, QFormLayout::LabelRole, yearTagLabel);

        yearTag = new QComboBox(groupBox_3xx);
        yearTag->setObjectName(QStringLiteral("yearTag"));

        miscLayout->setWidget(1, QFormLayout::FieldRole, yearTag);


        verticalLayout_7->addWidget(groupBox_3xx);

        tweaksLabel = new NoteLabel(tab_4z);
        tweaksLabel->setObjectName(QStringLiteral("tweaksLabel"));

        verticalLayout_7->addWidget(tweaksLabel);

        verticalSpacer_2f = new QSpacerItem(16, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2f);

        tabWidget->addTab(tab_4z, QString());
        tab_4cvr = new QWidget();
        tab_4cvr->setObjectName(QStringLiteral("tab_4cvr"));
        verticalLayout_7cvr = new QVBoxLayout(tab_4cvr);
        verticalLayout_7cvr->setObjectName(QStringLiteral("verticalLayout_7cvr"));
        formLayout_4cvr = new QFormLayout();
        formLayout_4cvr->setObjectName(QStringLiteral("formLayout_4cvr"));
        formLayout_4cvr->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        fetchCovers = new QCheckBox(tab_4cvr);
        fetchCovers->setObjectName(QStringLiteral("fetchCovers"));

        formLayout_4cvr->setWidget(0, QFormLayout::SpanningRole, fetchCovers);

        storeCoversInMpdDir = new QCheckBox(tab_4cvr);
        storeCoversInMpdDir->setObjectName(QStringLiteral("storeCoversInMpdDir"));

        formLayout_4cvr->setWidget(1, QFormLayout::SpanningRole, storeCoversInMpdDir);

        coverFilenameLabel = new BuddyLabel(tab_4cvr);
        coverFilenameLabel->setObjectName(QStringLiteral("coverFilenameLabel"));

        formLayout_4cvr->setWidget(2, QFormLayout::LabelRole, coverFilenameLabel);

        coverFilename = new LineEdit(tab_4cvr);
        coverFilename->setObjectName(QStringLiteral("coverFilename"));

        formLayout_4cvr->setWidget(2, QFormLayout::FieldRole, coverFilename);


        verticalLayout_7cvr->addLayout(formLayout_4cvr);

        storeCoversInMpdDirLabel = new NoteLabel(tab_4cvr);
        storeCoversInMpdDirLabel->setObjectName(QStringLiteral("storeCoversInMpdDirLabel"));

        verticalLayout_7cvr->addWidget(storeCoversInMpdDirLabel);

        coverNameNoteLabel = new NoteLabel(tab_4cvr);
        coverNameNoteLabel->setObjectName(QStringLiteral("coverNameNoteLabel"));

        verticalLayout_7cvr->addWidget(coverNameNoteLabel);

        verticalSpacer_2cvr = new QSpacerItem(16, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7cvr->addItem(verticalSpacer_2cvr);

        tabWidget->addTab(tab_4cvr, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_3 = new QVBoxLayout(tab_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        showDeleteAction = new QCheckBox(tab_4);
        showDeleteAction->setObjectName(QStringLiteral("showDeleteAction"));

        formLayout_4->setWidget(0, QFormLayout::SpanningRole, showDeleteAction);

        forceSingleClick = new QCheckBox(tab_4);
        forceSingleClick->setObjectName(QStringLiteral("forceSingleClick"));

        formLayout_4->setWidget(1, QFormLayout::SpanningRole, forceSingleClick);

        infoTooltips = new QCheckBox(tab_4);
        infoTooltips->setObjectName(QStringLiteral("infoTooltips"));

        formLayout_4->setWidget(2, QFormLayout::SpanningRole, infoTooltips);

        langLabel = new BuddyLabel(tab_4);
        langLabel->setObjectName(QStringLiteral("langLabel"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, langLabel);

        lang = new QComboBox(tab_4);
        lang->setObjectName(QStringLiteral("lang"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, lang);

        styleLabel = new BuddyLabel(tab_4);
        styleLabel->setObjectName(QStringLiteral("styleLabel"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, styleLabel);

        styleOption = new QComboBox(tab_4);
        styleOption->setObjectName(QStringLiteral("styleOption"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, styleOption);


        verticalLayout_3->addLayout(formLayout_4);

        singleClickLabel = new NoteLabel(tab_4);
        singleClickLabel->setObjectName(QStringLiteral("singleClickLabel"));

        verticalLayout_3->addWidget(singleClickLabel);

        langNoteLabel = new NoteLabel(tab_4);
        langNoteLabel->setObjectName(QStringLiteral("langNoteLabel"));

        verticalLayout_3->addWidget(langNoteLabel);

        styleNoteLabel = new NoteLabel(tab_4);
        styleNoteLabel->setObjectName(QStringLiteral("styleNoteLabel"));

        verticalLayout_3->addWidget(styleNoteLabel);

        verticalSpacer_2c = new QSpacerItem(16, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2c);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

#ifndef QT_NO_SHORTCUT
        sbStyleLabel->setBuddy(sbStyle);
        sbPositionLabel->setBuddy(sbPosition);
        playQueueViewLabel->setBuddy(playQueueView);
        coverFilenameLabel->setBuddy(coverFilename);
        langLabel->setBuddy(lang);
        styleLabel->setBuddy(styleOption);
#endif // QT_NO_SHORTCUT

        retranslateUi(InterfaceSettings);
        QObject::connect(playQueueBackground_custom, SIGNAL(toggled(bool)), playQueueBackgroundFile, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InterfaceSettings);
    } // setupUi

    void retranslateUi(QWidget *InterfaceSettings)
    {
        viewsGroup->setTitle(QApplication::translate("InterfaceSettings", "Views", Q_NULLPTR));
        label_2->setText(QApplication::translate("InterfaceSettings", "Use the checkboxes below to configure which views will appear in the sidebar.", Q_NULLPTR));
        sbPlayQueueLabel->setText(QApplication::translate("InterfaceSettings", "If 'Play Queue' is not checked above, then it will appear to the side of the other views. If 'Info' is not checked above, then a button will be added to the toolbar allowing you to access song information.", Q_NULLPTR));
        optionsGroup->setTitle(QApplication::translate("InterfaceSettings", "Options", Q_NULLPTR));
        sbStyleLabel->setText(QApplication::translate("InterfaceSettings", "Style:", Q_NULLPTR));
        sbPositionLabel->setText(QApplication::translate("InterfaceSettings", "Position:", Q_NULLPTR));
        sbIconsOnly->setText(QApplication::translate("InterfaceSettings", "Only show icons, no text", Q_NULLPTR));
        sbAutoHide->setText(QApplication::translate("InterfaceSettings", "Auto-hide", Q_NULLPTR));
        responsiveSidebar->setText(QApplication::translate("InterfaceSettings", "Automatically change style when insufficient space", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        responsiveSidebar->setToolTip(QApplication::translate("InterfaceSettings", "<p>Change to a small top bar (containing all views) when the window is narrow.</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(sidebarTab), QApplication::translate("InterfaceSettings", "Sidebar", Q_NULLPTR));
        playQueueViewLabel->setText(QApplication::translate("InterfaceSettings", "Style:", Q_NULLPTR));
        playQueueStartClosed->setText(QApplication::translate("InterfaceSettings", "Initially collapse albums", Q_NULLPTR));
        playQueueAutoExpand->setText(QApplication::translate("InterfaceSettings", "Automatically expand current album", Q_NULLPTR));
        playQueueScroll->setText(QApplication::translate("InterfaceSettings", "Scroll to current track", Q_NULLPTR));
        playQueueConfirmClear->setText(QApplication::translate("InterfaceSettings", "Prompt before clearing", Q_NULLPTR));
        playQueueSearch->setText(QApplication::translate("InterfaceSettings", "Separate action (and shortcut) for play queue search", Q_NULLPTR));
        playQueueBackgroundOptions->setTitle(QApplication::translate("InterfaceSettings", "Background Image", Q_NULLPTR));
        playQueueBackground_none->setText(QApplication::translate("InterfaceSettings", "None", Q_NULLPTR));
        playQueueBackground_cover->setText(QApplication::translate("InterfaceSettings", "Current album cover", Q_NULLPTR));
        playQueueBackground_custom->setText(QApplication::translate("InterfaceSettings", "Custom image:", Q_NULLPTR));
        label_4b->setText(QApplication::translate("InterfaceSettings", "Blur:", Q_NULLPTR));
        playQueueBackgroundBlurLabel->setText(QApplication::translate("InterfaceSettings", "10px", Q_NULLPTR));
        label_4->setText(QApplication::translate("InterfaceSettings", "Opacity:", Q_NULLPTR));
        playQueueBackgroundOpacityLabel->setText(QApplication::translate("InterfaceSettings", "40%", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("InterfaceSettings", "Play Queue", Q_NULLPTR));
        showStopButton->setText(QApplication::translate("InterfaceSettings", "Show stop button", Q_NULLPTR));
        showCoverWidget->setText(QApplication::translate("InterfaceSettings", "Show cover of current track", Q_NULLPTR));
        showRatingWidget->setText(QApplication::translate("InterfaceSettings", "Show track rating", Q_NULLPTR));
        showTechnicalInfo->setText(QApplication::translate("InterfaceSettings", "Show technical info", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(toolbarTab), QApplication::translate("InterfaceSettings", "Toolbar", Q_NULLPTR));
        enableMpris->setText(QApplication::translate("InterfaceSettings", "Enable MPRIS D-BUS interface", Q_NULLPTR));
        systemTrayPopup->setText(QApplication::translate("InterfaceSettings", "Show popup messages when changing tracks", Q_NULLPTR));
        systemTrayCheckBox->setText(QApplication::translate("InterfaceSettings", "Show icon in notification area", Q_NULLPTR));
        minimiseOnClose->setText(QApplication::translate("InterfaceSettings", "Minimize to notification area when closed", Q_NULLPTR));
        startupState->setTitle(QApplication::translate("InterfaceSettings", "On Start-up", Q_NULLPTR));
        startupStateShow->setText(QApplication::translate("InterfaceSettings", "Show main window", Q_NULLPTR));
        startupStateHide->setText(QApplication::translate("InterfaceSettings", "Hide main window", Q_NULLPTR));
        startupStateRestore->setText(QApplication::translate("InterfaceSettings", "Restore previous state", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("InterfaceSettings", "External", Q_NULLPTR));
        groupBox_2p->setTitle(QApplication::translate("InterfaceSettings", "Artist && Album Sorting", Q_NULLPTR));
        ignorePrefixesLabel->setText(QApplication::translate("InterfaceSettings", "Enter a (comma separated) list of prefixes to ignore when sorting artist and albums. e.g. if set to 'The' then 'The Beatles' would be sorted by 'Beatles'", Q_NULLPTR));
        ignorePrefixes->setPlaceholderText(QApplication::translate("InterfaceSettings", "Enter comma separated list of prefixes...", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("InterfaceSettings", "Composer Support", Q_NULLPTR));
        composerGenresLabel->setText(QApplication::translate("InterfaceSettings", "By default, Cantata uses the 'Album Artist' tag (or 'Artist' tag if a song has no 'Album Artist') to group songs and albums. For certain genres, e.g 'Classical', it may be preferable to use the 'Composer' tag (if set) to perform this grouping. Please enter a (comma separated) list of the genres with which you would like Cantata to use the 'Composer' tag.", Q_NULLPTR));
        composerGenres->setPlaceholderText(QApplication::translate("InterfaceSettings", "Enter comma separated list of genres...", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("InterfaceSettings", "Single Tracks", Q_NULLPTR));
        singleTracksFoldersLabel->setText(QApplication::translate("InterfaceSettings", "If you have a lot of artists in your collection that only contain a single track, then it can be cumbersome for each of these to have their own entry in the list of artists. As a work-around for this, if you place these tracks into a separate folder, and enter this folder name below, then Cantata will group these under an album named 'Single Tracks' with an album artist of 'Various Artists'. You may enter a comma separated list of folder names (without leading or trailing path separators) below.", Q_NULLPTR));
        singleTracksFolders->setPlaceholderText(QApplication::translate("InterfaceSettings", "Comma separated list of folders that contain single track files...", Q_NULLPTR));
        groupBox_3xx->setTitle(QApplication::translate("InterfaceSettings", "Miscellaneous", Q_NULLPTR));
        cueSupportLabel->setText(QApplication::translate("InterfaceSettings", "CUE files:", Q_NULLPTR));
        yearTagLabel->setText(QApplication::translate("InterfaceSettings", "Year tag:", Q_NULLPTR));
        tweaksLabel->setText(QApplication::translate("InterfaceSettings", "Changing 'Artist & Album Sorting', 'Single Tracks', or 'CUE files' will require a DB refresh in order to take effect. Changing 'Composer Support' or 'Year tag' will require restarting Cantata.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4z), QApplication::translate("InterfaceSettings", "Tweaks", Q_NULLPTR));
        fetchCovers->setText(QApplication::translate("InterfaceSettings", "Fetch missing covers", Q_NULLPTR));
        storeCoversInMpdDir->setText(QApplication::translate("InterfaceSettings", "Save downloaded covers into music folder", Q_NULLPTR));
        coverFilenameLabel->setText(QApplication::translate("InterfaceSettings", "Filename:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        coverFilename->setToolTip(QApplication::translate("InterfaceSettings", "<p>Filename (without extension) to save downloaded covers as.<br/>If left blank 'cover' will be used.<br/><br/><i>%artist% will be replaced with album artist of the current song, and %album% will be replaced with the album name.</i></p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        storeCoversInMpdDirLabel->setText(QApplication::translate("InterfaceSettings", "If you enable 'Save downloaded covers into music folder' you may need to clear the cache of any previous covers to force downloading of new covers. See 'Cache' settings page for further details.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4cvr), QApplication::translate("InterfaceSettings", "Covers", Q_NULLPTR));
        showDeleteAction->setText(QApplication::translate("InterfaceSettings", "Show delete action in context menus", Q_NULLPTR));
        forceSingleClick->setText(QApplication::translate("InterfaceSettings", "Enforce single-click activation of items", Q_NULLPTR));
        infoTooltips->setText(QApplication::translate("InterfaceSettings", "Show song information tooltips", Q_NULLPTR));
        langLabel->setText(QApplication::translate("InterfaceSettings", "Language:", Q_NULLPTR));
        styleLabel->setText(QApplication::translate("InterfaceSettings", "Style:", Q_NULLPTR));
        singleClickLabel->setText(QApplication::translate("InterfaceSettings", "Changing the 'Enforce single-click activation of items' setting will require a re-start of Cantata.", Q_NULLPTR));
        langNoteLabel->setText(QApplication::translate("InterfaceSettings", "Changing the language setting will require a re-start of Cantata.", Q_NULLPTR));
        styleNoteLabel->setText(QApplication::translate("InterfaceSettings", "Changing the style setting will require a re-start of Cantata.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("InterfaceSettings", "General", Q_NULLPTR));
        Q_UNUSED(InterfaceSettings);
    } // retranslateUi

};

namespace Ui {
    class InterfaceSettings: public Ui_InterfaceSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACESETTINGS_H

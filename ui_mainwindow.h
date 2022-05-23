/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "context/contextwidget.h"
#include "support/fancytabwidget.h"
#include "support/messagewidget.h"
#include "support/squeezedtextlabel.h"
#include "support/urllabel.h"
#include "widgets/autohidingsplitter.h"
#include "widgets/coverwidget.h"
#include "widgets/menubutton.h"
#include "widgets/nowplayingwidget.h"
#include "widgets/playqueuesearchwidget.h"
#include "widgets/playqueueview.h"
#include "widgets/sizegrip.h"
#include "widgets/spacerwidget.h"
#include "widgets/toolbutton.h"
#include "widgets/volumecontrol.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *toolbar;
    QHBoxLayout *toolbarLayout;
    ToolButton *prevTrackButton;
    ToolButton *playPauseTrackButton;
    ToolButton *stopTrackButton;
    ToolButton *nextTrackButton;
    CoverWidget *coverWidget;
    NowPlayingWidget *nowPlaying;
    QSpacerItem *volumeSliderSpacera;
    VolumeControl *volumeSlider;
    QSpacerItem *volumeSliderSpacer;
    ToolButton *songInfoButton;
    MenuButton *menuButton;
    MessageWidget *messageWidget;
    QStackedWidget *stack;
    AutohidingSplitter *splitter;
    QWidget *tabWidgetContainer;
    QVBoxLayout *vlayout;
    FancyTabWidget *tabWidget;
    QWidget *playQueueWidget;
    QVBoxLayout *playQueueLayout;
    PlayQueueSearchWidget *playQueueSearchWidget;
    PlayQueueView *playQueue;
    QHBoxLayout *playQueueBottomLayout;
    ToolButton *stopDynamicButton;
    QLabel *dynamicLabel;
    SqueezedTextLabel *playQueueStatsLabel;
    QSpacerItem *spacerItem;
    UrlLabel *fullScreenLabel;
    ToolButton *repeatButton;
    ToolButton *singleButton;
    ToolButton *randomButton;
    ToolButton *consumeButton;
    SpacerWidget *midSpacer;
    ToolButton *centerPlayQueueButton;
    ToolButton *savePlayQueueButton;
    ToolButton *clearPlayQueueButton;
    SizeGrip *sizeGrip;
    ContextWidget *context;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 347);
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        toolbar = new QWidget(MainWindow);
        toolbar->setObjectName(QStringLiteral("toolbar"));
        toolbarLayout = new QHBoxLayout(toolbar);
        toolbarLayout->setSpacing(0);
        toolbarLayout->setContentsMargins(0, 0, 0, 0);
        toolbarLayout->setObjectName(QStringLiteral("toolbarLayout"));
        prevTrackButton = new ToolButton(toolbar);
        prevTrackButton->setObjectName(QStringLiteral("prevTrackButton"));

        toolbarLayout->addWidget(prevTrackButton);

        playPauseTrackButton = new ToolButton(toolbar);
        playPauseTrackButton->setObjectName(QStringLiteral("playPauseTrackButton"));

        toolbarLayout->addWidget(playPauseTrackButton);

        stopTrackButton = new ToolButton(toolbar);
        stopTrackButton->setObjectName(QStringLiteral("stopTrackButton"));

        toolbarLayout->addWidget(stopTrackButton);

        nextTrackButton = new ToolButton(toolbar);
        nextTrackButton->setObjectName(QStringLiteral("nextTrackButton"));

        toolbarLayout->addWidget(nextTrackButton);

        coverWidget = new CoverWidget(toolbar);
        coverWidget->setObjectName(QStringLiteral("coverWidget"));

        toolbarLayout->addWidget(coverWidget);

        nowPlaying = new NowPlayingWidget(toolbar);
        nowPlaying->setObjectName(QStringLiteral("nowPlaying"));

        toolbarLayout->addWidget(nowPlaying);

        volumeSliderSpacera = new QSpacerItem(4, 4, QSizePolicy::Fixed, QSizePolicy::Minimum);

        toolbarLayout->addItem(volumeSliderSpacera);

        volumeSlider = new VolumeControl(toolbar);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));

        toolbarLayout->addWidget(volumeSlider);

        volumeSliderSpacer = new QSpacerItem(4, 4, QSizePolicy::Fixed, QSizePolicy::Minimum);

        toolbarLayout->addItem(volumeSliderSpacer);

        songInfoButton = new ToolButton(toolbar);
        songInfoButton->setObjectName(QStringLiteral("songInfoButton"));

        toolbarLayout->addWidget(songInfoButton);

        menuButton = new MenuButton(toolbar);
        menuButton->setObjectName(QStringLiteral("menuButton"));

        toolbarLayout->addWidget(menuButton);


        verticalLayout->addWidget(toolbar);

        messageWidget = new MessageWidget(MainWindow);
        messageWidget->setObjectName(QStringLiteral("messageWidget"));

        verticalLayout->addWidget(messageWidget);

        stack = new QStackedWidget(MainWindow);
        stack->setObjectName(QStringLiteral("stack"));
        splitter = new AutohidingSplitter();
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Vertical);
        tabWidgetContainer = new QWidget(splitter);
        tabWidgetContainer->setObjectName(QStringLiteral("tabWidgetContainer"));
        vlayout = new QVBoxLayout(tabWidgetContainer);
        vlayout->setSpacing(0);
        vlayout->setObjectName(QStringLiteral("vlayout"));
        vlayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new FancyTabWidget(tabWidgetContainer);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(32, 32));

        vlayout->addWidget(tabWidget);

        splitter->addWidget(tabWidgetContainer);
        playQueueWidget = new QWidget(splitter);
        playQueueWidget->setObjectName(QStringLiteral("playQueueWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(playQueueWidget->sizePolicy().hasHeightForWidth());
        playQueueWidget->setSizePolicy(sizePolicy1);
        playQueueLayout = new QVBoxLayout(playQueueWidget);
        playQueueLayout->setSpacing(0);
        playQueueLayout->setContentsMargins(0, 0, 0, 0);
        playQueueLayout->setObjectName(QStringLiteral("playQueueLayout"));
        playQueueSearchWidget = new PlayQueueSearchWidget(playQueueWidget);
        playQueueSearchWidget->setObjectName(QStringLiteral("playQueueSearchWidget"));

        playQueueLayout->addWidget(playQueueSearchWidget);

        playQueue = new PlayQueueView(playQueueWidget);
        playQueue->setObjectName(QStringLiteral("playQueue"));

        playQueueLayout->addWidget(playQueue);

        playQueueBottomLayout = new QHBoxLayout();
        playQueueBottomLayout->setSpacing(1);
        playQueueBottomLayout->setContentsMargins(0, 0, 0, 0);
        playQueueBottomLayout->setObjectName(QStringLiteral("playQueueBottomLayout"));
        stopDynamicButton = new ToolButton(playQueueWidget);
        stopDynamicButton->setObjectName(QStringLiteral("stopDynamicButton"));

        playQueueBottomLayout->addWidget(stopDynamicButton);

        dynamicLabel = new QLabel(playQueueWidget);
        dynamicLabel->setObjectName(QStringLiteral("dynamicLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        dynamicLabel->setFont(font);

        playQueueBottomLayout->addWidget(dynamicLabel);

        playQueueStatsLabel = new SqueezedTextLabel(playQueueWidget);
        playQueueStatsLabel->setObjectName(QStringLiteral("playQueueStatsLabel"));

        playQueueBottomLayout->addWidget(playQueueStatsLabel);

        spacerItem = new QSpacerItem(6, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        playQueueBottomLayout->addItem(spacerItem);

        fullScreenLabel = new UrlLabel(playQueueWidget);
        fullScreenLabel->setObjectName(QStringLiteral("fullScreenLabel"));

        playQueueBottomLayout->addWidget(fullScreenLabel);

        repeatButton = new ToolButton(playQueueWidget);
        repeatButton->setObjectName(QStringLiteral("repeatButton"));
        repeatButton->setCheckable(true);
        repeatButton->setChecked(false);

        playQueueBottomLayout->addWidget(repeatButton);

        singleButton = new ToolButton(playQueueWidget);
        singleButton->setObjectName(QStringLiteral("singleButton"));
        singleButton->setCheckable(true);
        singleButton->setChecked(false);

        playQueueBottomLayout->addWidget(singleButton);

        randomButton = new ToolButton(playQueueWidget);
        randomButton->setObjectName(QStringLiteral("randomButton"));
        randomButton->setCheckable(true);

        playQueueBottomLayout->addWidget(randomButton);

        consumeButton = new ToolButton(playQueueWidget);
        consumeButton->setObjectName(QStringLiteral("consumeButton"));
        consumeButton->setCheckable(true);

        playQueueBottomLayout->addWidget(consumeButton);

        midSpacer = new SpacerWidget(playQueueWidget);
        midSpacer->setObjectName(QStringLiteral("midSpacer"));

        playQueueBottomLayout->addWidget(midSpacer);

        centerPlayQueueButton = new ToolButton(playQueueWidget);
        centerPlayQueueButton->setObjectName(QStringLiteral("centerPlayQueueButton"));

        playQueueBottomLayout->addWidget(centerPlayQueueButton);

        savePlayQueueButton = new ToolButton(playQueueWidget);
        savePlayQueueButton->setObjectName(QStringLiteral("savePlayQueueButton"));

        playQueueBottomLayout->addWidget(savePlayQueueButton);

        clearPlayQueueButton = new ToolButton(playQueueWidget);
        clearPlayQueueButton->setObjectName(QStringLiteral("clearPlayQueueButton"));

        playQueueBottomLayout->addWidget(clearPlayQueueButton);

        sizeGrip = new SizeGrip(playQueueWidget);
        sizeGrip->setObjectName(QStringLiteral("sizeGrip"));

        playQueueBottomLayout->addWidget(sizeGrip);


        playQueueLayout->addLayout(playQueueBottomLayout);

        splitter->addWidget(playQueueWidget);
        stack->addWidget(splitter);
        context = new ContextWidget();
        context->setObjectName(QStringLiteral("context"));
        stack->addWidget(context);

        verticalLayout->addWidget(stack);


        retranslateUi(MainWindow);

        stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        dynamicLabel->setText(QApplication::translate("MainWindow", "[Dynamic]", Q_NULLPTR));
        fullScreenLabel->setText(QApplication::translate("MainWindow", "Exit Full Screen", Q_NULLPTR));
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

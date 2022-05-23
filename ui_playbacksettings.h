/********************************************************************************
** Form generated from reading UI file 'playbacksettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYBACKSETTINGS_H
#define UI_PLAYBACKSETTINGS_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/urllabel.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_PlaybackSettings
{
public:
    QVBoxLayout *mainLayout;
    QGroupBox *stopPlaybackBox;
    QFormLayout *formLayout;
    BuddyLabel *label_6b;
    QSpinBox *stopFadeDuration;
    QCheckBox *stopOnExit;
    QCheckBox *inhibitSuspend;
    NoteLabel *noteLabel;
    QGroupBox *outputBox;
    QGridLayout *gridLayout;
    QLabel *messageLabel;
    QFormLayout *formLayout_2a;
    BuddyLabel *crossfadingLabel;
    QSpinBox *crossfading;
    BuddyLabel *replayGainLabel;
    QHBoxLayout *replayGainayout;
    QComboBox *replayGain;
    QSpacerItem *replayGainSpacer;
    UrlLabel *aboutReplayGain;
    QCheckBox *applyReplayGain;
    BuddyLabel *volumeStepLabel;
    QSpinBox *volumeStep;
    QLabel *outputsViewLabel;
    QListWidget *outputsView;
    BuddyLabel *messageIcon;
    QSpacerItem *expandingSpacer;

    void setupUi(QWidget *PlaybackSettings)
    {
        if (PlaybackSettings->objectName().isEmpty())
            PlaybackSettings->setObjectName(QStringLiteral("PlaybackSettings"));
        PlaybackSettings->resize(1080, 2160);
        mainLayout = new QVBoxLayout(PlaybackSettings);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 535, 0);
        stopPlaybackBox = new QGroupBox(PlaybackSettings);
        stopPlaybackBox->setObjectName(QStringLiteral("stopPlaybackBox"));
        formLayout = new QFormLayout(stopPlaybackBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_6b = new BuddyLabel(stopPlaybackBox);
        label_6b->setObjectName(QStringLiteral("label_6b"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6b);

        stopFadeDuration = new QSpinBox(stopPlaybackBox);
        stopFadeDuration->setObjectName(QStringLiteral("stopFadeDuration"));

        formLayout->setWidget(0, QFormLayout::FieldRole, stopFadeDuration);

        stopOnExit = new QCheckBox(stopPlaybackBox);
        stopOnExit->setObjectName(QStringLiteral("stopOnExit"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, stopOnExit);

        inhibitSuspend = new QCheckBox(stopPlaybackBox);
        inhibitSuspend->setObjectName(QStringLiteral("inhibitSuspend"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, inhibitSuspend);

        noteLabel = new NoteLabel(stopPlaybackBox);
        noteLabel->setObjectName(QStringLiteral("noteLabel"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, noteLabel);


        mainLayout->addWidget(stopPlaybackBox);

        outputBox = new QGroupBox(PlaybackSettings);
        outputBox->setObjectName(QStringLiteral("outputBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(outputBox->sizePolicy().hasHeightForWidth());
        outputBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(outputBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        messageLabel = new QLabel(outputBox);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));
        messageLabel->setWordWrap(true);
        messageLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(messageLabel, 0, 1, 1, 1);

        formLayout_2a = new QFormLayout();
        formLayout_2a->setObjectName(QStringLiteral("formLayout_2a"));
        formLayout_2a->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        crossfadingLabel = new BuddyLabel(outputBox);
        crossfadingLabel->setObjectName(QStringLiteral("crossfadingLabel"));

        formLayout_2a->setWidget(0, QFormLayout::LabelRole, crossfadingLabel);

        crossfading = new QSpinBox(outputBox);
        crossfading->setObjectName(QStringLiteral("crossfading"));
        crossfading->setMaximum(20);

        formLayout_2a->setWidget(0, QFormLayout::FieldRole, crossfading);

        replayGainLabel = new BuddyLabel(outputBox);
        replayGainLabel->setObjectName(QStringLiteral("replayGainLabel"));

        formLayout_2a->setWidget(1, QFormLayout::LabelRole, replayGainLabel);

        replayGainayout = new QHBoxLayout();
        replayGainayout->setObjectName(QStringLiteral("replayGainayout"));
        replayGainayout->setContentsMargins(0, 0, 0, 0);
        replayGain = new QComboBox(outputBox);
        replayGain->setObjectName(QStringLiteral("replayGain"));

        replayGainayout->addWidget(replayGain);

        replayGainSpacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        replayGainayout->addItem(replayGainSpacer);

        aboutReplayGain = new UrlLabel(outputBox);
        aboutReplayGain->setObjectName(QStringLiteral("aboutReplayGain"));

        replayGainayout->addWidget(aboutReplayGain);


        formLayout_2a->setLayout(1, QFormLayout::FieldRole, replayGainayout);

        applyReplayGain = new QCheckBox(outputBox);
        applyReplayGain->setObjectName(QStringLiteral("applyReplayGain"));

        formLayout_2a->setWidget(2, QFormLayout::FieldRole, applyReplayGain);

        volumeStepLabel = new BuddyLabel(outputBox);
        volumeStepLabel->setObjectName(QStringLiteral("volumeStepLabel"));

        formLayout_2a->setWidget(3, QFormLayout::LabelRole, volumeStepLabel);

        volumeStep = new QSpinBox(outputBox);
        volumeStep->setObjectName(QStringLiteral("volumeStep"));
        volumeStep->setMinimum(1);
        volumeStep->setMaximum(20);

        formLayout_2a->setWidget(3, QFormLayout::FieldRole, volumeStep);

        outputsViewLabel = new QLabel(outputBox);
        outputsViewLabel->setObjectName(QStringLiteral("outputsViewLabel"));
        outputsViewLabel->setWordWrap(true);

        formLayout_2a->setWidget(4, QFormLayout::SpanningRole, outputsViewLabel);

        outputsView = new QListWidget(outputBox);
        outputsView->setObjectName(QStringLiteral("outputsView"));

        formLayout_2a->setWidget(5, QFormLayout::SpanningRole, outputsView);


        gridLayout->addLayout(formLayout_2a, 1, 0, 1, 2);

        messageIcon = new BuddyLabel(outputBox);
        messageIcon->setObjectName(QStringLiteral("messageIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(messageIcon->sizePolicy().hasHeightForWidth());
        messageIcon->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(messageIcon, 0, 0, 1, 1);


        mainLayout->addWidget(outputBox);

        expandingSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        mainLayout->addItem(expandingSpacer);

#ifndef QT_NO_SHORTCUT
        label_6b->setBuddy(stopFadeDuration);
        crossfadingLabel->setBuddy(crossfading);
        replayGainLabel->setBuddy(replayGain);
        volumeStepLabel->setBuddy(volumeStep);
#endif // QT_NO_SHORTCUT

        retranslateUi(PlaybackSettings);

        QMetaObject::connectSlotsByName(PlaybackSettings);
    } // setupUi

    void retranslateUi(QWidget *PlaybackSettings)
    {
        stopPlaybackBox->setTitle(QApplication::translate("PlaybackSettings", "Playback", Q_NULLPTR));
        label_6b->setText(QApplication::translate("PlaybackSettings", "Fadeout on stop:", Q_NULLPTR));
        stopFadeDuration->setSpecialValueText(QApplication::translate("PlaybackSettings", "None", Q_NULLPTR));
        stopFadeDuration->setSuffix(QApplication::translate("PlaybackSettings", " ms", Q_NULLPTR));
        stopOnExit->setText(QApplication::translate("PlaybackSettings", "Stop playback on exit", Q_NULLPTR));
        inhibitSuspend->setText(QApplication::translate("PlaybackSettings", "Inhibit suspend whilst playing", Q_NULLPTR));
        noteLabel->setText(QApplication::translate("PlaybackSettings", "If you press and hold the stop button, then a menu will be shown allowing you to choose whether to stop playback now, or after the current track. (The stop button can be enabled in the Interface/Toolbar section)", Q_NULLPTR));
        outputBox->setTitle(QApplication::translate("PlaybackSettings", "Output", Q_NULLPTR));
        messageLabel->setText(QApplication::translate("PlaybackSettings", "<i>Not Connected!<br/>The entries below cannot be modified, as Cantata is not connected to MPD.</i>", Q_NULLPTR));
        crossfadingLabel->setText(QApplication::translate("PlaybackSettings", "Crossfade between tracks:", Q_NULLPTR));
        crossfading->setSpecialValueText(QApplication::translate("PlaybackSettings", "None", Q_NULLPTR));
        crossfading->setSuffix(QApplication::translate("PlaybackSettings", " s", Q_NULLPTR));
        replayGainLabel->setText(QApplication::translate("PlaybackSettings", "Replay gain:", Q_NULLPTR));
        aboutReplayGain->setProperty("text", QVariant(QApplication::translate("PlaybackSettings", "About replay gain", Q_NULLPTR)));
        applyReplayGain->setText(QApplication::translate("PlaybackSettings", "Apply setting on connect", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        applyReplayGain->setToolTip(QApplication::translate("PlaybackSettings", "<p>MPD resets (to the value in its config file) the replaygain mode setting each time it is restarted. Cantata can work-around this by setting MPD to use the value defined here each time Cantata connects to MPD.</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        volumeStepLabel->setText(QApplication::translate("PlaybackSettings", "Volume step:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        volumeStepLabel->setToolTip(QApplication::translate("PlaybackSettings", "<p>Amount to change volume by when using either the volume control keyboard shortcuts, or the mouse wheel over the toolbar volume control.</p>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        volumeStep->setSuffix(QApplication::translate("PlaybackSettings", " %", Q_NULLPTR));
        outputsViewLabel->setText(QApplication::translate("PlaybackSettings", "Use the checkboxes below to control the active outputs.", Q_NULLPTR));
        messageIcon->setText(QString());
        Q_UNUSED(PlaybackSettings);
    } // retranslateUi

};

namespace Ui {
    class PlaybackSettings: public Ui_PlaybackSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYBACKSETTINGS_H

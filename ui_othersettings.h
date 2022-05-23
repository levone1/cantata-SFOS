/********************************************************************************
** Form generated from reading UI file 'othersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERSETTINGS_H
#define UI_OTHERSETTINGS_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/pathrequester.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_OtherSettings
{
public:
    QFormLayout *formLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *contextBackdrop_none;
    QRadioButton *contextBackdrop_artist;
    QRadioButton *contextBackdrop_custom;
    PathRequester *contextBackdropFile;
    QLabel *label_4b;
    QHBoxLayout *contextBackdropBlurLayout;
    QSlider *contextBackdropBlur;
    QLabel *contextBackdropBlurLabel;
    QLabel *label_4;
    QHBoxLayout *contextBackdropOpacityLayout;
    QSlider *contextBackdropOpacity;
    QLabel *contextBackdropOpacityLabel;
    BuddyLabel *contextSwitchTimeLabel;
    QSpinBox *contextSwitchTime;
    QCheckBox *contextDarkBackground;
    QCheckBox *storeCoversInMpdDir;
    QCheckBox *contextAlwaysCollapsed;
    QCheckBox *wikipediaIntroOnly;
    NoteLabel *wikipediaIntroOnlyNote;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *OtherSettings)
    {
        if (OtherSettings->objectName().isEmpty())
            OtherSettings->setObjectName(QStringLiteral("OtherSettings"));
        OtherSettings->resize(658, 450);
        formLayout = new QFormLayout(OtherSettings);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        groupBox = new QGroupBox(OtherSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        contextBackdrop_none = new QRadioButton(groupBox);
        contextBackdrop_none->setObjectName(QStringLiteral("contextBackdrop_none"));

        gridLayout->addWidget(contextBackdrop_none, 0, 0, 1, 3);

        contextBackdrop_artist = new QRadioButton(groupBox);
        contextBackdrop_artist->setObjectName(QStringLiteral("contextBackdrop_artist"));

        gridLayout->addWidget(contextBackdrop_artist, 1, 0, 1, 3);

        contextBackdrop_custom = new QRadioButton(groupBox);
        contextBackdrop_custom->setObjectName(QStringLiteral("contextBackdrop_custom"));

        gridLayout->addWidget(contextBackdrop_custom, 2, 0, 1, 2);

        contextBackdropFile = new PathRequester(groupBox);
        contextBackdropFile->setObjectName(QStringLiteral("contextBackdropFile"));
        contextBackdropFile->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(contextBackdropFile->sizePolicy().hasHeightForWidth());
        contextBackdropFile->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(contextBackdropFile, 2, 2, 1, 1);

        label_4b = new QLabel(groupBox);
        label_4b->setObjectName(QStringLiteral("label_4b"));

        gridLayout->addWidget(label_4b, 3, 0, 1, 1);

        contextBackdropBlurLayout = new QHBoxLayout();
        contextBackdropBlurLayout->setContentsMargins(0, 0, 0, 0);
        contextBackdropBlurLayout->setObjectName(QStringLiteral("contextBackdropBlurLayout"));
        contextBackdropBlur = new QSlider(groupBox);
        contextBackdropBlur->setObjectName(QStringLiteral("contextBackdropBlur"));
        contextBackdropBlur->setEnabled(false);
        contextBackdropBlur->setMaximum(20);
        contextBackdropBlur->setPageStep(1);
        contextBackdropBlur->setOrientation(Qt::Horizontal);
        contextBackdropBlur->setTickPosition(QSlider::TicksBelow);
        contextBackdropBlur->setTickInterval(1);

        contextBackdropBlurLayout->addWidget(contextBackdropBlur);

        contextBackdropBlurLabel = new QLabel(groupBox);
        contextBackdropBlurLabel->setObjectName(QStringLiteral("contextBackdropBlurLabel"));
        contextBackdropBlurLabel->setEnabled(false);
        contextBackdropBlurLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contextBackdropBlurLayout->addWidget(contextBackdropBlurLabel);


        gridLayout->addLayout(contextBackdropBlurLayout, 3, 1, 1, 2);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        contextBackdropOpacityLayout = new QHBoxLayout();
        contextBackdropOpacityLayout->setContentsMargins(0, 0, 0, 0);
        contextBackdropOpacityLayout->setObjectName(QStringLiteral("contextBackdropOpacityLayout"));
        contextBackdropOpacity = new QSlider(groupBox);
        contextBackdropOpacity->setObjectName(QStringLiteral("contextBackdropOpacity"));
        contextBackdropOpacity->setEnabled(false);
        contextBackdropOpacity->setMaximum(100);
        contextBackdropOpacity->setPageStep(10);
        contextBackdropOpacity->setOrientation(Qt::Horizontal);
        contextBackdropOpacity->setTickPosition(QSlider::TicksBelow);
        contextBackdropOpacity->setTickInterval(10);

        contextBackdropOpacityLayout->addWidget(contextBackdropOpacity);

        contextBackdropOpacityLabel = new QLabel(groupBox);
        contextBackdropOpacityLabel->setObjectName(QStringLiteral("contextBackdropOpacityLabel"));
        contextBackdropOpacityLabel->setEnabled(false);
        contextBackdropOpacityLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        contextBackdropOpacityLayout->addWidget(contextBackdropOpacityLabel);


        gridLayout->addLayout(contextBackdropOpacityLayout, 4, 1, 1, 2);


        formLayout->setWidget(0, QFormLayout::SpanningRole, groupBox);

        contextSwitchTimeLabel = new BuddyLabel(OtherSettings);
        contextSwitchTimeLabel->setObjectName(QStringLiteral("contextSwitchTimeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, contextSwitchTimeLabel);

        contextSwitchTime = new QSpinBox(OtherSettings);
        contextSwitchTime->setObjectName(QStringLiteral("contextSwitchTime"));
        contextSwitchTime->setMaximum(5000);
        contextSwitchTime->setSingleStep(500);

        formLayout->setWidget(1, QFormLayout::FieldRole, contextSwitchTime);

        contextDarkBackground = new QCheckBox(OtherSettings);
        contextDarkBackground->setObjectName(QStringLiteral("contextDarkBackground"));

        formLayout->setWidget(2, QFormLayout::SpanningRole, contextDarkBackground);

        storeCoversInMpdDir = new QCheckBox(OtherSettings);
        storeCoversInMpdDir->setObjectName(QStringLiteral("storeCoversInMpdDir"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, storeCoversInMpdDir);

        contextAlwaysCollapsed = new QCheckBox(OtherSettings);
        contextAlwaysCollapsed->setObjectName(QStringLiteral("contextAlwaysCollapsed"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, contextAlwaysCollapsed);

        wikipediaIntroOnly = new QCheckBox(OtherSettings);
        wikipediaIntroOnly->setObjectName(QStringLiteral("wikipediaIntroOnly"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, wikipediaIntroOnly);

        wikipediaIntroOnlyNote = new NoteLabel(OtherSettings);
        wikipediaIntroOnlyNote->setObjectName(QStringLiteral("wikipediaIntroOnlyNote"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, wikipediaIntroOnlyNote);

        verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        formLayout->setItem(7, QFormLayout::FieldRole, verticalSpacer_2);

#ifndef QT_NO_SHORTCUT
        contextSwitchTimeLabel->setBuddy(contextSwitchTime);
#endif // QT_NO_SHORTCUT

        retranslateUi(OtherSettings);
        QObject::connect(contextBackdrop_custom, SIGNAL(toggled(bool)), contextBackdropFile, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OtherSettings);
    } // setupUi

    void retranslateUi(QWidget *OtherSettings)
    {
        groupBox->setTitle(QApplication::translate("OtherSettings", "Background Image", Q_NULLPTR));
        contextBackdrop_none->setText(QApplication::translate("OtherSettings", "None", Q_NULLPTR));
        contextBackdrop_artist->setText(QApplication::translate("OtherSettings", "Artist image", Q_NULLPTR));
        contextBackdrop_custom->setText(QApplication::translate("OtherSettings", "Custom image:", Q_NULLPTR));
        label_4b->setText(QApplication::translate("OtherSettings", "Blur:", Q_NULLPTR));
        contextBackdropBlurLabel->setText(QApplication::translate("OtherSettings", "10px", Q_NULLPTR));
        label_4->setText(QApplication::translate("OtherSettings", "Opacity:", Q_NULLPTR));
        contextBackdropOpacityLabel->setText(QApplication::translate("OtherSettings", "40%", Q_NULLPTR));
        contextSwitchTimeLabel->setText(QApplication::translate("OtherSettings", "Automatically switch to view after:", Q_NULLPTR));
        contextSwitchTime->setSpecialValueText(QApplication::translate("OtherSettings", "Do not auto-switch", Q_NULLPTR));
        contextSwitchTime->setSuffix(QApplication::translate("OtherSettings", " ms", Q_NULLPTR));
        contextDarkBackground->setText(QApplication::translate("OtherSettings", "Dark background", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        contextDarkBackground->setToolTip(QApplication::translate("OtherSettings", "Darken background, and use white text, regardless of current color palette.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        storeCoversInMpdDir->setText(QApplication::translate("OtherSettings", "Save downloaded lyrics into music folder", Q_NULLPTR));
        contextAlwaysCollapsed->setText(QApplication::translate("OtherSettings", "Always collapse into a single pane", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        contextAlwaysCollapsed->setToolTip(QApplication::translate("OtherSettings", "Only show 'Artist', 'Album', or 'Track' even if sufficient width to show all three.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        wikipediaIntroOnly->setText(QApplication::translate("OtherSettings", "Only show basic wikipedia text", Q_NULLPTR));
        wikipediaIntroOnlyNote->setText(QApplication::translate("OtherSettings", "Cantata only shows a trimmed down version of wikipedia pages (no images, links, etc). This trimming is not always 100% accurate, which is why Cantata defaults to only showing the introduction. If you elect to show the full article, then there may be parsing errors. You will also need to remove any currently cached articles (using the 'Cache' page).", Q_NULLPTR));
        Q_UNUSED(OtherSettings);
    } // retranslateUi

};

namespace Ui {
    class OtherSettings: public Ui_OtherSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERSETTINGS_H

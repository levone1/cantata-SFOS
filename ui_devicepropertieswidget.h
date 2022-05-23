/********************************************************************************
** Form generated from reading UI file 'devicepropertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEPROPERTIESWIDGET_H
#define UI_DEVICEPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "devices/valueslider.h"
#include "support/buddylabel.h"
#include "support/lineedit.h"
#include "support/pathrequester.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_DevicePropertiesWidget
{
public:
    QVBoxLayout *verticalLayout;
    PlainNoteLabel *remoteDeviceNote;
    QFormLayout *formLayout;
    BuddyLabel *nameLabel;
    LineEdit *name;
    BuddyLabel *musicFolderLabel;
    PathRequester *musicFolder;
    BuddyLabel *albumCoversLabel;
    QComboBox *albumCovers;
    BuddyLabel *coverMaxSizeLabel;
    QComboBox *coverMaxSize;
    QComboBox *defaultVolume;
    QLabel *defaultVolumeLabel;
    QCheckBox *fixVariousArtists;
    QCheckBox *autoScan;
    QCheckBox *useCache;
    QGroupBox *filenamesGroupBox;
    QFormLayout *formLayout_2;
    BuddyLabel *label_6;
    QHBoxLayout *horizontalLayout;
    LineEdit *filenameScheme;
    QToolButton *configFilename;
    QCheckBox *vfatSafe;
    QCheckBox *asciiOnly;
    QCheckBox *replaceSpaces;
    QCheckBox *ignoreThe;
    QGroupBox *transcoderFrame;
    QVBoxLayout *verticalLayout_2;
    QComboBox *transcoderName;
    QComboBox *transcoderWhen;
    ValueSlider *transcoderValue;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DevicePropertiesWidget)
    {
        if (DevicePropertiesWidget->objectName().isEmpty())
            DevicePropertiesWidget->setObjectName(QStringLiteral("DevicePropertiesWidget"));
        DevicePropertiesWidget->resize(549, 528);
        verticalLayout = new QVBoxLayout(DevicePropertiesWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        remoteDeviceNote = new PlainNoteLabel(DevicePropertiesWidget);
        remoteDeviceNote->setObjectName(QStringLiteral("remoteDeviceNote"));

        verticalLayout->addWidget(remoteDeviceNote);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        nameLabel = new BuddyLabel(DevicePropertiesWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        name = new LineEdit(DevicePropertiesWidget);
        name->setObjectName(QStringLiteral("name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name);

        musicFolderLabel = new BuddyLabel(DevicePropertiesWidget);
        musicFolderLabel->setObjectName(QStringLiteral("musicFolderLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, musicFolderLabel);

        musicFolder = new PathRequester(DevicePropertiesWidget);
        musicFolder->setObjectName(QStringLiteral("musicFolder"));

        formLayout->setWidget(1, QFormLayout::FieldRole, musicFolder);

        albumCoversLabel = new BuddyLabel(DevicePropertiesWidget);
        albumCoversLabel->setObjectName(QStringLiteral("albumCoversLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, albumCoversLabel);

        albumCovers = new QComboBox(DevicePropertiesWidget);
        albumCovers->setObjectName(QStringLiteral("albumCovers"));
        albumCovers->setEditable(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, albumCovers);

        coverMaxSizeLabel = new BuddyLabel(DevicePropertiesWidget);
        coverMaxSizeLabel->setObjectName(QStringLiteral("coverMaxSizeLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, coverMaxSizeLabel);

        coverMaxSize = new QComboBox(DevicePropertiesWidget);
        coverMaxSize->setObjectName(QStringLiteral("coverMaxSize"));
        coverMaxSize->setEditable(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, coverMaxSize);

        defaultVolume = new QComboBox(DevicePropertiesWidget);
        defaultVolume->setObjectName(QStringLiteral("defaultVolume"));

        formLayout->setWidget(4, QFormLayout::FieldRole, defaultVolume);

        defaultVolumeLabel = new QLabel(DevicePropertiesWidget);
        defaultVolumeLabel->setObjectName(QStringLiteral("defaultVolumeLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, defaultVolumeLabel);

        fixVariousArtists = new QCheckBox(DevicePropertiesWidget);
        fixVariousArtists->setObjectName(QStringLiteral("fixVariousArtists"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, fixVariousArtists);

        autoScan = new QCheckBox(DevicePropertiesWidget);
        autoScan->setObjectName(QStringLiteral("autoScan"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, autoScan);

        useCache = new QCheckBox(DevicePropertiesWidget);
        useCache->setObjectName(QStringLiteral("useCache"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, useCache);


        verticalLayout->addLayout(formLayout);

        filenamesGroupBox = new QGroupBox(DevicePropertiesWidget);
        filenamesGroupBox->setObjectName(QStringLiteral("filenamesGroupBox"));
        formLayout_2 = new QFormLayout(filenamesGroupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_6 = new BuddyLabel(filenamesGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        filenameScheme = new LineEdit(filenamesGroupBox);
        filenameScheme->setObjectName(QStringLiteral("filenameScheme"));
        filenameScheme->setMinimumSize(QSize(288, 0));
        filenameScheme->setReadOnly(true);

        horizontalLayout->addWidget(filenameScheme);

        configFilename = new QToolButton(filenamesGroupBox);
        configFilename->setObjectName(QStringLiteral("configFilename"));
        configFilename->setAutoRaise(true);

        horizontalLayout->addWidget(configFilename);


        formLayout_2->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        vfatSafe = new QCheckBox(filenamesGroupBox);
        vfatSafe->setObjectName(QStringLiteral("vfatSafe"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, vfatSafe);

        asciiOnly = new QCheckBox(filenamesGroupBox);
        asciiOnly->setObjectName(QStringLiteral("asciiOnly"));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, asciiOnly);

        replaceSpaces = new QCheckBox(filenamesGroupBox);
        replaceSpaces->setObjectName(QStringLiteral("replaceSpaces"));

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, replaceSpaces);

        ignoreThe = new QCheckBox(filenamesGroupBox);
        ignoreThe->setObjectName(QStringLiteral("ignoreThe"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, ignoreThe);


        verticalLayout->addWidget(filenamesGroupBox);

        transcoderFrame = new QGroupBox(DevicePropertiesWidget);
        transcoderFrame->setObjectName(QStringLiteral("transcoderFrame"));
        verticalLayout_2 = new QVBoxLayout(transcoderFrame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        transcoderName = new QComboBox(transcoderFrame);
        transcoderName->setObjectName(QStringLiteral("transcoderName"));

        verticalLayout_2->addWidget(transcoderName);

        transcoderWhen = new QComboBox(transcoderFrame);
        transcoderWhen->setObjectName(QStringLiteral("transcoderWhen"));

        verticalLayout_2->addWidget(transcoderWhen);

        transcoderValue = new ValueSlider(transcoderFrame);
        transcoderValue->setObjectName(QStringLiteral("transcoderValue"));

        verticalLayout_2->addWidget(transcoderValue);


        verticalLayout->addWidget(transcoderFrame);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(name);
        musicFolderLabel->setBuddy(musicFolder);
        albumCoversLabel->setBuddy(albumCovers);
        coverMaxSizeLabel->setBuddy(coverMaxSize);
        label_6->setBuddy(filenameScheme);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(musicFolder, albumCovers);
        QWidget::setTabOrder(albumCovers, coverMaxSize);
        QWidget::setTabOrder(coverMaxSize, defaultVolume);
        QWidget::setTabOrder(defaultVolume, fixVariousArtists);
        QWidget::setTabOrder(fixVariousArtists, autoScan);
        QWidget::setTabOrder(autoScan, useCache);
        QWidget::setTabOrder(useCache, vfatSafe);
        QWidget::setTabOrder(vfatSafe, asciiOnly);
        QWidget::setTabOrder(asciiOnly, replaceSpaces);
        QWidget::setTabOrder(replaceSpaces, ignoreThe);
        QWidget::setTabOrder(ignoreThe, filenameScheme);
        QWidget::setTabOrder(filenameScheme, configFilename);
        QWidget::setTabOrder(configFilename, transcoderName);
        QWidget::setTabOrder(transcoderName, transcoderWhen);
        QWidget::setTabOrder(transcoderWhen, transcoderValue);

        retranslateUi(DevicePropertiesWidget);

        QMetaObject::connectSlotsByName(DevicePropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *DevicePropertiesWidget)
    {
        remoteDeviceNote->setText(QApplication::translate("DevicePropertiesWidget", "These settings are only valid, and editable, when the device is connected.", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("DevicePropertiesWidget", "Name:", Q_NULLPTR));
        musicFolderLabel->setText(QApplication::translate("DevicePropertiesWidget", "Music folder:", Q_NULLPTR));
        albumCoversLabel->setText(QApplication::translate("DevicePropertiesWidget", "Copy album covers as:", Q_NULLPTR));
        coverMaxSizeLabel->setText(QApplication::translate("DevicePropertiesWidget", "Maximum cover size:", Q_NULLPTR));
        defaultVolumeLabel->setText(QApplication::translate("DevicePropertiesWidget", "Default volume:", Q_NULLPTR));
        fixVariousArtists->setText(QApplication::translate("DevicePropertiesWidget", "'Various Artists' workaround", Q_NULLPTR));
        autoScan->setText(QApplication::translate("DevicePropertiesWidget", "Automatically scan music when attached", Q_NULLPTR));
        useCache->setText(QApplication::translate("DevicePropertiesWidget", "Use cache", Q_NULLPTR));
        filenamesGroupBox->setTitle(QApplication::translate("DevicePropertiesWidget", "Filenames", Q_NULLPTR));
        label_6->setText(QApplication::translate("DevicePropertiesWidget", "Filename scheme:", Q_NULLPTR));
        vfatSafe->setText(QApplication::translate("DevicePropertiesWidget", "VFAT safe", Q_NULLPTR));
        asciiOnly->setText(QApplication::translate("DevicePropertiesWidget", "Use only ASCII characters", Q_NULLPTR));
        replaceSpaces->setText(QApplication::translate("DevicePropertiesWidget", "Replace spaces with underscores", Q_NULLPTR));
        ignoreThe->setText(QApplication::translate("DevicePropertiesWidget", "Append 'The' to artist names", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ignoreThe->setToolTip(QApplication::translate("DevicePropertiesWidget", "If an artist name begins with 'The', then append this in the folder name. e.g. 'The Beatles' becomes 'Beatles, The'", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        transcoderFrame->setTitle(QApplication::translate("DevicePropertiesWidget", "Transcoding", Q_NULLPTR));
        Q_UNUSED(DevicePropertiesWidget);
    } // retranslateUi

};

namespace Ui {
    class DevicePropertiesWidget: public Ui_DevicePropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEPROPERTIESWIDGET_H

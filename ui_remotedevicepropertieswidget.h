/********************************************************************************
** Form generated from reading UI file 'remotedevicepropertieswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTEDEVICEPROPERTIESWIDGET_H
#define UI_REMOTEDEVICEPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/lineedit.h"
#include "support/pathrequester.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_RemoteDevicePropertiesWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    PlainNoteLabel *connectionNote;
    QFormLayout *formLayout;
    BuddyLabel *typeLabel;
    QComboBox *type;
    BuddyLabel *nameLabel;
    LineEdit *name;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *sshPage;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_2;
    BuddyLabel *hostLabel;
    LineEdit *sshHost;
    BuddyLabel *portLabel;
    QSpinBox *sshPort;
    BuddyLabel *userLabel;
    LineEdit *sshUser;
    BuddyLabel *folderLabel;
    LineEdit *sshFolder;
    BuddyLabel *sshExtraLabel;
    LineEdit *sshExtra;
    PlainNoteLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QWidget *filePage;
    QFormLayout *formLayout_3;
    BuddyLabel *label;
    PathRequester *fileFolder;
    PlainNoteLabel *infoLabel;

    void setupUi(QWidget *RemoteDevicePropertiesWidget)
    {
        if (RemoteDevicePropertiesWidget->objectName().isEmpty())
            RemoteDevicePropertiesWidget->setObjectName(QStringLiteral("RemoteDevicePropertiesWidget"));
        RemoteDevicePropertiesWidget->resize(516, 447);
        verticalLayout_2 = new QVBoxLayout(RemoteDevicePropertiesWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        connectionNote = new PlainNoteLabel(RemoteDevicePropertiesWidget);
        connectionNote->setObjectName(QStringLiteral("connectionNote"));

        verticalLayout_2->addWidget(connectionNote);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        typeLabel = new BuddyLabel(RemoteDevicePropertiesWidget);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, typeLabel);

        type = new QComboBox(RemoteDevicePropertiesWidget);
        type->setObjectName(QStringLiteral("type"));

        formLayout->setWidget(0, QFormLayout::FieldRole, type);

        nameLabel = new BuddyLabel(RemoteDevicePropertiesWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nameLabel);

        name = new LineEdit(RemoteDevicePropertiesWidget);
        name->setObjectName(QStringLiteral("name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, name);


        verticalLayout_2->addLayout(formLayout);

        groupBox = new QGroupBox(RemoteDevicePropertiesWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(groupBox);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sshPage = new QWidget();
        sshPage->setObjectName(QStringLiteral("sshPage"));
        verticalLayout_4 = new QVBoxLayout(sshPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        hostLabel = new BuddyLabel(sshPage);
        hostLabel->setObjectName(QStringLiteral("hostLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, hostLabel);

        sshHost = new LineEdit(sshPage);
        sshHost->setObjectName(QStringLiteral("sshHost"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, sshHost);

        portLabel = new BuddyLabel(sshPage);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, portLabel);

        sshPort = new QSpinBox(sshPage);
        sshPort->setObjectName(QStringLiteral("sshPort"));
        sshPort->setMaximum(65535);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, sshPort);

        userLabel = new BuddyLabel(sshPage);
        userLabel->setObjectName(QStringLiteral("userLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, userLabel);

        sshUser = new LineEdit(sshPage);
        sshUser->setObjectName(QStringLiteral("sshUser"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, sshUser);

        folderLabel = new BuddyLabel(sshPage);
        folderLabel->setObjectName(QStringLiteral("folderLabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, folderLabel);

        sshFolder = new LineEdit(sshPage);
        sshFolder->setObjectName(QStringLiteral("sshFolder"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, sshFolder);

        sshExtraLabel = new BuddyLabel(sshPage);
        sshExtraLabel->setObjectName(QStringLiteral("sshExtraLabel"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, sshExtraLabel);

        sshExtra = new LineEdit(sshPage);
        sshExtra->setObjectName(QStringLiteral("sshExtra"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, sshExtra);


        verticalLayout_4->addLayout(formLayout_2);

        label_5 = new PlainNoteLabel(sshPage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);
        label_5->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_4->addWidget(label_5);

        verticalSpacer_2 = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        stackedWidget->addWidget(sshPage);
        filePage = new QWidget();
        filePage->setObjectName(QStringLiteral("filePage"));
        formLayout_3 = new QFormLayout(filePage);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label = new BuddyLabel(filePage);
        label->setObjectName(QStringLiteral("label"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        fileFolder = new PathRequester(filePage);
        fileFolder->setObjectName(QStringLiteral("fileFolder"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, fileFolder);

        stackedWidget->addWidget(filePage);

        verticalLayout->addWidget(stackedWidget);


        verticalLayout_2->addWidget(groupBox);

        infoLabel = new PlainNoteLabel(RemoteDevicePropertiesWidget);
        infoLabel->setObjectName(QStringLiteral("infoLabel"));

        verticalLayout_2->addWidget(infoLabel);

#ifndef QT_NO_SHORTCUT
        typeLabel->setBuddy(type);
        nameLabel->setBuddy(name);
        hostLabel->setBuddy(sshHost);
        portLabel->setBuddy(sshPort);
        userLabel->setBuddy(sshUser);
        folderLabel->setBuddy(sshFolder);
        sshExtraLabel->setBuddy(sshExtra);
        label->setBuddy(fileFolder);
#endif // QT_NO_SHORTCUT

        retranslateUi(RemoteDevicePropertiesWidget);
        QObject::connect(type, SIGNAL(activated(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RemoteDevicePropertiesWidget);
    } // setupUi

    void retranslateUi(QWidget *RemoteDevicePropertiesWidget)
    {
        connectionNote->setText(QApplication::translate("RemoteDevicePropertiesWidget", "These settings are only editable when the device is not connected.", Q_NULLPTR));
        typeLabel->setText(QApplication::translate("RemoteDevicePropertiesWidget", "Type:", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("RemoteDevicePropertiesWidget", "Name:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("RemoteDevicePropertiesWidget", "Options", Q_NULLPTR));
        hostLabel->setText(QApplication::translate("RemoteDevicePropertiesWidget", "Host:", Q_NULLPTR));
        portLabel->setText(QApplication::translate("RemoteDevicePropertiesWidget", "Port:", Q_NULLPTR));
        userLabel->setText(QApplication::translate("RemoteDevicePropertiesWidget", "User:", Q_NULLPTR));
        folderLabel->setText(QApplication::translate("RemoteDevicePropertiesWidget", "Folder:", Q_NULLPTR));
        sshExtraLabel->setText(QApplication::translate("RemoteDevicePropertiesWidget", "Extra Options:", Q_NULLPTR));
        label_5->setText(QApplication::translate("RemoteDevicePropertiesWidget", "Due to the way sshfs works, a suitable ssh-askpass application (ksshaskpass, ssh-askpass-gnome, etc.) will be required to enter the password.", Q_NULLPTR));
        label->setText(QApplication::translate("RemoteDevicePropertiesWidget", "Folder:", Q_NULLPTR));
        infoLabel->setText(QApplication::translate("RemoteDevicePropertiesWidget", "This dialog is only used to add remote devices (e.g. via sshfs), or to access locally mounted folders. For normal media players, attached via USB, Cantata will automatically display the device when it is attached.", Q_NULLPTR));
        Q_UNUSED(RemoteDevicePropertiesWidget);
    } // retranslateUi

};

namespace Ui {
    class RemoteDevicePropertiesWidget: public Ui_RemoteDevicePropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTEDEVICEPROPERTIESWIDGET_H

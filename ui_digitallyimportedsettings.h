/********************************************************************************
** Form generated from reading UI file 'digitallyimportedsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGITALLYIMPORTEDSETTINGS_H
#define UI_DIGITALLYIMPORTEDSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/lineedit.h"
#include "support/messagewidget.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_DigitallyImportedSettings
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    BuddyLabel *label_2;
    LineEdit *user;
    BuddyLabel *label_3;
    LineEdit *pass;
    BuddyLabel *label_4;
    QComboBox *audio;
    BuddyLabel *label_5;
    QLabel *loginStatusLabel;
    QPushButton *loginButton;
    QLabel *expiryLabel;
    QLabel *expiry;
    MessageWidget *messageWidget;
    NoteLabel *noteLabel;
    NoteLabel *note2Label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *DigitallyImportedSettings)
    {
        if (DigitallyImportedSettings->objectName().isEmpty())
            DigitallyImportedSettings->setObjectName(QStringLiteral("DigitallyImportedSettings"));
        DigitallyImportedSettings->resize(491, 367);
        verticalLayout = new QVBoxLayout(DigitallyImportedSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(DigitallyImportedSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(DigitallyImportedSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_2 = new BuddyLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        user = new LineEdit(groupBox);
        user->setObjectName(QStringLiteral("user"));

        formLayout->setWidget(0, QFormLayout::FieldRole, user);

        label_3 = new BuddyLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        pass = new LineEdit(groupBox);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, pass);

        label_4 = new BuddyLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        audio = new QComboBox(groupBox);
        audio->setObjectName(QStringLiteral("audio"));

        formLayout->setWidget(2, QFormLayout::FieldRole, audio);

        label_5 = new BuddyLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        loginStatusLabel = new QLabel(groupBox);
        loginStatusLabel->setObjectName(QStringLiteral("loginStatusLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginStatusLabel->sizePolicy().hasHeightForWidth());
        loginStatusLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::FieldRole, loginStatusLabel);

        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::FieldRole, loginButton);

        expiryLabel = new QLabel(groupBox);
        expiryLabel->setObjectName(QStringLiteral("expiryLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, expiryLabel);

        expiry = new QLabel(groupBox);
        expiry->setObjectName(QStringLiteral("expiry"));
        sizePolicy.setHeightForWidth(expiry->sizePolicy().hasHeightForWidth());
        expiry->setSizePolicy(sizePolicy);

        formLayout->setWidget(5, QFormLayout::FieldRole, expiry);

        messageWidget = new MessageWidget(groupBox);
        messageWidget->setObjectName(QStringLiteral("messageWidget"));
        messageWidget->setFrameShape(QFrame::StyledPanel);
        messageWidget->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(6, QFormLayout::SpanningRole, messageWidget);


        verticalLayout->addWidget(groupBox);

        noteLabel = new NoteLabel(DigitallyImportedSettings);
        noteLabel->setObjectName(QStringLiteral("noteLabel"));

        verticalLayout->addWidget(noteLabel);

        note2Label = new NoteLabel(DigitallyImportedSettings);
        note2Label->setObjectName(QStringLiteral("note2Label"));

        verticalLayout->addWidget(note2Label);

        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(user);
        label_3->setBuddy(pass);
        label_4->setBuddy(audio);
#endif // QT_NO_SHORTCUT

        retranslateUi(DigitallyImportedSettings);

        QMetaObject::connectSlotsByName(DigitallyImportedSettings);
    } // setupUi

    void retranslateUi(QWidget *DigitallyImportedSettings)
    {
        label->setText(QApplication::translate("DigitallyImportedSettings", "You can listen for free without an account, but Premium members can listen to higher quality streams without advertisements. Visit <a href=\"http://www.di.fm/premium/\">http://www.di.fm/premium/</a> to upgrade to a premium account.", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DigitallyImportedSettings", "Premium Account", Q_NULLPTR));
        label_2->setText(QApplication::translate("DigitallyImportedSettings", "Username:", Q_NULLPTR));
        label_3->setText(QApplication::translate("DigitallyImportedSettings", "Password:", Q_NULLPTR));
        label_4->setText(QApplication::translate("DigitallyImportedSettings", "Stream type:", Q_NULLPTR));
        label_5->setText(QApplication::translate("DigitallyImportedSettings", "Status:", Q_NULLPTR));
        loginStatusLabel->setText(QString());
        loginButton->setText(QApplication::translate("DigitallyImportedSettings", "Login", Q_NULLPTR));
        expiryLabel->setText(QApplication::translate("DigitallyImportedSettings", "Session expiry:", Q_NULLPTR));
        noteLabel->setText(QApplication::translate("DigitallyImportedSettings", "These settings apply to Digitally Imported, JazzRadio.com, RockRadio.com, and Sky.fm", Q_NULLPTR));
        note2Label->setText(QApplication::translate("DigitallyImportedSettings", "If you enter account details, then a 'DI' status item will appear under the list of streams. This will indicate if you are logged in or not.", Q_NULLPTR));
        Q_UNUSED(DigitallyImportedSettings);
    } // retranslateUi

};

namespace Ui {
    class DigitallyImportedSettings: public Ui_DigitallyImportedSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGITALLYIMPORTEDSETTINGS_H

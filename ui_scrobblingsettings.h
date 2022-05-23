/********************************************************************************
** Form generated from reading UI file 'scrobblingsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCROBBLINGSETTINGS_H
#define UI_SCROBBLINGSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/lineedit.h"
#include "support/messagewidget.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_ScrobblingSettings
{
public:
    QFormLayout *formLayout;
    BuddyLabel *scrobblerLabel;
    QHBoxLayout *scrobblerLayout;
    QComboBox *scrobbler;
    QLabel *scrobblerName;
    BuddyLabel *userLabel;
    LineEdit *user;
    BuddyLabel *passLabel;
    LineEdit *pass;
    QLabel *statusLabel;
    QLabel *loginStatusLabel;
    QPushButton *loginButton;
    MessageWidget *messageWidget;
    QCheckBox *enableScrobbling;
    QCheckBox *showLove;
    NoteLabel *noteLabel;
    QSpacerItem *expandingSpacer;

    void setupUi(QWidget *ScrobblingSettings)
    {
        if (ScrobblingSettings->objectName().isEmpty())
            ScrobblingSettings->setObjectName(QStringLiteral("ScrobblingSettings"));
        ScrobblingSettings->resize(475, 295);
        formLayout = new QFormLayout(ScrobblingSettings);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        scrobblerLabel = new BuddyLabel(ScrobblingSettings);
        scrobblerLabel->setObjectName(QStringLiteral("scrobblerLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, scrobblerLabel);

        scrobblerLayout = new QHBoxLayout();
        scrobblerLayout->setSpacing(0);
        scrobblerLayout->setContentsMargins(0, 0, 0, 0);
        scrobblerLayout->setObjectName(QStringLiteral("scrobblerLayout"));
        scrobbler = new QComboBox(ScrobblingSettings);
        scrobbler->setObjectName(QStringLiteral("scrobbler"));

        scrobblerLayout->addWidget(scrobbler);

        scrobblerName = new QLabel(ScrobblingSettings);
        scrobblerName->setObjectName(QStringLiteral("scrobblerName"));

        scrobblerLayout->addWidget(scrobblerName);


        formLayout->setLayout(0, QFormLayout::FieldRole, scrobblerLayout);

        userLabel = new BuddyLabel(ScrobblingSettings);
        userLabel->setObjectName(QStringLiteral("userLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, userLabel);

        user = new LineEdit(ScrobblingSettings);
        user->setObjectName(QStringLiteral("user"));

        formLayout->setWidget(1, QFormLayout::FieldRole, user);

        passLabel = new BuddyLabel(ScrobblingSettings);
        passLabel->setObjectName(QStringLiteral("passLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, passLabel);

        pass = new LineEdit(ScrobblingSettings);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, pass);

        statusLabel = new QLabel(ScrobblingSettings);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, statusLabel);

        loginStatusLabel = new QLabel(ScrobblingSettings);
        loginStatusLabel->setObjectName(QStringLiteral("loginStatusLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginStatusLabel->sizePolicy().hasHeightForWidth());
        loginStatusLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::FieldRole, loginStatusLabel);

        loginButton = new QPushButton(ScrobblingSettings);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loginButton->sizePolicy().hasHeightForWidth());
        loginButton->setSizePolicy(sizePolicy1);

        formLayout->setWidget(4, QFormLayout::FieldRole, loginButton);

        messageWidget = new MessageWidget(ScrobblingSettings);
        messageWidget->setObjectName(QStringLiteral("messageWidget"));
        messageWidget->setFrameShape(QFrame::StyledPanel);
        messageWidget->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(5, QFormLayout::SpanningRole, messageWidget);

        enableScrobbling = new QCheckBox(ScrobblingSettings);
        enableScrobbling->setObjectName(QStringLiteral("enableScrobbling"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, enableScrobbling);

        showLove = new QCheckBox(ScrobblingSettings);
        showLove->setObjectName(QStringLiteral("showLove"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, showLove);

        noteLabel = new NoteLabel(ScrobblingSettings);
        noteLabel->setObjectName(QStringLiteral("noteLabel"));

        formLayout->setWidget(8, QFormLayout::SpanningRole, noteLabel);

        expandingSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(9, QFormLayout::LabelRole, expandingSpacer);

#ifndef QT_NO_SHORTCUT
        scrobblerLabel->setBuddy(scrobbler);
        userLabel->setBuddy(user);
        passLabel->setBuddy(pass);
#endif // QT_NO_SHORTCUT

        retranslateUi(ScrobblingSettings);

        QMetaObject::connectSlotsByName(ScrobblingSettings);
    } // setupUi

    void retranslateUi(QWidget *ScrobblingSettings)
    {
        scrobblerLabel->setText(QApplication::translate("ScrobblingSettings", "Scrobble using:", Q_NULLPTR));
        userLabel->setText(QApplication::translate("ScrobblingSettings", "Username:", Q_NULLPTR));
        passLabel->setText(QApplication::translate("ScrobblingSettings", "Password:", Q_NULLPTR));
        statusLabel->setText(QApplication::translate("ScrobblingSettings", "Status:", Q_NULLPTR));
        loginStatusLabel->setText(QString());
        loginButton->setText(QApplication::translate("ScrobblingSettings", "Login", Q_NULLPTR));
        enableScrobbling->setText(QApplication::translate("ScrobblingSettings", "Scrobble tracks", Q_NULLPTR));
        showLove->setText(QApplication::translate("ScrobblingSettings", "Show 'Love' button", Q_NULLPTR));
        Q_UNUSED(ScrobblingSettings);
    } // retranslateUi

};

namespace Ui {
    class ScrobblingSettings: public Ui_ScrobblingSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCROBBLINGSETTINGS_H

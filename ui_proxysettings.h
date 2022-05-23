/********************************************************************************
** Form generated from reading UI file 'proxysettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXYSETTINGS_H
#define UI_PROXYSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/lineedit.h"

QT_BEGIN_NAMESPACE

class Ui_ProxySettings
{
public:
    QFormLayout *mainLayout;
    BuddyLabel *modeLabel;
    QComboBox *proxyMode;
    BuddyLabel *proxyTypeLabel;
    QComboBox *proxyType;
    BuddyLabel *proxyHostLabel;
    LineEdit *proxyHost;
    BuddyLabel *proxyPortLabel;
    QSpinBox *proxyPort;
    BuddyLabel *proxyUsernameLabel;
    LineEdit *proxyUsername;
    BuddyLabel *proxyPasswordLabel;
    LineEdit *proxyPassword;

    void setupUi(QWidget *ProxySettings)
    {
        if (ProxySettings->objectName().isEmpty())
            ProxySettings->setObjectName(QStringLiteral("ProxySettings"));
        ProxySettings->resize(374, 207);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProxySettings->sizePolicy().hasHeightForWidth());
        ProxySettings->setSizePolicy(sizePolicy);
        mainLayout = new QFormLayout(ProxySettings);
        mainLayout->setContentsMargins(0, 0, 0, 0);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        modeLabel = new BuddyLabel(ProxySettings);
        modeLabel->setObjectName(QStringLiteral("modeLabel"));

        mainLayout->setWidget(0, QFormLayout::LabelRole, modeLabel);

        proxyMode = new QComboBox(ProxySettings);
        proxyMode->setObjectName(QStringLiteral("proxyMode"));

        mainLayout->setWidget(0, QFormLayout::FieldRole, proxyMode);

        proxyTypeLabel = new BuddyLabel(ProxySettings);
        proxyTypeLabel->setObjectName(QStringLiteral("proxyTypeLabel"));

        mainLayout->setWidget(1, QFormLayout::LabelRole, proxyTypeLabel);

        proxyType = new QComboBox(ProxySettings);
        proxyType->setObjectName(QStringLiteral("proxyType"));

        mainLayout->setWidget(1, QFormLayout::FieldRole, proxyType);

        proxyHostLabel = new BuddyLabel(ProxySettings);
        proxyHostLabel->setObjectName(QStringLiteral("proxyHostLabel"));

        mainLayout->setWidget(2, QFormLayout::LabelRole, proxyHostLabel);

        proxyHost = new LineEdit(ProxySettings);
        proxyHost->setObjectName(QStringLiteral("proxyHost"));

        mainLayout->setWidget(2, QFormLayout::FieldRole, proxyHost);

        proxyPortLabel = new BuddyLabel(ProxySettings);
        proxyPortLabel->setObjectName(QStringLiteral("proxyPortLabel"));

        mainLayout->setWidget(3, QFormLayout::LabelRole, proxyPortLabel);

        proxyPort = new QSpinBox(ProxySettings);
        proxyPort->setObjectName(QStringLiteral("proxyPort"));
        proxyPort->setMaximum(65535);
        proxyPort->setValue(8080);

        mainLayout->setWidget(3, QFormLayout::FieldRole, proxyPort);

        proxyUsernameLabel = new BuddyLabel(ProxySettings);
        proxyUsernameLabel->setObjectName(QStringLiteral("proxyUsernameLabel"));

        mainLayout->setWidget(4, QFormLayout::LabelRole, proxyUsernameLabel);

        proxyUsername = new LineEdit(ProxySettings);
        proxyUsername->setObjectName(QStringLiteral("proxyUsername"));

        mainLayout->setWidget(4, QFormLayout::FieldRole, proxyUsername);

        proxyPasswordLabel = new BuddyLabel(ProxySettings);
        proxyPasswordLabel->setObjectName(QStringLiteral("proxyPasswordLabel"));

        mainLayout->setWidget(5, QFormLayout::LabelRole, proxyPasswordLabel);

        proxyPassword = new LineEdit(ProxySettings);
        proxyPassword->setObjectName(QStringLiteral("proxyPassword"));
        proxyPassword->setEchoMode(QLineEdit::Password);

        mainLayout->setWidget(5, QFormLayout::FieldRole, proxyPassword);

#ifndef QT_NO_SHORTCUT
        modeLabel->setBuddy(proxyMode);
        proxyTypeLabel->setBuddy(proxyType);
        proxyHostLabel->setBuddy(proxyHost);
        proxyPortLabel->setBuddy(proxyPort);
        proxyUsernameLabel->setBuddy(proxyUsername);
        proxyPasswordLabel->setBuddy(proxyPassword);
#endif // QT_NO_SHORTCUT

        retranslateUi(ProxySettings);

        QMetaObject::connectSlotsByName(ProxySettings);
    } // setupUi

    void retranslateUi(QWidget *ProxySettings)
    {
        modeLabel->setText(QApplication::translate("ProxySettings", "Mode:", Q_NULLPTR));
        proxyTypeLabel->setText(QApplication::translate("ProxySettings", "Type:", Q_NULLPTR));
        proxyType->clear();
        proxyType->insertItems(0, QStringList()
         << QApplication::translate("ProxySettings", "HTTP Proxy", Q_NULLPTR)
         << QApplication::translate("ProxySettings", "SOCKS Proxy", Q_NULLPTR)
        );
        proxyHostLabel->setText(QApplication::translate("ProxySettings", "Host:", Q_NULLPTR));
        proxyPortLabel->setText(QApplication::translate("ProxySettings", "Port:", Q_NULLPTR));
        proxyUsernameLabel->setText(QApplication::translate("ProxySettings", "Username:", Q_NULLPTR));
        proxyPasswordLabel->setText(QApplication::translate("ProxySettings", "Password:", Q_NULLPTR));
        Q_UNUSED(ProxySettings);
    } // retranslateUi

};

namespace Ui {
    class ProxySettings: public Ui_ProxySettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROXYSETTINGS_H

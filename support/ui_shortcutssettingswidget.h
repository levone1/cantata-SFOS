/********************************************************************************
** Form generated from reading UI file 'shortcutssettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHORTCUTSSETTINGSWIDGET_H
#define UI_SHORTCUTSSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/keysequencewidget.h"
#include "support/lineedit.h"

QT_BEGIN_NAMESPACE

class Ui_ShortcutsSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    BuddyLabel *label_2;
    LineEdit *searchEdit;
    QTreeView *shortcutsView;
    QGroupBox *actionBox;
    QGridLayout *gridLayout;
    QRadioButton *useDefault;
    QLabel *defaultShortcut;
    QRadioButton *useCustom;
    KeySequenceWidget *keySequenceWidget;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *ShortcutsSettingsWidget)
    {
        if (ShortcutsSettingsWidget->objectName().isEmpty())
            ShortcutsSettingsWidget->setObjectName(QStringLiteral("ShortcutsSettingsWidget"));
        ShortcutsSettingsWidget->resize(497, 481);
        verticalLayout = new QVBoxLayout(ShortcutsSettingsWidget);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new BuddyLabel(ShortcutsSettingsWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        searchEdit = new LineEdit(ShortcutsSettingsWidget);
        searchEdit->setObjectName(QStringLiteral("searchEdit"));

        horizontalLayout->addWidget(searchEdit);


        verticalLayout->addLayout(horizontalLayout);

        shortcutsView = new QTreeView(ShortcutsSettingsWidget);
        shortcutsView->setObjectName(QStringLiteral("shortcutsView"));
        shortcutsView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        shortcutsView->setProperty("showDropIndicator", QVariant(false));
        shortcutsView->setAlternatingRowColors(true);
        shortcutsView->setSortingEnabled(true);
        shortcutsView->setAnimated(false);
        shortcutsView->setAllColumnsShowFocus(true);
        shortcutsView->header()->setCascadingSectionResizes(true);
        shortcutsView->header()->setStretchLastSection(true);

        verticalLayout->addWidget(shortcutsView);

        actionBox = new QGroupBox(ShortcutsSettingsWidget);
        actionBox->setObjectName(QStringLiteral("actionBox"));
        gridLayout = new QGridLayout(actionBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        useDefault = new QRadioButton(actionBox);
        useDefault->setObjectName(QStringLiteral("useDefault"));

        gridLayout->addWidget(useDefault, 0, 0, 1, 1);

        defaultShortcut = new QLabel(actionBox);
        defaultShortcut->setObjectName(QStringLiteral("defaultShortcut"));

        gridLayout->addWidget(defaultShortcut, 0, 1, 1, 1);

        useCustom = new QRadioButton(actionBox);
        useCustom->setObjectName(QStringLiteral("useCustom"));

        gridLayout->addWidget(useCustom, 1, 0, 1, 1);

        keySequenceWidget = new KeySequenceWidget(actionBox);
        keySequenceWidget->setObjectName(QStringLiteral("keySequenceWidget"));

        gridLayout->addWidget(keySequenceWidget, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(346, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        verticalLayout->addWidget(actionBox);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(searchEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(searchEdit, shortcutsView);
        QWidget::setTabOrder(shortcutsView, useDefault);
        QWidget::setTabOrder(useDefault, useCustom);

        retranslateUi(ShortcutsSettingsWidget);

        QMetaObject::connectSlotsByName(ShortcutsSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *ShortcutsSettingsWidget)
    {
        label_2->setText(QApplication::translate("ShortcutsSettingsWidget", "Search:", Q_NULLPTR));
        actionBox->setTitle(QApplication::translate("ShortcutsSettingsWidget", "Shortcut for Selected Action", Q_NULLPTR));
        useDefault->setText(QApplication::translate("ShortcutsSettingsWidget", "Default:", Q_NULLPTR));
        defaultShortcut->setText(QApplication::translate("ShortcutsSettingsWidget", "None", Q_NULLPTR));
        useCustom->setText(QApplication::translate("ShortcutsSettingsWidget", "Custom:", Q_NULLPTR));
        Q_UNUSED(ShortcutsSettingsWidget);
    } // retranslateUi

};

namespace Ui {
    class ShortcutsSettingsWidget: public Ui_ShortcutsSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHORTCUTSSETTINGSWIDGET_H

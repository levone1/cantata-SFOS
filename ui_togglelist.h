/********************************************************************************
** Form generated from reading UI file 'togglelist.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOGGLELIST_H
#define UI_TOGGLELIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "support/flattoolbutton.h"

QT_BEGIN_NAMESPACE

class Ui_ToggleList
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *available;
    QSpacerItem *verticalSpacer;
    QListWidget *selected;
    QSpacerItem *verticalSpacer_3;
    FlatToolButton *addButton;
    FlatToolButton *upButton;
    FlatToolButton *removeButton;
    FlatToolButton *downButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label;

    void setupUi(QWidget *ToggleList)
    {
        if (ToggleList->objectName().isEmpty())
            ToggleList->setObjectName(QStringLiteral("ToggleList"));
        ToggleList->resize(391, 296);
        gridLayout = new QGridLayout(ToggleList);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(ToggleList);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(ToggleList);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        available = new QListWidget(ToggleList);
        available->setObjectName(QStringLiteral("available"));
        available->setSortingEnabled(true);

        gridLayout->addWidget(available, 2, 0, 5, 1);

        verticalSpacer = new QSpacerItem(20, 74, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        selected = new QListWidget(ToggleList);
        selected->setObjectName(QStringLiteral("selected"));
        selected->setSortingEnabled(false);

        gridLayout->addWidget(selected, 2, 2, 5, 1);

        verticalSpacer_3 = new QSpacerItem(20, 89, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 3, 1, 1);

        addButton = new FlatToolButton(ToggleList);
        addButton->setObjectName(QStringLiteral("addButton"));

        gridLayout->addWidget(addButton, 3, 1, 1, 1);

        upButton = new FlatToolButton(ToggleList);
        upButton->setObjectName(QStringLiteral("upButton"));

        gridLayout->addWidget(upButton, 3, 3, 1, 1);

        removeButton = new FlatToolButton(ToggleList);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        gridLayout->addWidget(removeButton, 4, 1, 1, 1);

        downButton = new FlatToolButton(ToggleList);
        downButton->setObjectName(QStringLiteral("downButton"));

        gridLayout->addWidget(downButton, 4, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 5, 3, 1, 1);

        label = new QLabel(ToggleList);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 4);

        QWidget::setTabOrder(available, addButton);
        QWidget::setTabOrder(addButton, removeButton);
        QWidget::setTabOrder(removeButton, selected);
        QWidget::setTabOrder(selected, upButton);
        QWidget::setTabOrder(upButton, downButton);

        retranslateUi(ToggleList);

        QMetaObject::connectSlotsByName(ToggleList);
    } // setupUi

    void retranslateUi(QWidget *ToggleList)
    {
        label_2->setText(QApplication::translate("ToggleList", "Available:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ToggleList", "Selected:", Q_NULLPTR));
        label->setText(QString());
        Q_UNUSED(ToggleList);
    } // retranslateUi

};

namespace Ui {
    class ToggleList: public Ui_ToggleList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOGGLELIST_H

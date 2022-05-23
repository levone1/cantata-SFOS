/********************************************************************************
** Form generated from reading UI file 'synccollectionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNCCOLLECTIONWIDGET_H
#define UI_SYNCCOLLECTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "support/lineedit.h"
#include "widgets/toolbutton.h"
#include "widgets/treeview.h"

QT_BEGIN_NAMESPACE

class Ui_SyncCollectionWidget
{
public:
    QGridLayout *gridLayout_2;
    QLabel *titleLabel;
    ToolButton *cfgButton;
    LineEdit *search;
    TreeView *tree;

    void setupUi(QWidget *SyncCollectionWidget)
    {
        if (SyncCollectionWidget->objectName().isEmpty())
            SyncCollectionWidget->setObjectName(QStringLiteral("SyncCollectionWidget"));
        gridLayout_2 = new QGridLayout(SyncCollectionWidget);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        titleLabel = new QLabel(SyncCollectionWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        titleLabel->setFont(font);

        gridLayout_2->addWidget(titleLabel, 0, 0, 1, 1);

        cfgButton = new ToolButton(SyncCollectionWidget);
        cfgButton->setObjectName(QStringLiteral("cfgButton"));

        gridLayout_2->addWidget(cfgButton, 0, 1, 1, 1);

        search = new LineEdit(SyncCollectionWidget);
        search->setObjectName(QStringLiteral("search"));

        gridLayout_2->addWidget(search, 1, 0, 1, 2);

        tree = new TreeView(SyncCollectionWidget);
        tree->setObjectName(QStringLiteral("tree"));

        gridLayout_2->addWidget(tree, 2, 0, 1, 2);


        retranslateUi(SyncCollectionWidget);

        QMetaObject::connectSlotsByName(SyncCollectionWidget);
    } // setupUi

    void retranslateUi(QWidget *SyncCollectionWidget)
    {
        Q_UNUSED(SyncCollectionWidget);
    } // retranslateUi

};

namespace Ui {
    class SyncCollectionWidget: public Ui_SyncCollectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYNCCOLLECTIONWIDGET_H

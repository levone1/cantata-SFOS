/********************************************************************************
** Form generated from reading UI file 'itemview.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMVIEW_H
#define UI_ITEMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "support/squeezedtextlabel.h"
#include "widgets/listview.h"
#include "widgets/searchwidget.h"
#include "widgets/titlewidget.h"
#include "widgets/treeview.h"

QT_BEGIN_NAMESPACE

class Ui_ItemView
{
public:
    QVBoxLayout *mainLayout;
    TitleWidget *title;
    SearchWidget *searchWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *treeLayout;
    TreeView *treeView;
    QWidget *page_2;
    QVBoxLayout *gridLayout;
    ListView *listView;

    void setupUi(QWidget *ItemView)
    {
        if (ItemView->objectName().isEmpty())
            ItemView->setObjectName(QStringLiteral("ItemView"));
        ItemView->resize(261, 198);
        mainLayout = new QVBoxLayout(ItemView);
        mainLayout->setSpacing(1);
        mainLayout->setContentsMargins(0, 0, 0, 0);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        title = new TitleWidget(ItemView);
        title->setObjectName(QStringLiteral("title"));

        mainLayout->addWidget(title);

        searchWidget = new SearchWidget(ItemView);
        searchWidget->setObjectName(QStringLiteral("searchWidget"));

        mainLayout->addWidget(searchWidget);

        stackedWidget = new QStackedWidget(ItemView);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        treeLayout = new QVBoxLayout(page);
        treeLayout->setContentsMargins(0, 0, 0, 0);
        treeLayout->setObjectName(QStringLiteral("treeLayout"));
        treeView = new TreeView(page);
        treeView->setObjectName(QStringLiteral("treeView"));

        treeLayout->addWidget(treeView);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout = new QVBoxLayout(page_2);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listView = new ListView(page_2);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView);

        stackedWidget->addWidget(page_2);

        mainLayout->addWidget(stackedWidget);


        retranslateUi(ItemView);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ItemView);
    } // setupUi

    void retranslateUi(QWidget *ItemView)
    {
        Q_UNUSED(ItemView);
    } // retranslateUi

};

namespace Ui {
    class ItemView: public Ui_ItemView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMVIEW_H

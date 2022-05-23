/********************************************************************************
** Form generated from reading UI file 'coverdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COVERDIALOG_H
#define UI_COVERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "support/flattoolbutton.h"
#include "support/lineedit.h"
#include "widgets/menubutton.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_CoverDialog
{
public:
    QGridLayout *gridLayout;
    LineEdit *query;
    QPushButton *search;
    FlatToolButton *addFileButton;
    MenuButton *configureButton;
    QListWidget *list;
    NoteLabel *note;

    void setupUi(QWidget *CoverDialog)
    {
        if (CoverDialog->objectName().isEmpty())
            CoverDialog->setObjectName(QStringLiteral("CoverDialog"));
        CoverDialog->resize(417, 304);
        gridLayout = new QGridLayout(CoverDialog);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        query = new LineEdit(CoverDialog);
        query->setObjectName(QStringLiteral("query"));

        gridLayout->addWidget(query, 0, 0, 1, 1);

        search = new QPushButton(CoverDialog);
        search->setObjectName(QStringLiteral("search"));

        gridLayout->addWidget(search, 0, 1, 1, 1);

        addFileButton = new FlatToolButton(CoverDialog);
        addFileButton->setObjectName(QStringLiteral("addFileButton"));

        gridLayout->addWidget(addFileButton, 0, 2, 1, 1);

        configureButton = new MenuButton(CoverDialog);
        configureButton->setObjectName(QStringLiteral("configureButton"));

        gridLayout->addWidget(configureButton, 0, 3, 1, 1);

        list = new QListWidget(CoverDialog);
        list->setObjectName(QStringLiteral("list"));

        gridLayout->addWidget(list, 1, 0, 1, 4);

        note = new NoteLabel(CoverDialog);
        note->setObjectName(QStringLiteral("note"));

        gridLayout->addWidget(note, 2, 0, 1, 4);


        retranslateUi(CoverDialog);

        QMetaObject::connectSlotsByName(CoverDialog);
    } // setupUi

    void retranslateUi(QWidget *CoverDialog)
    {
        search->setText(QApplication::translate("CoverDialog", "Search", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        addFileButton->setToolTip(QApplication::translate("CoverDialog", "Add a local file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        configureButton->setToolTip(QApplication::translate("CoverDialog", "Configure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        note->setText(QApplication::translate("CoverDialog", "This can only be used to change the file used for covers, it will not alter any embedded covers you may have in your song files.", Q_NULLPTR));
        Q_UNUSED(CoverDialog);
    } // retranslateUi

};

namespace Ui {
    class CoverDialog: public Ui_CoverDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COVERDIALOG_H

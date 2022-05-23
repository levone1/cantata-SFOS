/********************************************************************************
** Form generated from reading UI file 'streamssettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMSSETTINGS_H
#define UI_STREAMSSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_StreamsSettings
{
public:
    QVBoxLayout *layout;
    QLabel *label;
    QListWidget *categories;
    PlainNoteLabel *note;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        layout = new QVBoxLayout(Form);
        layout->setContentsMargins(0, 0, 0, 0);
        layout->setObjectName(QStringLiteral("layout"));
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        layout->addWidget(label);

        categories = new QListWidget(Form);
        categories->setObjectName(QStringLiteral("categories"));

        layout->addWidget(categories);

        note = new PlainNoteLabel(Form);
        note->setObjectName(QStringLiteral("note"));

        layout->addWidget(note);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        label->setText(QApplication::translate("StreamsSettings", "Use the checkboxes below to configure the list of active providers.", Q_NULLPTR));
        note->setText(QApplication::translate("StreamsSettings", "Built-in categories are shown in italic, and these cannot be removed.", Q_NULLPTR));
        Q_UNUSED(Form);
    } // retranslateUi

};

namespace Ui {
    class StreamsSettings: public Ui_StreamsSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMSSETTINGS_H

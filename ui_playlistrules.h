/********************************************************************************
** Form generated from reading UI file 'playlistrules.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTRULES_H
#define UI_PLAYLISTRULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "support/lineedit.h"
#include "support/messagewidget.h"
#include "support/urllabel.h"
#include "widgets/listview.h"
#include "widgets/ratingwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PlaylistRules
{
public:
    QVBoxLayout *verticalLayout;
    MessageWidget *messageWidget;
    LineEdit *nameText;
    QWidget *controls;
    QGridLayout *gridLayout;
    ListView *rulesList;
    QPushButton *addBtn;
    QPushButton *editBtn;
    QPushButton *removeBtn;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *ratingRangeLabel_2;
    QHBoxLayout *horizontalLayout_2;
    RatingWidget *ratingFrom;
    QLabel *ratingToLabel;
    RatingWidget *ratingTo;
    QSpacerItem *rangeLabel;
    QCheckBox *includeUnrated;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *minDuration;
    QLabel *rangeLabel2;
    QSpinBox *maxDuration;
    QSpacerItem *durationSpacer;
    QLabel *numberOfSongsLabel;
    QSpinBox *numTracks;
    QLabel *maxAgeLabel;
    QSpinBox *maxAge;
    QLabel *orderLabel;
    QHBoxLayout *orderLayout;
    QComboBox *order;
    QComboBox *orderAscending;
    UrlLabel *aboutLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *PlaylistRules)
    {
        if (PlaylistRules->objectName().isEmpty())
            PlaylistRules->setObjectName(QStringLiteral("PlaylistRules"));
        PlaylistRules->resize(689, 495);
        verticalLayout = new QVBoxLayout(PlaylistRules);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        messageWidget = new MessageWidget(PlaylistRules);
        messageWidget->setObjectName(QStringLiteral("messageWidget"));
        messageWidget->setFrameShape(QFrame::StyledPanel);
        messageWidget->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(messageWidget);

        nameText = new LineEdit(PlaylistRules);
        nameText->setObjectName(QStringLiteral("nameText"));

        verticalLayout->addWidget(nameText);

        controls = new QWidget(PlaylistRules);
        controls->setObjectName(QStringLiteral("controls"));
        gridLayout = new QGridLayout(controls);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rulesList = new ListView(controls);
        rulesList->setObjectName(QStringLiteral("rulesList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rulesList->sizePolicy().hasHeightForWidth());
        rulesList->setSizePolicy(sizePolicy);

        gridLayout->addWidget(rulesList, 0, 0, 4, 2);

        addBtn = new QPushButton(controls);
        addBtn->setObjectName(QStringLiteral("addBtn"));

        gridLayout->addWidget(addBtn, 0, 2, 1, 1);

        editBtn = new QPushButton(controls);
        editBtn->setObjectName(QStringLiteral("editBtn"));

        gridLayout->addWidget(editBtn, 1, 2, 1, 1);

        removeBtn = new QPushButton(controls);
        removeBtn->setObjectName(QStringLiteral("removeBtn"));

        gridLayout->addWidget(removeBtn, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        ratingRangeLabel_2 = new QLabel(controls);
        ratingRangeLabel_2->setObjectName(QStringLiteral("ratingRangeLabel_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, ratingRangeLabel_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ratingFrom = new RatingWidget(controls);
        ratingFrom->setObjectName(QStringLiteral("ratingFrom"));

        horizontalLayout_2->addWidget(ratingFrom);

        ratingToLabel = new QLabel(controls);
        ratingToLabel->setObjectName(QStringLiteral("ratingToLabel"));

        horizontalLayout_2->addWidget(ratingToLabel);

        ratingTo = new RatingWidget(controls);
        ratingTo->setObjectName(QStringLiteral("ratingTo"));

        horizontalLayout_2->addWidget(ratingTo);

        rangeLabel = new QSpacerItem(2, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(rangeLabel);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        includeUnrated = new QCheckBox(controls);
        includeUnrated->setObjectName(QStringLiteral("includeUnrated"));

        formLayout->setWidget(1, QFormLayout::FieldRole, includeUnrated);

        label = new QLabel(controls);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        minDuration = new QSpinBox(controls);
        minDuration->setObjectName(QStringLiteral("minDuration"));
        minDuration->setMaximum(1800);
        minDuration->setSingleStep(10);

        horizontalLayout_3->addWidget(minDuration);

        rangeLabel2 = new QLabel(controls);
        rangeLabel2->setObjectName(QStringLiteral("rangeLabel2"));

        horizontalLayout_3->addWidget(rangeLabel2);

        maxDuration = new QSpinBox(controls);
        maxDuration->setObjectName(QStringLiteral("maxDuration"));
        maxDuration->setMaximum(1800);
        maxDuration->setSingleStep(10);

        horizontalLayout_3->addWidget(maxDuration);

        durationSpacer = new QSpacerItem(2, 2, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(durationSpacer);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);

        numberOfSongsLabel = new QLabel(controls);
        numberOfSongsLabel->setObjectName(QStringLiteral("numberOfSongsLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, numberOfSongsLabel);

        numTracks = new QSpinBox(controls);
        numTracks->setObjectName(QStringLiteral("numTracks"));
        numTracks->setSingleStep(10);

        formLayout->setWidget(3, QFormLayout::FieldRole, numTracks);

        maxAgeLabel = new QLabel(controls);
        maxAgeLabel->setObjectName(QStringLiteral("maxAgeLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, maxAgeLabel);

        maxAge = new QSpinBox(controls);
        maxAge->setObjectName(QStringLiteral("maxAge"));
        maxAge->setSingleStep(10);

        formLayout->setWidget(4, QFormLayout::FieldRole, maxAge);

        orderLabel = new QLabel(controls);
        orderLabel->setObjectName(QStringLiteral("orderLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, orderLabel);

        orderLayout = new QHBoxLayout();
        orderLayout->setObjectName(QStringLiteral("orderLayout"));
        order = new QComboBox(controls);
        order->setObjectName(QStringLiteral("order"));

        orderLayout->addWidget(order);

        orderAscending = new QComboBox(controls);
        orderAscending->setObjectName(QStringLiteral("orderAscending"));

        orderLayout->addWidget(orderAscending);


        formLayout->setLayout(5, QFormLayout::FieldRole, orderLayout);


        gridLayout->addLayout(formLayout, 4, 0, 1, 1);

        aboutLabel = new UrlLabel(controls);
        aboutLabel->setObjectName(QStringLiteral("aboutLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(aboutLabel->sizePolicy().hasHeightForWidth());
        aboutLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(aboutLabel, 6, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(220, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 7, 1, 1, 2);


        verticalLayout->addWidget(controls);


        retranslateUi(PlaylistRules);

        QMetaObject::connectSlotsByName(PlaylistRules);
    } // setupUi

    void retranslateUi(QWidget *PlaylistRules)
    {
        nameText->setProperty("placeholderText", QVariant(QApplication::translate("PlaylistRules", "Name of playlist", Q_NULLPTR)));
        addBtn->setText(QApplication::translate("PlaylistRules", "Add", Q_NULLPTR));
        editBtn->setText(QApplication::translate("PlaylistRules", "Edit", Q_NULLPTR));
        removeBtn->setText(QApplication::translate("PlaylistRules", "Remove", Q_NULLPTR));
        ratingRangeLabel_2->setText(QApplication::translate("PlaylistRules", "Songs with ratings between:", Q_NULLPTR));
        ratingToLabel->setText(QApplication::translate("PlaylistRules", " - ", Q_NULLPTR));
        includeUnrated->setText(QApplication::translate("PlaylistRules", "Include unrated", Q_NULLPTR));
        label->setText(QApplication::translate("PlaylistRules", "Songs with duration between:", Q_NULLPTR));
        minDuration->setSuffix(QApplication::translate("PlaylistRules", " seconds", Q_NULLPTR));
        rangeLabel2->setText(QApplication::translate("PlaylistRules", " - ", Q_NULLPTR));
        maxDuration->setSuffix(QApplication::translate("PlaylistRules", " seconds", Q_NULLPTR));
        numberOfSongsLabel->setText(QApplication::translate("PlaylistRules", "Number of songs in play queue:", Q_NULLPTR));
        maxAgeLabel->setText(QApplication::translate("PlaylistRules", "Files added in the last:", Q_NULLPTR));
        maxAge->setSuffix(QApplication::translate("PlaylistRules", " days", Q_NULLPTR));
        maxAge->setSpecialValueText(QApplication::translate("PlaylistRules", "No Limit", Q_NULLPTR));
        orderLabel->setText(QApplication::translate("PlaylistRules", "Order songs:", Q_NULLPTR));
        aboutLabel->setText(QApplication::translate("PlaylistRules", "About Rules", Q_NULLPTR));
        Q_UNUSED(PlaylistRules);
    } // retranslateUi

};

namespace Ui {
    class PlaylistRules: public Ui_PlaylistRules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTRULES_H

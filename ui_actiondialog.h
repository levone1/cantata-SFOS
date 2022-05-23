/********************************************************************************
** Form generated from reading UI file 'actiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONDIALOG_H
#define UI_ACTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "devices/splitlabelwidget.h"
#include "support/capacitybar.h"
#include "widgets/actionlabel.h"

QT_BEGIN_NAMESPACE

class Ui_ActionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stack;
    QWidget *page_5;
    QGridLayout *gridLayout_2;
    ActionLabel *fileSizeActionLabel;
    QSpacerItem *horizontalSpacer_6;
    QLabel *fileS;
    QProgressBar *fileSizeProgress;
    QWidget *page_7;
    QHBoxLayout *horizontalLayout_72;
    QLabel *sizeInfoIcon;
    QSpacerItem *horizontalSpacer_73;
    QLabel *sizeInfoText;
    QWidget *page;
    QFormLayout *formLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *sourceLabel;
    QToolButton *configureSourceButton;
    QLabel *configureSourceLabel;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *destinationLabel;
    QToolButton *configureDestButton;
    QLabel *configureDestLabel;
    QSpacerItem *horizontalSpacer;
    CapacityBar *capacity;
    QLabel *codecLabel;
    QLabel *codec;
    QCheckBox *overwrite;
    QLabel *songCountLabel;
    QLabel *songCount;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *errorIcon;
    QSpacerItem *horizontalSpacer_3;
    SplitLabelWidget *errorText;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *skipIcon;
    QSpacerItem *horizontalSpacer_4;
    SplitLabelWidget *skipText;
    QWidget *page_2;
    QGridLayout *gridLayout;
    ActionLabel *actionLabel;
    QSpacerItem *horizontalSpacer_5;
    SplitLabelWidget *progressLabel;
    QProgressBar *progressBar;

    void setupUi(QWidget *ActionDialog)
    {
        if (ActionDialog->objectName().isEmpty())
            ActionDialog->setObjectName(QStringLiteral("ActionDialog"));
        ActionDialog->resize(580, 186);
        verticalLayout = new QVBoxLayout(ActionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stack = new QStackedWidget(ActionDialog);
        stack->setObjectName(QStringLiteral("stack"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        gridLayout_2 = new QGridLayout(page_5);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        fileSizeActionLabel = new ActionLabel(page_5);
        fileSizeActionLabel->setObjectName(QStringLiteral("fileSizeActionLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fileSizeActionLabel->sizePolicy().hasHeightForWidth());
        fileSizeActionLabel->setSizePolicy(sizePolicy);
        fileSizeActionLabel->setMinimumSize(QSize(64, 64));
        fileSizeActionLabel->setMaximumSize(QSize(64, 64));

        gridLayout_2->addWidget(fileSizeActionLabel, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 1, 1, 1);

        fileS = new QLabel(page_5);
        fileS->setObjectName(QStringLiteral("fileS"));

        gridLayout_2->addWidget(fileS, 0, 2, 1, 1);

        fileSizeProgress = new QProgressBar(page_5);
        fileSizeProgress->setObjectName(QStringLiteral("fileSizeProgress"));
        fileSizeProgress->setValue(24);

        gridLayout_2->addWidget(fileSizeProgress, 1, 0, 1, 3);

        stack->addWidget(page_5);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        horizontalLayout_72 = new QHBoxLayout(page_7);
        horizontalLayout_72->setObjectName(QStringLiteral("horizontalLayout_72"));
        horizontalLayout_72->setContentsMargins(0, 0, 0, 0);
        sizeInfoIcon = new QLabel(page_7);
        sizeInfoIcon->setObjectName(QStringLiteral("sizeInfoIcon"));
        sizePolicy.setHeightForWidth(sizeInfoIcon->sizePolicy().hasHeightForWidth());
        sizeInfoIcon->setSizePolicy(sizePolicy);
        sizeInfoIcon->setMinimumSize(QSize(64, 64));
        sizeInfoIcon->setMaximumSize(QSize(64, 64));

        horizontalLayout_72->addWidget(sizeInfoIcon);

        horizontalSpacer_73 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_72->addItem(horizontalSpacer_73);

        sizeInfoText = new QLabel(page_7);
        sizeInfoText->setObjectName(QStringLiteral("sizeInfoText"));
        sizeInfoText->setWordWrap(true);

        horizontalLayout_72->addWidget(sizeInfoText);

        stack->addWidget(page_7);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        formLayout = new QFormLayout(page);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sourceLabel = new QLabel(page);
        sourceLabel->setObjectName(QStringLiteral("sourceLabel"));

        horizontalLayout_4->addWidget(sourceLabel);

        configureSourceButton = new QToolButton(page);
        configureSourceButton->setObjectName(QStringLiteral("configureSourceButton"));
        configureSourceButton->setAutoRaise(true);

        horizontalLayout_4->addWidget(configureSourceButton);

        configureSourceLabel = new QLabel(page);
        configureSourceLabel->setObjectName(QStringLiteral("configureSourceLabel"));
        QFont font;
        font.setItalic(true);
        configureSourceLabel->setFont(font);

        horizontalLayout_4->addWidget(configureSourceLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        destinationLabel = new QLabel(page);
        destinationLabel->setObjectName(QStringLiteral("destinationLabel"));

        horizontalLayout->addWidget(destinationLabel);

        configureDestButton = new QToolButton(page);
        configureDestButton->setObjectName(QStringLiteral("configureDestButton"));
        configureDestButton->setAutoRaise(true);

        horizontalLayout->addWidget(configureDestButton);

        configureDestLabel = new QLabel(page);
        configureDestLabel->setObjectName(QStringLiteral("configureDestLabel"));
        configureDestLabel->setFont(font);

        horizontalLayout->addWidget(configureDestLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        capacity = new CapacityBar(page);
        capacity->setObjectName(QStringLiteral("capacity"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(capacity->sizePolicy().hasHeightForWidth());
        capacity->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::FieldRole, capacity);

        codecLabel = new QLabel(page);
        codecLabel->setObjectName(QStringLiteral("codecLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, codecLabel);

        codec = new QLabel(page);
        codec->setObjectName(QStringLiteral("codec"));

        formLayout->setWidget(3, QFormLayout::FieldRole, codec);

        overwrite = new QCheckBox(page);
        overwrite->setObjectName(QStringLiteral("overwrite"));

        formLayout->setWidget(4, QFormLayout::FieldRole, overwrite);

        songCountLabel = new QLabel(page);
        songCountLabel->setObjectName(QStringLiteral("songCountLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, songCountLabel);

        songCount = new QLabel(page);
        songCount->setObjectName(QStringLiteral("songCount"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(songCount->sizePolicy().hasHeightForWidth());
        songCount->setSizePolicy(sizePolicy2);

        formLayout->setWidget(5, QFormLayout::FieldRole, songCount);

        stack->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        horizontalLayout_2 = new QHBoxLayout(page_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        errorIcon = new QLabel(page_3);
        errorIcon->setObjectName(QStringLiteral("errorIcon"));
        sizePolicy.setHeightForWidth(errorIcon->sizePolicy().hasHeightForWidth());
        errorIcon->setSizePolicy(sizePolicy);
        errorIcon->setMinimumSize(QSize(64, 64));
        errorIcon->setMaximumSize(QSize(64, 64));

        horizontalLayout_2->addWidget(errorIcon);

        horizontalSpacer_3 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        errorText = new SplitLabelWidget(page_3);
        errorText->setObjectName(QStringLiteral("errorText"));

        horizontalLayout_2->addWidget(errorText);

        stack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        horizontalLayout_3 = new QHBoxLayout(page_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        skipIcon = new QLabel(page_4);
        skipIcon->setObjectName(QStringLiteral("skipIcon"));
        sizePolicy.setHeightForWidth(skipIcon->sizePolicy().hasHeightForWidth());
        skipIcon->setSizePolicy(sizePolicy);
        skipIcon->setMinimumSize(QSize(64, 64));
        skipIcon->setMaximumSize(QSize(64, 64));

        horizontalLayout_3->addWidget(skipIcon);

        horizontalSpacer_4 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        skipText = new SplitLabelWidget(page_4);
        skipText->setObjectName(QStringLiteral("skipText"));

        horizontalLayout_3->addWidget(skipText);

        stack->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        actionLabel = new ActionLabel(page_2);
        actionLabel->setObjectName(QStringLiteral("actionLabel"));
        sizePolicy.setHeightForWidth(actionLabel->sizePolicy().hasHeightForWidth());
        actionLabel->setSizePolicy(sizePolicy);
        actionLabel->setMinimumSize(QSize(64, 64));
        actionLabel->setMaximumSize(QSize(64, 64));

        gridLayout->addWidget(actionLabel, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        progressLabel = new SplitLabelWidget(page_2);
        progressLabel->setObjectName(QStringLiteral("progressLabel"));

        gridLayout->addWidget(progressLabel, 0, 2, 1, 1);

        progressBar = new QProgressBar(page_2);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout->addWidget(progressBar, 1, 0, 1, 3);

        stack->addWidget(page_2);

        verticalLayout->addWidget(stack);

        QWidget::setTabOrder(configureDestButton, overwrite);

        retranslateUi(ActionDialog);

        stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ActionDialog);
    } // setupUi

    void retranslateUi(QWidget *ActionDialog)
    {
        fileS->setText(QApplication::translate("ActionDialog", "Calculating size of files to be copied, please wait...", Q_NULLPTR));
        label->setText(QApplication::translate("ActionDialog", "Copy songs from:", Q_NULLPTR));
        sourceLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        configureSourceButton->setToolTip(QApplication::translate("ActionDialog", "Configure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        configureSourceLabel->setText(QApplication::translate("ActionDialog", "(Needs configuring)", Q_NULLPTR));
        label_3->setText(QApplication::translate("ActionDialog", "Copy songs to:", Q_NULLPTR));
        destinationLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        configureDestButton->setToolTip(QApplication::translate("ActionDialog", "Configure", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        configureDestLabel->setText(QApplication::translate("ActionDialog", "(Needs configuring)", Q_NULLPTR));
        codecLabel->setText(QApplication::translate("ActionDialog", "Destination format:", Q_NULLPTR));
        codec->setText(QString());
        overwrite->setText(QApplication::translate("ActionDialog", "Overwrite songs", Q_NULLPTR));
        songCountLabel->setText(QApplication::translate("ActionDialog", "To copy:", Q_NULLPTR));
        Q_UNUSED(ActionDialog);
    } // retranslateUi

};

namespace Ui {
    class ActionDialog: public Ui_ActionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'trackorganiser.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKORGANISER_H
#define UI_TRACKORGANISER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/lineedit.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_TrackOrganiser
{
public:
    QVBoxLayout *verticalLayoutx;
    QVBoxLayout *verticalLayout;
    QGroupBox *optionsBox;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout;
    LineEdit *filenameScheme;
    QToolButton *configFilename;
    BuddyLabel *label_6;
    QCheckBox *vfatSafe;
    QCheckBox *asciiOnly;
    QCheckBox *replaceSpaces;
    QCheckBox *ignoreThe;
    QTreeWidget *files;
    UrlNoteLabel *ratingsNote;
    QProgressBar *progress;

    void setupUi(QWidget *TrackOrganiser)
    {
        if (TrackOrganiser->objectName().isEmpty())
            TrackOrganiser->setObjectName(QStringLiteral("TrackOrganiser"));
        TrackOrganiser->resize(551, 337);
        verticalLayoutx = new QVBoxLayout(TrackOrganiser);
        verticalLayoutx->setContentsMargins(0, 0, 0, 0);
        verticalLayoutx->setObjectName(QStringLiteral("verticalLayoutx"));
        verticalLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        verticalLayout->setContentsMargins(0, 0, 0, 0);
#endif
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        optionsBox = new QGroupBox(TrackOrganiser);
        optionsBox->setObjectName(QStringLiteral("optionsBox"));
        formLayout_2 = new QFormLayout(optionsBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        filenameScheme = new LineEdit(optionsBox);
        filenameScheme->setObjectName(QStringLiteral("filenameScheme"));
        filenameScheme->setMinimumSize(QSize(288, 0));
        filenameScheme->setReadOnly(true);

        horizontalLayout->addWidget(filenameScheme);

        configFilename = new QToolButton(optionsBox);
        configFilename->setObjectName(QStringLiteral("configFilename"));
        configFilename->setAutoRaise(true);

        horizontalLayout->addWidget(configFilename);


        formLayout_2->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        label_6 = new BuddyLabel(optionsBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_6);

        vfatSafe = new QCheckBox(optionsBox);
        vfatSafe->setObjectName(QStringLiteral("vfatSafe"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, vfatSafe);

        asciiOnly = new QCheckBox(optionsBox);
        asciiOnly->setObjectName(QStringLiteral("asciiOnly"));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, asciiOnly);

        replaceSpaces = new QCheckBox(optionsBox);
        replaceSpaces->setObjectName(QStringLiteral("replaceSpaces"));

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, replaceSpaces);

        ignoreThe = new QCheckBox(optionsBox);
        ignoreThe->setObjectName(QStringLiteral("ignoreThe"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, ignoreThe);


        verticalLayout->addWidget(optionsBox);

        files = new QTreeWidget(TrackOrganiser);
        files->setObjectName(QStringLiteral("files"));
        files->setAlternatingRowColors(true);
        files->setRootIsDecorated(false);
        files->setUniformRowHeights(true);
        files->setAllColumnsShowFocus(true);

        verticalLayout->addWidget(files);


        verticalLayoutx->addLayout(verticalLayout);

        ratingsNote = new UrlNoteLabel(TrackOrganiser);
        ratingsNote->setObjectName(QStringLiteral("ratingsNote"));

        verticalLayoutx->addWidget(ratingsNote);

        progress = new QProgressBar(TrackOrganiser);
        progress->setObjectName(QStringLiteral("progress"));

        verticalLayoutx->addWidget(progress);

#ifndef QT_NO_SHORTCUT
        label_6->setBuddy(filenameScheme);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(vfatSafe, asciiOnly);
        QWidget::setTabOrder(asciiOnly, replaceSpaces);
        QWidget::setTabOrder(replaceSpaces, ignoreThe);
        QWidget::setTabOrder(ignoreThe, filenameScheme);
        QWidget::setTabOrder(filenameScheme, configFilename);
        QWidget::setTabOrder(configFilename, files);

        retranslateUi(TrackOrganiser);

        QMetaObject::connectSlotsByName(TrackOrganiser);
    } // setupUi

    void retranslateUi(QWidget *TrackOrganiser)
    {
        optionsBox->setTitle(QApplication::translate("TrackOrganiser", "Filenames", Q_NULLPTR));
        label_6->setText(QApplication::translate("TrackOrganiser", "Filename scheme:", Q_NULLPTR));
        vfatSafe->setText(QApplication::translate("TrackOrganiser", "VFAT safe", Q_NULLPTR));
        asciiOnly->setText(QApplication::translate("TrackOrganiser", "Use only ASCII characters", Q_NULLPTR));
        replaceSpaces->setText(QApplication::translate("TrackOrganiser", "Replace spaces with underscores", Q_NULLPTR));
        ignoreThe->setText(QApplication::translate("TrackOrganiser", "Append 'The' to artist names", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = files->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("TrackOrganiser", "New Name", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("TrackOrganiser", "Original Name", Q_NULLPTR));
        ratingsNote->setProperty("text", QVariant(QApplication::translate("TrackOrganiser", "Ratings will be lost if a file is renamed.", Q_NULLPTR)));
        Q_UNUSED(TrackOrganiser);
    } // retranslateUi

};

namespace Ui {
    class TrackOrganiser: public Ui_TrackOrganiser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKORGANISER_H

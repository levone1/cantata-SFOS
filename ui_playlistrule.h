/********************************************************************************
** Form generated from reading UI file 'playlistrule.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLISTRULE_H
#define UI_PLAYLISTRULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "support/buddylabel.h"
#include "support/lineedit.h"
#include "widgets/completioncombo.h"
#include "widgets/notelabel.h"

QT_BEGIN_NAMESPACE

class Ui_PlaylistRule
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    BuddyLabel *label_9;
    QComboBox *typeCombo;
    BuddyLabel *label;
    CompletionCombo *artistText;
    BuddyLabel *similarArtistsTextLabel;
    CompletionCombo *similarArtistsText;
    BuddyLabel *label_2;
    CompletionCombo *albumArtistText;
    BuddyLabel *composerLabel;
    CompletionCombo *composerText;
    BuddyLabel *label_3;
    CompletionCombo *albumText;
    BuddyLabel *label_4;
    LineEdit *titleText;
    BuddyLabel *label_5;
    CompletionCombo *genreText;
    BuddyLabel *label_6;
    QSpinBox *dateFromSpin;
    BuddyLabel *label_6x;
    QSpinBox *dateToSpin;
    BuddyLabel *commentLabel;
    LineEdit *commentText;
    BuddyLabel *filenameLabel;
    LineEdit *filenameText;
    QCheckBox *exactCheck;
    QSpacerItem *verticalSpacer_3xx;
    QLabel *errorLabel;
    NoteLabel *label_7;
    NoteLabel *label_7y;
    NoteLabel *label_7x;
    QSpacerItem *verticalSpacer_3xy;

    void setupUi(QWidget *PlaylistRule)
    {
        if (PlaylistRule->objectName().isEmpty())
            PlaylistRule->setObjectName(QStringLiteral("PlaylistRule"));
        verticalLayout = new QVBoxLayout(PlaylistRule);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        label_9 = new BuddyLabel(PlaylistRule);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        typeCombo = new QComboBox(PlaylistRule);
        typeCombo->setObjectName(QStringLiteral("typeCombo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, typeCombo);

        label = new BuddyLabel(PlaylistRule);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        artistText = new CompletionCombo(PlaylistRule);
        artistText->setObjectName(QStringLiteral("artistText"));

        formLayout->setWidget(1, QFormLayout::FieldRole, artistText);

        similarArtistsTextLabel = new BuddyLabel(PlaylistRule);
        similarArtistsTextLabel->setObjectName(QStringLiteral("similarArtistsTextLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, similarArtistsTextLabel);

        similarArtistsText = new CompletionCombo(PlaylistRule);
        similarArtistsText->setObjectName(QStringLiteral("similarArtistsText"));

        formLayout->setWidget(2, QFormLayout::FieldRole, similarArtistsText);

        label_2 = new BuddyLabel(PlaylistRule);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        albumArtistText = new CompletionCombo(PlaylistRule);
        albumArtistText->setObjectName(QStringLiteral("albumArtistText"));

        formLayout->setWidget(3, QFormLayout::FieldRole, albumArtistText);

        composerLabel = new BuddyLabel(PlaylistRule);
        composerLabel->setObjectName(QStringLiteral("composerLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, composerLabel);

        composerText = new CompletionCombo(PlaylistRule);
        composerText->setObjectName(QStringLiteral("composerText"));

        formLayout->setWidget(4, QFormLayout::FieldRole, composerText);

        label_3 = new BuddyLabel(PlaylistRule);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        albumText = new CompletionCombo(PlaylistRule);
        albumText->setObjectName(QStringLiteral("albumText"));

        formLayout->setWidget(5, QFormLayout::FieldRole, albumText);

        label_4 = new BuddyLabel(PlaylistRule);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_4);

        titleText = new LineEdit(PlaylistRule);
        titleText->setObjectName(QStringLiteral("titleText"));

        formLayout->setWidget(6, QFormLayout::FieldRole, titleText);

        label_5 = new BuddyLabel(PlaylistRule);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_5);

        genreText = new CompletionCombo(PlaylistRule);
        genreText->setObjectName(QStringLiteral("genreText"));

        formLayout->setWidget(7, QFormLayout::FieldRole, genreText);

        label_6 = new BuddyLabel(PlaylistRule);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_6);

        dateFromSpin = new QSpinBox(PlaylistRule);
        dateFromSpin->setObjectName(QStringLiteral("dateFromSpin"));
        dateFromSpin->setMinimumSize(QSize(72, 0));

        formLayout->setWidget(8, QFormLayout::FieldRole, dateFromSpin);

        label_6x = new BuddyLabel(PlaylistRule);
        label_6x->setObjectName(QStringLiteral("label_6x"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_6x);

        dateToSpin = new QSpinBox(PlaylistRule);
        dateToSpin->setObjectName(QStringLiteral("dateToSpin"));
        dateToSpin->setMinimumSize(QSize(72, 0));

        formLayout->setWidget(9, QFormLayout::FieldRole, dateToSpin);

        commentLabel = new BuddyLabel(PlaylistRule);
        commentLabel->setObjectName(QStringLiteral("commentLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, commentLabel);

        commentText = new LineEdit(PlaylistRule);
        commentText->setObjectName(QStringLiteral("commentText"));

        formLayout->setWidget(10, QFormLayout::FieldRole, commentText);

        filenameLabel = new BuddyLabel(PlaylistRule);
        filenameLabel->setObjectName(QStringLiteral("filenameLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, filenameLabel);

        filenameText = new LineEdit(PlaylistRule);
        filenameText->setObjectName(QStringLiteral("filenameText"));

        formLayout->setWidget(11, QFormLayout::FieldRole, filenameText);

        exactCheck = new QCheckBox(PlaylistRule);
        exactCheck->setObjectName(QStringLiteral("exactCheck"));

        formLayout->setWidget(12, QFormLayout::SpanningRole, exactCheck);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_3xx = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3xx);

        errorLabel = new QLabel(PlaylistRule);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));

        verticalLayout->addWidget(errorLabel);

        label_7 = new NoteLabel(PlaylistRule);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout->addWidget(label_7);

        label_7y = new NoteLabel(PlaylistRule);
        label_7y->setObjectName(QStringLiteral("label_7y"));

        verticalLayout->addWidget(label_7y);

        label_7x = new NoteLabel(PlaylistRule);
        label_7x->setObjectName(QStringLiteral("label_7x"));

        verticalLayout->addWidget(label_7x);

        verticalSpacer_3xy = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_3xy);

#ifndef QT_NO_SHORTCUT
        label_9->setBuddy(typeCombo);
        label->setBuddy(artistText);
        similarArtistsTextLabel->setBuddy(similarArtistsText);
        label_2->setBuddy(albumArtistText);
        composerLabel->setBuddy(composerText);
        label_3->setBuddy(albumText);
        label_4->setBuddy(titleText);
        label_5->setBuddy(genreText);
        label_6->setBuddy(dateFromSpin);
        label_6x->setBuddy(dateToSpin);
        commentLabel->setBuddy(commentText);
        filenameLabel->setBuddy(filenameText);
#endif // QT_NO_SHORTCUT

        retranslateUi(PlaylistRule);

        QMetaObject::connectSlotsByName(PlaylistRule);
    } // setupUi

    void retranslateUi(QWidget *PlaylistRule)
    {
        label_9->setText(QApplication::translate("PlaylistRule", "Type:", Q_NULLPTR));
        typeCombo->clear();
        typeCombo->insertItems(0, QStringList()
         << QApplication::translate("PlaylistRule", "Include songs that match the following:", Q_NULLPTR)
         << QApplication::translate("PlaylistRule", "Exclude songs that match the following:", Q_NULLPTR)
        );
        label->setText(QApplication::translate("PlaylistRule", "Artist:", Q_NULLPTR));
        similarArtistsTextLabel->setText(QApplication::translate("PlaylistRule", "Artists similar to:", Q_NULLPTR));
        label_2->setText(QApplication::translate("PlaylistRule", "Album Artist:", Q_NULLPTR));
        composerLabel->setText(QApplication::translate("PlaylistRule", "Composer:", Q_NULLPTR));
        label_3->setText(QApplication::translate("PlaylistRule", "Album:", Q_NULLPTR));
        label_4->setText(QApplication::translate("PlaylistRule", "Title:", Q_NULLPTR));
        label_5->setText(QApplication::translate("PlaylistRule", "Genre", Q_NULLPTR));
        label_6->setText(QApplication::translate("PlaylistRule", "From Year:", Q_NULLPTR));
        dateFromSpin->setSpecialValueText(QApplication::translate("PlaylistRule", "Any", Q_NULLPTR));
        label_6x->setText(QApplication::translate("PlaylistRule", "To Year:", Q_NULLPTR));
        dateToSpin->setSpecialValueText(QApplication::translate("PlaylistRule", "Any", Q_NULLPTR));
        commentLabel->setText(QApplication::translate("PlaylistRule", "Comment:", Q_NULLPTR));
        filenameLabel->setText(QApplication::translate("PlaylistRule", "Filename / path:", Q_NULLPTR));
        exactCheck->setText(QApplication::translate("PlaylistRule", "Exact match", Q_NULLPTR));
        label_7->setText(QApplication::translate("PlaylistRule", "Only enter values for the tags you wish to be search on.", Q_NULLPTR));
        label_7y->setText(QApplication::translate("PlaylistRule", "If 'Exact match' is checked, then string values will be matched for exact values. Otherwise partial matches will also be inclued. e.g. 'AB' would match 'ABBA'.", Q_NULLPTR));
        label_7x->setText(QApplication::translate("PlaylistRule", "For genre, end string with an asterisk to match various genres. e.g 'rock*' matches 'Hard Rock' and 'Rock and Roll'.", Q_NULLPTR));
        Q_UNUSED(PlaylistRule);
    } // retranslateUi

};

namespace Ui {
    class PlaylistRule: public Ui_PlaylistRule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLISTRULE_H

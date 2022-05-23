/********************************************************************************
** Form generated from reading UI file 'tageditor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAGEDITOR_H
#define UI_TAGEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "support/lineedit.h"
#include "widgets/completioncombo.h"
#include "widgets/notelabel.h"
#include "widgets/ratingwidget.h"
#include "widgets/statelabel.h"
#include "widgets/tagspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_TagEditor
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    StateLabel *trackNameLabel;
    QComboBox *trackName;
    StateLabel *titleLabel;
    LineEdit *title;
    StateLabel *artistLabel;
    CompletionCombo *artist;
    StateLabel *albumArtistLabel;
    CompletionCombo *albumArtist;
    StateLabel *composerLabel;
    CompletionCombo *composer;
    StateLabel *albumLabel;
    CompletionCombo *album;
    StateLabel *trackLabel;
    TagSpinBox *track;
    StateLabel *discLabel;
    TagSpinBox *disc;
    StateLabel *genreLabel;
    CompletionCombo *genre;
    StateLabel *yearLabel;
    TagSpinBox *year;
    StateLabel *ratingLabel;
    QHBoxLayout *ratingLayout;
    RatingWidget *ratingWidget;
    QLabel *ratingVarious;
    StateLabel *commentLabel;
    LineEdit *comment;
    PlainNoteLabel *label_7x;
    PlainNoteLabel *ratingNoteLabel;
    QProgressBar *progress;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *TagEditor)
    {
        if (TagEditor->objectName().isEmpty())
            TagEditor->setObjectName(QStringLiteral("TagEditor"));
        TagEditor->resize(517, 490);
        verticalLayout = new QVBoxLayout(TagEditor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        trackNameLabel = new StateLabel(TagEditor);
        trackNameLabel->setObjectName(QStringLiteral("trackNameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, trackNameLabel);

        trackName = new QComboBox(TagEditor);
        trackName->setObjectName(QStringLiteral("trackName"));
        trackName->setFocusPolicy(Qt::NoFocus);
        trackName->setEditable(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, trackName);

        titleLabel = new StateLabel(TagEditor);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, titleLabel);

        title = new LineEdit(TagEditor);
        title->setObjectName(QStringLiteral("title"));

        formLayout->setWidget(1, QFormLayout::FieldRole, title);

        artistLabel = new StateLabel(TagEditor);
        artistLabel->setObjectName(QStringLiteral("artistLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, artistLabel);

        artist = new CompletionCombo(TagEditor);
        artist->setObjectName(QStringLiteral("artist"));

        formLayout->setWidget(2, QFormLayout::FieldRole, artist);

        albumArtistLabel = new StateLabel(TagEditor);
        albumArtistLabel->setObjectName(QStringLiteral("albumArtistLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, albumArtistLabel);

        albumArtist = new CompletionCombo(TagEditor);
        albumArtist->setObjectName(QStringLiteral("albumArtist"));

        formLayout->setWidget(3, QFormLayout::FieldRole, albumArtist);

        composerLabel = new StateLabel(TagEditor);
        composerLabel->setObjectName(QStringLiteral("composerLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, composerLabel);

        composer = new CompletionCombo(TagEditor);
        composer->setObjectName(QStringLiteral("composer"));

        formLayout->setWidget(4, QFormLayout::FieldRole, composer);

        albumLabel = new StateLabel(TagEditor);
        albumLabel->setObjectName(QStringLiteral("albumLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, albumLabel);

        album = new CompletionCombo(TagEditor);
        album->setObjectName(QStringLiteral("album"));

        formLayout->setWidget(5, QFormLayout::FieldRole, album);

        trackLabel = new StateLabel(TagEditor);
        trackLabel->setObjectName(QStringLiteral("trackLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, trackLabel);

        track = new TagSpinBox(TagEditor);
        track->setObjectName(QStringLiteral("track"));

        formLayout->setWidget(6, QFormLayout::FieldRole, track);

        discLabel = new StateLabel(TagEditor);
        discLabel->setObjectName(QStringLiteral("discLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, discLabel);

        disc = new TagSpinBox(TagEditor);
        disc->setObjectName(QStringLiteral("disc"));

        formLayout->setWidget(7, QFormLayout::FieldRole, disc);

        genreLabel = new StateLabel(TagEditor);
        genreLabel->setObjectName(QStringLiteral("genreLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, genreLabel);

        genre = new CompletionCombo(TagEditor);
        genre->setObjectName(QStringLiteral("genre"));

        formLayout->setWidget(8, QFormLayout::FieldRole, genre);

        yearLabel = new StateLabel(TagEditor);
        yearLabel->setObjectName(QStringLiteral("yearLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, yearLabel);

        year = new TagSpinBox(TagEditor);
        year->setObjectName(QStringLiteral("year"));

        formLayout->setWidget(9, QFormLayout::FieldRole, year);

        ratingLabel = new StateLabel(TagEditor);
        ratingLabel->setObjectName(QStringLiteral("ratingLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, ratingLabel);

        ratingLayout = new QHBoxLayout();
        ratingLayout->setObjectName(QStringLiteral("ratingLayout"));
        ratingWidget = new RatingWidget(TagEditor);
        ratingWidget->setObjectName(QStringLiteral("ratingWidget"));

        ratingLayout->addWidget(ratingWidget);

        ratingVarious = new QLabel(TagEditor);
        ratingVarious->setObjectName(QStringLiteral("ratingVarious"));

        ratingLayout->addWidget(ratingVarious);


        formLayout->setLayout(10, QFormLayout::FieldRole, ratingLayout);

        commentLabel = new StateLabel(TagEditor);
        commentLabel->setObjectName(QStringLiteral("commentLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, commentLabel);

        comment = new LineEdit(TagEditor);
        comment->setObjectName(QStringLiteral("comment"));

        formLayout->setWidget(11, QFormLayout::FieldRole, comment);


        verticalLayout->addLayout(formLayout);

        label_7x = new PlainNoteLabel(TagEditor);
        label_7x->setObjectName(QStringLiteral("label_7x"));

        verticalLayout->addWidget(label_7x);

        ratingNoteLabel = new PlainNoteLabel(TagEditor);
        ratingNoteLabel->setObjectName(QStringLiteral("ratingNoteLabel"));

        verticalLayout->addWidget(ratingNoteLabel);

        progress = new QProgressBar(TagEditor);
        progress->setObjectName(QStringLiteral("progress"));

        verticalLayout->addWidget(progress);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

#ifndef QT_NO_SHORTCUT
        trackNameLabel->setBuddy(trackName);
        titleLabel->setBuddy(title);
        artistLabel->setBuddy(artist);
        albumArtistLabel->setBuddy(albumArtist);
        composerLabel->setBuddy(composer);
        albumLabel->setBuddy(album);
        trackLabel->setBuddy(track);
        discLabel->setBuddy(disc);
        genreLabel->setBuddy(genre);
        yearLabel->setBuddy(year);
        ratingLabel->setBuddy(ratingWidget);
        commentLabel->setBuddy(comment);
#endif // QT_NO_SHORTCUT

        retranslateUi(TagEditor);

        QMetaObject::connectSlotsByName(TagEditor);
    } // setupUi

    void retranslateUi(QWidget *TagEditor)
    {
        trackNameLabel->setText(QApplication::translate("TagEditor", "Track:", Q_NULLPTR));
        titleLabel->setText(QApplication::translate("TagEditor", "Title:", Q_NULLPTR));
        artistLabel->setText(QApplication::translate("TagEditor", "Artist:", Q_NULLPTR));
        albumArtistLabel->setText(QApplication::translate("TagEditor", "Album artist:", Q_NULLPTR));
        composerLabel->setText(QApplication::translate("TagEditor", "Composer:", Q_NULLPTR));
        albumLabel->setText(QApplication::translate("TagEditor", "Album:", Q_NULLPTR));
        trackLabel->setText(QApplication::translate("TagEditor", "Track number:", Q_NULLPTR));
        discLabel->setText(QApplication::translate("TagEditor", "Disc number:", Q_NULLPTR));
        genreLabel->setText(QApplication::translate("TagEditor", "Genre:", Q_NULLPTR));
        yearLabel->setText(QApplication::translate("TagEditor", "Year:", Q_NULLPTR));
        ratingLabel->setText(QApplication::translate("TagEditor", "Rating:", Q_NULLPTR));
        ratingVarious->setText(QApplication::translate("TagEditor", "<i>(Various)</i>", Q_NULLPTR));
        commentLabel->setText(QApplication::translate("TagEditor", "Comment:", Q_NULLPTR));
        label_7x->setText(QApplication::translate("TagEditor", "Multiple genres should be separated via a comma (e.g. 'Rock,Hard Rock')", Q_NULLPTR));
        ratingNoteLabel->setText(QApplication::translate("TagEditor", "Ratings are stored in an external database, and <b>not</b> in the song's file.", Q_NULLPTR));
        Q_UNUSED(TagEditor);
    } // retranslateUi

};

namespace Ui {
    class TagEditor: public Ui_TagEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAGEDITOR_H

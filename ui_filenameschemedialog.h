/********************************************************************************
** Form generated from reading UI file 'filenameschemedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILENAMESCHEMEDIALOG_H
#define UI_FILENAMESCHEMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "support/lineedit.h"
#include "support/urllabel.h"

QT_BEGIN_NAMESPACE

class Ui_FilenameSchemeDialog
{
public:
    QGridLayout *gridLayout;
    LineEdit *pattern;
    QLabel *label_album_example;
    LineEdit *example;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    UrlLabel *help;
    QPushButton *albumArtist;
    QPushButton *albumTitle;
    QPushButton *composer;
    QPushButton *trackArtist;
    QPushButton *trackTitle;
    QPushButton *trackArtistAndTitle;
    QPushButton *trackNo;
    QPushButton *cdNo;
    QPushButton *year;
    QPushButton *genre;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FilenameSchemeDialog)
    {
        if (FilenameSchemeDialog->objectName().isEmpty())
            FilenameSchemeDialog->setObjectName(QStringLiteral("FilenameSchemeDialog"));
        FilenameSchemeDialog->resize(504, 180);
        gridLayout = new QGridLayout(FilenameSchemeDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pattern = new LineEdit(FilenameSchemeDialog);
        pattern->setObjectName(QStringLiteral("pattern"));

        gridLayout->addWidget(pattern, 0, 0, 1, 5);

        label_album_example = new QLabel(FilenameSchemeDialog);
        label_album_example->setObjectName(QStringLiteral("label_album_example"));
        label_album_example->setMaximumSize(QSize(16777215, 21));

        gridLayout->addWidget(label_album_example, 1, 0, 1, 1);

        example = new LineEdit(FilenameSchemeDialog);
        example->setObjectName(QStringLiteral("example"));
        example->setReadOnly(true);

        gridLayout->addWidget(example, 2, 0, 1, 5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        help = new UrlLabel(FilenameSchemeDialog);
        help->setObjectName(QStringLiteral("help"));
        help->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(help);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 5);

        albumArtist = new QPushButton(FilenameSchemeDialog);
        albumArtist->setObjectName(QStringLiteral("albumArtist"));

        gridLayout->addWidget(albumArtist, 4, 0, 1, 1);

        albumTitle = new QPushButton(FilenameSchemeDialog);
        albumTitle->setObjectName(QStringLiteral("albumTitle"));

        gridLayout->addWidget(albumTitle, 4, 1, 1, 1);

        composer = new QPushButton(FilenameSchemeDialog);
        composer->setObjectName(QStringLiteral("composer"));

        gridLayout->addWidget(composer, 4, 2, 1, 1);

        trackArtist = new QPushButton(FilenameSchemeDialog);
        trackArtist->setObjectName(QStringLiteral("trackArtist"));

        gridLayout->addWidget(trackArtist, 4, 3, 1, 1);

        trackTitle = new QPushButton(FilenameSchemeDialog);
        trackTitle->setObjectName(QStringLiteral("trackTitle"));

        gridLayout->addWidget(trackTitle, 4, 4, 1, 1);

        trackArtistAndTitle = new QPushButton(FilenameSchemeDialog);
        trackArtistAndTitle->setObjectName(QStringLiteral("trackArtistAndTitle"));
        trackArtistAndTitle->setMinimumSize(QSize(0, 0));
        trackArtistAndTitle->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(trackArtistAndTitle, 5, 0, 1, 1);

        trackNo = new QPushButton(FilenameSchemeDialog);
        trackNo->setObjectName(QStringLiteral("trackNo"));

        gridLayout->addWidget(trackNo, 5, 1, 1, 1);

        cdNo = new QPushButton(FilenameSchemeDialog);
        cdNo->setObjectName(QStringLiteral("cdNo"));

        gridLayout->addWidget(cdNo, 5, 2, 1, 1);

        year = new QPushButton(FilenameSchemeDialog);
        year->setObjectName(QStringLiteral("year"));

        gridLayout->addWidget(year, 5, 3, 1, 1);

        genre = new QPushButton(FilenameSchemeDialog);
        genre->setObjectName(QStringLiteral("genre"));

        gridLayout->addWidget(genre, 5, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 2);


        retranslateUi(FilenameSchemeDialog);

        QMetaObject::connectSlotsByName(FilenameSchemeDialog);
    } // setupUi

    void retranslateUi(QWidget *FilenameSchemeDialog)
    {
        label_album_example->setText(QApplication::translate("FilenameSchemeDialog", "Example:", Q_NULLPTR));
        help->setText(QApplication::translate("FilenameSchemeDialog", "About filename schemes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        albumArtist->setToolTip(QApplication::translate("FilenameSchemeDialog", "The artist of the album. For most albums, this will be the same as the <i>Track Artist.</i> For compilations, this will often be <i>Various Artists.</i>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        albumArtist->setText(QApplication::translate("FilenameSchemeDialog", "Album Artist", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        albumTitle->setToolTip(QApplication::translate("FilenameSchemeDialog", "The name of the album.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        albumTitle->setText(QApplication::translate("FilenameSchemeDialog", "Album Title", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        composer->setToolTip(QApplication::translate("FilenameSchemeDialog", "The composer.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        composer->setText(QApplication::translate("FilenameSchemeDialog", "Composer", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        trackArtist->setToolTip(QApplication::translate("FilenameSchemeDialog", "The artist of each track.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        trackArtist->setText(QApplication::translate("FilenameSchemeDialog", "Track Artist", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        trackTitle->setToolTip(QApplication::translate("FilenameSchemeDialog", "The track title (without <i>Track Artist</i>).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        trackTitle->setText(QApplication::translate("FilenameSchemeDialog", "Track Title", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        trackArtistAndTitle->setToolTip(QApplication::translate("FilenameSchemeDialog", "The track title (with <i>Track Artist</i>, if different to <i>Album Artist</i>).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        trackArtistAndTitle->setText(QApplication::translate("FilenameSchemeDialog", "Track Title (+Artist)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        trackNo->setToolTip(QApplication::translate("FilenameSchemeDialog", "The track number.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        trackNo->setText(QApplication::translate("FilenameSchemeDialog", "Track #", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cdNo->setToolTip(QApplication::translate("FilenameSchemeDialog", "The album number of a multi-album album. Often compilations consist of several albums.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cdNo->setText(QApplication::translate("FilenameSchemeDialog", "CD #", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        year->setToolTip(QApplication::translate("FilenameSchemeDialog", "The year of the album's release.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        year->setText(QApplication::translate("FilenameSchemeDialog", "Year", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        genre->setToolTip(QApplication::translate("FilenameSchemeDialog", "The genre of the album.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        genre->setText(QApplication::translate("FilenameSchemeDialog", "Genre", Q_NULLPTR));
        Q_UNUSED(FilenameSchemeDialog);
    } // retranslateUi

};

namespace Ui {
    class FilenameSchemeDialog: public Ui_FilenameSchemeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILENAMESCHEMEDIALOG_H

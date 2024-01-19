/********************************************************************************
** Form generated from reading UI file 'designer_gui.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGNER_GUI_H
#define UI_DESIGNER_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_designer_gui
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *movieListWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *titleLineEdit;
    QLineEdit *nrOfLikesLineEdit;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *trailerLineEdit;
    QLabel *label_2;
    QLineEdit *genreLineEdit;
    QLineEdit *releaseYearLineEdit;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *deleteButton;
    QPushButton *addButton;
    QPushButton *updateButton;
    QPushButton *filterButton;
    QLabel *label_7;
    QListWidget *watchListWidget;
    QLabel *label_8;
    QLineEdit *genrePlayListButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *playButton;
    QPushButton *removePlaylist;
    QLineEdit *trailerRemove2;

    void setupUi(QWidget *designer_gui)
    {
        if (designer_gui->objectName().isEmpty())
            designer_gui->setObjectName("designer_gui");
        designer_gui->resize(1032, 917);
        verticalLayout = new QVBoxLayout(designer_gui);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(designer_gui);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        movieListWidget = new QListWidget(designer_gui);
        movieListWidget->setObjectName("movieListWidget");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei Light")});
        font1.setPointSize(11);
        movieListWidget->setFont(font1);

        verticalLayout->addWidget(movieListWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(designer_gui);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setPointSize(10);
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        titleLineEdit = new QLineEdit(designer_gui);
        titleLineEdit->setObjectName("titleLineEdit");

        gridLayout->addWidget(titleLineEdit, 0, 1, 1, 1);

        nrOfLikesLineEdit = new QLineEdit(designer_gui);
        nrOfLikesLineEdit->setObjectName("nrOfLikesLineEdit");

        gridLayout->addWidget(nrOfLikesLineEdit, 3, 1, 1, 1);

        label_6 = new QLabel(designer_gui);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_5 = new QLabel(designer_gui);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        trailerLineEdit = new QLineEdit(designer_gui);
        trailerLineEdit->setObjectName("trailerLineEdit");

        gridLayout->addWidget(trailerLineEdit, 4, 1, 1, 1);

        label_2 = new QLabel(designer_gui);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        genreLineEdit = new QLineEdit(designer_gui);
        genreLineEdit->setObjectName("genreLineEdit");

        gridLayout->addWidget(genreLineEdit, 1, 1, 1, 1);

        releaseYearLineEdit = new QLineEdit(designer_gui);
        releaseYearLineEdit->setObjectName("releaseYearLineEdit");

        gridLayout->addWidget(releaseYearLineEdit, 2, 1, 1, 1);

        label_3 = new QLabel(designer_gui);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        deleteButton = new QPushButton(designer_gui);
        deleteButton->setObjectName("deleteButton");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("HoloLens MDL2 Assets")});
        deleteButton->setFont(font3);

        horizontalLayout->addWidget(deleteButton);

        addButton = new QPushButton(designer_gui);
        addButton->setObjectName("addButton");
        addButton->setFont(font3);

        horizontalLayout->addWidget(addButton);

        updateButton = new QPushButton(designer_gui);
        updateButton->setObjectName("updateButton");
        updateButton->setFont(font3);

        horizontalLayout->addWidget(updateButton);

        filterButton = new QPushButton(designer_gui);
        filterButton->setObjectName("filterButton");
        filterButton->setFont(font3);

        horizontalLayout->addWidget(filterButton);


        verticalLayout->addLayout(horizontalLayout);

        label_7 = new QLabel(designer_gui);
        label_7->setObjectName("label_7");
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        label_7->setFont(font4);

        verticalLayout->addWidget(label_7);

        watchListWidget = new QListWidget(designer_gui);
        watchListWidget->setObjectName("watchListWidget");

        verticalLayout->addWidget(watchListWidget);

        label_8 = new QLabel(designer_gui);
        label_8->setObjectName("label_8");
        QFont font5;
        font5.setFamilies({QString::fromUtf8("MS Reference Sans Serif")});
        font5.setPointSize(11);
        font5.setBold(false);
        font5.setItalic(false);
        label_8->setFont(font5);

        verticalLayout->addWidget(label_8);

        genrePlayListButton = new QLineEdit(designer_gui);
        genrePlayListButton->setObjectName("genrePlayListButton");

        verticalLayout->addWidget(genrePlayListButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        playButton = new QPushButton(designer_gui);
        playButton->setObjectName("playButton");
        QFont font6;
        font6.setItalic(true);
        playButton->setFont(font6);

        horizontalLayout_2->addWidget(playButton);

        removePlaylist = new QPushButton(designer_gui);
        removePlaylist->setObjectName("removePlaylist");
        removePlaylist->setFont(font6);

        horizontalLayout_2->addWidget(removePlaylist);

        trailerRemove2 = new QLineEdit(designer_gui);
        trailerRemove2->setObjectName("trailerRemove2");

        horizontalLayout_2->addWidget(trailerRemove2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(designer_gui);

        QMetaObject::connectSlotsByName(designer_gui);
    } // setupUi

    void retranslateUi(QWidget *designer_gui)
    {
        designer_gui->setWindowTitle(QCoreApplication::translate("designer_gui", "designer_gui", nullptr));
        label->setText(QCoreApplication::translate("designer_gui", "Movie database", nullptr));
        label_4->setText(QCoreApplication::translate("designer_gui", "Year of release : ", nullptr));
        label_6->setText(QCoreApplication::translate("designer_gui", "Trailer : ", nullptr));
        label_5->setText(QCoreApplication::translate("designer_gui", "Number of likes : ", nullptr));
        label_2->setText(QCoreApplication::translate("designer_gui", "Title : ", nullptr));
        label_3->setText(QCoreApplication::translate("designer_gui", "Genre : ", nullptr));
        deleteButton->setText(QCoreApplication::translate("designer_gui", "Delete movie", nullptr));
        addButton->setText(QCoreApplication::translate("designer_gui", "Add movie", nullptr));
        updateButton->setText(QCoreApplication::translate("designer_gui", "Update movie", nullptr));
        filterButton->setText(QCoreApplication::translate("designer_gui", "Filter movie", nullptr));
        label_7->setText(QCoreApplication::translate("designer_gui", "Playlist", nullptr));
        label_8->setText(QCoreApplication::translate("designer_gui", "Input the preffered genre : ", nullptr));
        playButton->setText(QCoreApplication::translate("designer_gui", "Play movie", nullptr));
        removePlaylist->setText(QCoreApplication::translate("designer_gui", "Remove playlist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class designer_gui: public Ui_designer_gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGNER_GUI_H

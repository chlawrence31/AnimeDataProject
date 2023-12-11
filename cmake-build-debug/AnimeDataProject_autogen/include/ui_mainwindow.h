/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *_1;
    QLabel *_2;
    QLabel *_3;
    QLabel *_4;
    QLabel *_5;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *prioritizationsLabel;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *genreBox;
    QCheckBox *ratingBox;
    QCheckBox *epBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(726, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Anime Inept")});
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(340, 120, 281, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        _1 = new QLabel(layoutWidget);
        _1->setObjectName("_1");

        verticalLayout->addWidget(_1);

        _2 = new QLabel(layoutWidget);
        _2->setObjectName("_2");

        verticalLayout->addWidget(_2);

        _3 = new QLabel(layoutWidget);
        _3->setObjectName("_3");

        verticalLayout->addWidget(_3);

        _4 = new QLabel(layoutWidget);
        _4->setObjectName("_4");

        verticalLayout->addWidget(_4);

        _5 = new QLabel(layoutWidget);
        _5->setObjectName("_5");

        verticalLayout->addWidget(_5);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 80, 211, 41));
        lineEdit->setReadOnly(false);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 50, 171, 16));
        label->setFont(font);
        prioritizationsLabel = new QLabel(centralwidget);
        prioritizationsLabel->setObjectName("prioritizationsLabel");
        prioritizationsLabel->setGeometry(QRect(40, 210, 191, 16));
        prioritizationsLabel->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 460, 211, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 380, 221, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(340, 80, 151, 16));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 260, 119, 98));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        genreBox = new QCheckBox(widget);
        genreBox->setObjectName("genreBox");

        verticalLayout_2->addWidget(genreBox);

        ratingBox = new QCheckBox(widget);
        ratingBox->setObjectName("ratingBox");

        verticalLayout_2->addWidget(ratingBox);

        epBox = new QCheckBox(widget);
        epBox->setObjectName("epBox");

        verticalLayout_2->addWidget(epBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 726, 27));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
#if QT_CONFIG(shortcut)
        _1->setBuddy(_1);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);
        QObject::connect(lineEdit, &QLineEdit::returnPressed, lineEdit, qOverload<>(&QLineEdit::copy));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        _1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        _2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        _3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        _4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        _5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lineEdit->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Enter Anime here", nullptr));
        prioritizationsLabel->setText(QCoreApplication::translate("MainWindow", "Select Prioritizations", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Click to show Recommendations", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number of Anime Entered:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Recommendations:", nullptr));
        genreBox->setText(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        ratingBox->setText(QCoreApplication::translate("MainWindow", "Rating", nullptr));
        epBox->setText(QCoreApplication::translate("MainWindow", "Episode Count", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

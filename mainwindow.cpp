#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QEvent>
#include "RecommendAnime.h"



void MainWindow::onReturnPressed(){

        QString text = ui->lineEdit->text();
        text.erase(remove(text.begin(), text.end(), '\"'), text.end());
        string anime = text.toStdString();

        if(validAnime(anime)){
            numInput++;
            invalidLabel->hide();
            label->clear();
            Anime* inputtedAnime;

            inputtedAnime = data.animeList[anime];
            animeInput.push_back(inputtedAnime);
            data.printAnimeInfo(inputtedAnime);

            label->setText(QString::number(numInput));
        } else {
            invalidLabel->show();

        }

        ui->lineEdit->clear();
        qDebug() << "The user entered the following text:" << text;


}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    numInput = 0;
    label = new QLabel(this);
    label->setText(QString::number(numInput));
    invalidLabel = new QLabel(this);
    invalidLabel->hide();
    invalidLabel->setText("Invalid Anime");
    label->show();
    ui->_1->hide();
    ui->_2->hide();
    ui->_3->hide();
    ui->_4->hide();
    ui->_5->hide();


    invalidLabel->setGeometry(40, 150, 200, 16);
    label->setGeometry(40, 425, 200, 16);
    data.loadData();


    connect(ui->lineEdit, &QLineEdit::returnPressed, this, &MainWindow::onReturnPressed);
    connect(ui->pushButton, &QPushButton::pressed, this, &MainWindow::buttonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateRecommendations(string one, string two, string three, string four, string five) {
    ui->_1->setText(QString::fromStdString(one));
    ui->_2->setText(QString::fromStdString(two));
    ui->_3->setText(QString::fromStdString(three));
    ui->_4->setText(QString::fromStdString(four));
    ui->_5->setText(QString::fromStdString(five));
}

bool MainWindow::validAnime(string anime) {

    auto it = data.animeList.find(anime);

    if(it != data.animeList.end())
    {
        return true;
    } else{
        return false;
    }
}

void MainWindow::buttonClicked() {
    if(animeInput.size() != 0){
        // get the prioritizations
        bool genreChecked = ui->genreBox->isChecked();
        bool ratingChecked = ui->ratingBox->isChecked();
        bool epChecked = ui->epBox->isChecked();

        recommendations.recommendationPrioritizations[0] = genreChecked;
        recommendations.recommendationPrioritizations[1] = ratingChecked;
        recommendations.recommendationPrioritizations[2] = epChecked;
        recommendations.calculateRecommendations(animeInput, 5);
        QList<QLabel*> labelsList = {ui->_1, ui->_2, ui->_3, ui->_4, ui->_5};
        for (int i = 0; i < 5; i++) {

            // Find the label by its object name
            labelsList[i]->setText(QString::number(i + 1) + ": " + QString::fromStdString(recommendations.recommendationList[i]->name));
            labelsList[i]->show();

        }

    } else {
        ui->_1->setText(QString::fromStdString("No input Animes"));
    }

    ui->_1->show();

}






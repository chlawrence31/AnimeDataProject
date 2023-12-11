#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QEvent>
#include "RecommendAnime.h"


void MainWindow::onReturnPressed(){

        label->clear();

        QString text = ui->lineEdit->text();
        text.erase(remove(text.begin(), text.end(), '\"'), text.end());
        string anime = text.toStdString();

        if(validAnime(anime)){
            Anime* inputtedAnime;

            inputtedAnime = data.animeList[anime];
            animeInput.push_back(inputtedAnime);
            data.printAnimeInfo(inputtedAnime);

            QString text2 = "Entered Anime: " + text;
            label->setText(text2);
        } else {
            label->setText("Invalid Anime");

        }

        ui->lineEdit->clear();
        qDebug() << "The user entered the following text:" << text;


}


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    label = new QLabel(this);
    label->show();
    label->setGeometry(70, 100, 200, 16);
    data.loadData();


    connect(ui->lineEdit, &QLineEdit::returnPressed, this, &MainWindow::onReturnPressed);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateRecommendations(string one, string two, string three, string four, string five) {
    ui->one->setText(QString::fromStdString(one));
    ui->two->setText(QString::fromStdString(two));
    ui->three->setText(QString::fromStdString(three));
    ui->four->setText(QString::fromStdString(four));
    ui->five->setText(QString::fromStdString(five));
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






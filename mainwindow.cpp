#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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



    ui->textEdit->setPlaceholderText(QString::fromStdString("Enter Movies Here"));


}

void MainWindow::keyPressEvent(QKeyEvent *event) {
    qDebug() << "Key Pressed: " << (char)event->key();
    if(event->key() == Qt::Key_U){
        ui->one->setText(QString::fromStdString("U"));
    }
}




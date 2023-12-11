#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <QLabel>
#include "RecommendAnime.h"
#include "ReadData.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

using namespace std;

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QLabel* label; // show the input anime that was entered
    QLabel* invalidLabel;
    int numInput;
    ReadData data;
    RecommendAnime recommendations;

    vector<Anime*> animeInput;
    void updateRecommendations(string one, string two, string three, string four, string five);
    bool validAnime(string anime); // check if an entered anime is valid


private:
    Ui::MainWindow *ui;
    void onReturnPressed();
    void buttonClicked();




};
#endif // MAINWINDOW_H

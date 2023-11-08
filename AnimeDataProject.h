#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AnimeDataProject.h"
#include <string>

using namespace std;

class AnimeDataProject : public QMainWindow
{
    Q_OBJECT

public:
    AnimeDataProject(QWidget *parent = nullptr);
    ~AnimeDataProject();

    void updateRecommendations(string one, string two, string three, string four, string five);
private:
    Ui::AnimeDataProject ui;
};

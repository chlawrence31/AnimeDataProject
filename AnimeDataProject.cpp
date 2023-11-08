#include "AnimeDataProject.h"
#include "ReadData.h"
#include <QString>

AnimeDataProject::AnimeDataProject(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

AnimeDataProject::~AnimeDataProject()
{}



void AnimeDataProject::updateRecommendations(string one, string two, string three, string four, string five)
{
    ui.one->setText(QString::fromStdString(one));
    ui.two->setText(QString::fromStdString(two));
    ui.three->setText(QString::fromStdString(three));
    ui.four->setText(QString::fromStdString(four));
    ui.label_12->setText(QString::fromStdString(five));

}

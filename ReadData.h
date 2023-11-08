#pragma once
#include "Anime.h"

using namespace std;

class ReadData
{

public:
    vector<Anime*> animeObj;

    void loadData();
    void printData();
    ~ReadData();

};

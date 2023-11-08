#include "ReadData.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

void ReadData::loadData()
{
    ifstream file("anime-dataset-2023.csv", ios::in | ios_base::binary);

    if (file.is_open()) {
        cout << "file opened" << endl;

        vector<string> ids;
        vector<string> names;
        vector<string> scores;
        vector<string> genres;
        vector<string> episodes;

        // Read and process each line in the CSV file
        std::string line;
        bool firstLine = true;
        while (std::getline(file, line)) {
            // Use a stringstream to split the line into columns
            if (!firstLine) {
                Anime* anime = new Anime;
                std::stringstream ss(line);
                std::string value;

                // Read and store each column's value
                std::getline(ss, value, ',');
                ids.push_back(value);
                anime->id = stoi(value);


                std::getline(ss, value, ',');
                names.push_back(value);
                anime->name = value;

                // value is sometimes "unknown", in this case, it cannot be converted to an integer

                std::getline(ss, value, ',');
                scores.push_back(value);


                anime->rating = value;

                char ch;
                // must check if it has quotes. if it doesn't, there's only one genre
                ss.get(ch);
                if (ch != '"') {

                    std::getline(ss, value, ',');
                    value = ch + value;
                }
                else {
                    std::getline(ss, value, '"');
                }
                genres.push_back(value);
                string singleGenre;
                std::stringstream genresStream(value);
                while (getline(genresStream, singleGenre, ',')) {
                    anime->genres.push_back(singleGenre);
                }



                std::getline(ss, value, ',');
                std::getline(ss, value, ',');
                episodes.push_back(value);
                anime->episodes = value;

                animeObj.push_back(anime);


            }
            firstLine = false;


        }

        // Close the file
        file.close();

        // Example: Print the values from each column


        // You now have the data from each column stored in the vectors
        // You can process and manipulate the data as needed


    }
    else {
        cout << "file did not open" << endl;
    }



}

void ReadData::printData()
{
    for (int i = 0; i < animeObj.size(); i++) {
        std::cout << "ID: " << animeObj[i]->id << " | ";
        std::cout << "Name: " << animeObj[i]->name << " | ";
        std::cout << "Score: " << animeObj[i]->rating << " | ";
        cout << "Genres: ";
        for (int j = 0; j < animeObj[i]->genres.size(); j++) {
            std::cout  << animeObj[i]->genres[j] << " ";
        }
        cout << " | ";

        std::cout << "Episodes: " << animeObj[i]->episodes << std::endl;

    }

}

ReadData::~ReadData()
{
    for (size_t i = 0; i < animeObj.size(); i++) {
        delete animeObj[i];
    }
    animeObj.clear(); // Clear the vector to remove the pointers
}

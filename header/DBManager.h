#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "../header/movie.h"

using namespace std;

class DBManager {
private:
    vector<Movie> movies;
public:
    void loadData();
    vector<Movie> getMovies(); 
};

#endif
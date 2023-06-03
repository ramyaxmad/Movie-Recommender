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
    vector<Movie> Movies;
public:
    void LoadData();
    vector<Movie> getMovies(); 
};

#endif
#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <iostream>
#include <vector>
#include <fstream>
#include "header/movie.h"

using namespace std;

class DBManager {
private:
    vector<Movie> Movies;
public:
    void LoadData();
    vector<Movie> getMovies(); 
};

#endif
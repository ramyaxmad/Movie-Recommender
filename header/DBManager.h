#ifndef DBMANGER_H
#define DBMANGER_H

#include <iostream>
#include <vector>
#include "movie.h"  // Include the Movie class header file

using namespace std;

class DBManager {
private:
    vector<Movie> Movies;

public:
    void LoadData();
    vector<Movie> getMovies(); 
};

#endif
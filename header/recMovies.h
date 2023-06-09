#ifndef RECMOVIES_H
#define RECMOVIES_H

#include "movie.h"
#include <iostream>
#include <fstream>

using namespace std;

class RecMovies {
    private:
        int size;
        int capacity;
        Movie movieList[0];
    public:
        RecMovies();
        void search(string, string, string, string, string);
        string output();
        int getSize();
        int getCapacity();
};

#endif
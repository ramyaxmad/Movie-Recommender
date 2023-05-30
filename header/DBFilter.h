#ifndef DBFILTER_H
#define DBFILTER_H

#include <iostream>
#include <vector>
#include "Movie.h"  // Include the Movie class header file

using namespace std;

class DBFilter {
private:
    vector<Movie> MoviesByGenre;
    vector<Movie> MoviesByCast;
    vector<Movie> MoviesByLanguage;
    vector<Movie> MoviesByDirector;
protected:
    vector<Movie> recommendedMovies;

public:
    void queryMovieByGenre(string genre);
    void queryMovieByCast(string cast);
    void queryMovieByLanguage(string language);
    void queryMovieByDirector(string director);
    
};

#endif
#ifndef DBFILTER_H
#define DBFILTER_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

#include "movie.h"
#include "DBManager.h"

using namespace std;

class DBFilter {
private:
    DBManager manager;
    vector<Movie> allMovies;

    vector<Movie> MoviesByGenre;
    vector<Movie> MoviesByCast;
    vector<Movie> MoviesByLanguage;
    vector<Movie> MoviesByDirector;
protected:
    vector<Movie> recommendedMovies;
public:
    DBFilter();
    void queryMovieByGenre(string genre);
    void queryMovieByCast(string castMember);
    void queryMovieByLanguage(string language);
    void queryMovieByDirector(string director);
    vector<Movie> recommendedMoviesList();
};

#endif
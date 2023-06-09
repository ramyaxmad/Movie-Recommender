#ifndef SORTBY_H
#define SORTBY_H

#include "DBFilter.h"
#include "movie.h"
#include <iostream>
#include <fstream>

using namespace std;

class SortBy{
    public:
        vector<Movie> SortByMostRecent(DBFilter);
        vector<Movie> SortByMostAlphabetical(DBFilter);
};

#endif
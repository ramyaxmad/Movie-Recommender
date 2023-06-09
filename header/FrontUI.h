#ifndef FRONT_UI_H
#define FRONT_UI_H

#include "DBFilter.h"
#include "loginAuth.h"
#include "DBManager.h"
#include "movie.h"
#include "SortBy.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class FrontUI {
    private:
        DBFilter filter;
        vector<Movie> recMoviesList;
    public:
        FrontUI();
        void handleQuestion();

        int displayLoginMenu();
        int displayGenreQuestion();
        int displayCastMemberQuestion();
        int displayLanguageQuestion();
        int displayDirectorQuestion();
        int displayMovieList();

        bool validGenreString(string genre);
        void outputMoviesList();
        void sortOptions();
        int displayGoToPrevQues(string);
};
#endif
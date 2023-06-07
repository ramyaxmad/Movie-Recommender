#ifndef FRONT_UI_H
#define FRONT_UI_H

#include "DBFilter.h"
#include "loginAuth.h"
#include "DBManager.h"
#include "movie.h"

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
        int displayLoginMenu();
        void handleQuestion();
        int displayGenreQuestion();
        int displayCastMemberQuestion();
        int displayLanguageQuestion();
        int displayDirectorQuestion();
        int displayMovieList();

        bool validGenreString(string genre);
};
#endif

#ifndef FRONT_UI_H
#define FRONT_UI_H

#include "DBFilter.h"
#include <iostream>
#include <string>
#include <vector>

class FrontUI {
    private:
        DBFilter filter;
        vector<Movie> recMoviesList;
    public:
        FrontUI();
        void displayLoginMenu();
        void handleQuestion();
        int displayGenreQuestion();
        int displayCastMemberQuestion();
        int displayLanguageQuestion();
        int displayDirectorQuestion();
        int displayMovieList();
};
#endif

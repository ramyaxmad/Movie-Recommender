#ifndef FRONT_UI_H
#define FRONT_UI_H

#include <iostream>
#include <string>

class FrontUI {
    private:

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

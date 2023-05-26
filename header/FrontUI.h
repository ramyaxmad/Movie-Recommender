#ifndef FRONT_UI_H
#define FRONT_UI_H

#include <iostream>
#include <string>

class FrontUI {
    private:

    public:
        FrontUI();
        void loginMenu();
        void HandleQuestion();
        int genreQuestion();
        int castMemberQuestion();
        int languageQuestion();
        int directorQuestion();
        int MovieList();
}
#endif

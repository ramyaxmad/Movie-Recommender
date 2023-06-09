#include "../header/FrontUI.h"
// #include "../header/loginAuth.h"
// #include "../header/DBManager.h"
// #include "../header/DBFilter.h"
// #include "../header/movie.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

FrontUI::FrontUI() {
    filter = DBFilter();
}

void FrontUI::handleQuestion() {
    int result;
    int question = 0;
    while (true) {     //change 6??
        if (question == 0) {
            result = displayLoginMenu();
            question += result;
        }
        if (question == 1) {
            result = displayGenreQuestion();
            question += result;
        }
        if (question == 2) {
            result = displayCastMemberQuestion();
            question += result;
        }
        if (question == 3) {
            result = displayLanguageQuestion();
            question += result;
        }
        if (question == 4) {
            result = displayDirectorQuestion();
            question += result;
        }
        if (question == 5) {
            result = displayMovieList();
            question = result;
        }
        if (question == 6)
            break;
    }
}

int FrontUI::displayLoginMenu() {
    cout << "MOVIE RECOMMENDER" << endl << endl;

    while (true) {
        cout << "Username: ";
        string user;
        getline(cin, user);

        cout << "Password: ";
        string pass;
        getline(cin, pass);

        loginAuthentication *login = new loginAuthentication(user, pass);
        if (login->validLogin() == false)
            cout << "Invalid. Please try again." << endl << endl;
        else {
            login->createLogin();
            cout << "creates login";
            break;
        }
        delete login;
    }
    cout << endl;
    return 1;
}

int FrontUI::displayGenreQuestion() {
    string genre = "";
    while (true) {
        cout << endl << " * Action\n * Adventure\n * Animation\n * Children\'s\n * Comedy\n";
        cout << " * Crime\n * Documentary\n * Drama\n * Fantasy\n * Film-Noir\n * Horror\n * Musical\n";
        cout << " * Mystery\n * Romance\n * Sci-Fi\n * Thriller\n * War\n" << endl << endl;

        cout << "Input a preferred GENRE (from the list of options) or press enter to leave blank: ";
        getline(cin, genre);
        if (genre == "")
            break;
        else if (!validGenreString(genre))
            cout << endl << "Invalid. Please try again." << endl << endl;
        else 
            break;
    }
    //pass string into movie list generator
    filter.queryMovieByGenre(genre);
    cout << endl;
    return 1;
}

bool FrontUI::validGenreString(string genre) {
    vector<string> genres = {"Action", "Adventure", "Animation", "Children's", "Comedy", 
                             "Crime", "Documentary", "Drama", "Fantasy", "Film-Noir", "Horror", 
                             "Musical", "Mystery", "Romance", "Sci-Fi", "Thriller", "War", "Western"};
    for (int i = 0; i < genres.size(); ++i) {
        if (genres.at(i) == genre)
            return true;
    }
    return false;
}

int FrontUI::displayCastMemberQuestion() {
    cout << "Input a preferred CAST MEMBER or press enter to leave blank: ";
    string castMember = "";
    getline(cin, castMember);
    //pass string into movie list generator
    filter.queryMovieByCast(castMember);

    return displayGoToPrevQues("Genre");
}

int FrontUI::displayLanguageQuestion() {
    cout << "Input a preferred LANGUAGE or press enter to leave blank: ";
    string language;
    getline(cin, language);
    //pass string into movie list generator
    filter.queryMovieByLanguage(language);

    return displayGoToPrevQues("Cast Member");
}

int FrontUI::displayDirectorQuestion() {
    cout << "Input a preferred DIRECTOR or press enter to leave blank: ";
    string director;
    getline(cin, director);
    //pass string into movie list generator
    filter.queryMovieByDirector(director);

    return displayGoToPrevQues("language");
}

int FrontUI::displayGoToPrevQues(string prevQuestion) {
    cout << endl << endl << "Enter \"-\" to go to previous question (" << prevQuestion << "): ";
    string goBack = "";
    getline(cin, goBack);
    cout << endl;
    if (goBack == "-")
        return -1;
    else 
        return 1;
}

int FrontUI::displayMovieList() {
    //call function to output list of movies
    recMoviesList = filter.recommendedMoviesList();

    outputMoviesList();
    sortOptions();

    while (true) {
        cout << "if you would like to restart, type in \"restart\": ";
        string restart = "";
        getline(cin, restart);
        if (restart == "restart")
            return 1;
        else if (restart == "") 
            return 6;
        else 
            cout << "Invalid input. Try Again." << endl;
    }
}

void FrontUI::outputMoviesList() {
    cout << endl << "RECOMMENDED MOVIES: " << endl << endl;

    for (int i = 0; i < recMoviesList.size(); ++i) {
        cout << i + 1 << ". ";
        recMoviesList.at(i).output();
        cout << endl;
    }
}

void FrontUI::sortOptions() {
    while (true) {
        cout << "Sortint Options: " << endl 
        << "a. Latest to oldest" << endl 
        << "b. Alphabetical order" << endl << endl;

        cout << "To re-sort, select an option: "; 
        string sortOption;
        getline(cin, sortOption);
        if (sortOption == "a" || sortOption == "b") {
            if (sortOption == "b") {
                SortBy newList;
                recMoviesList = newList.SortByMostAlphabetical(filter);
            }
            if (sortOption == "a") {
                SortBy newList;
                recMoviesList = newList.SortByMostRecent(filter);
            }
            outputMoviesList();
        }
        else if (sortOption == "") {
            break;
        }
        else {
            cout << "Invalid input. Please try again." << endl << endl;
        }
    }
}

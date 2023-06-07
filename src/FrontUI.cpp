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
    while (question != 6) {     //change 6??
        if (question == 0) {
            result = displayLoginMenu();
            question += result;
            cout << question << endl;
        }
        if (question == 1) {
            result = displayGenreQuestion();
            question += result;
            cout << question << endl;
        }
        if (question == 2) {
            result = displayCastMemberQuestion();
            question += result;
            cout << question << endl;
        }
        if (question == 3) {
            result = displayLanguageQuestion();
            question += result;
            cout << question << endl;
        }
        if (question == 4) {
            result = displayDirectorQuestion();
            question += result;
            cout << question << endl;
        }
        if (question == 5) {
            result = displayMovieList();
            question = result;
            cout << question << endl;
        }
    }
}

int FrontUI::displayLoginMenu() {
    cout << "MOVIE RECOMMENDER" << endl << endl;

    while (true) {
        cout << "Username: ";
        string user;
        getline(cin, user);
        //cin.ignore();
        cout << user;
        cout << "Password: ";
        string pass;
        getline(cin, pass);
        cout << pass;

        loginAuthentication *login = new loginAuthentication(user, pass);
        if (login->validLogin() == false)
            cout << "Invalid. Please try again." << endl << endl;
        else {
            //login->createLogin();
            cout << "creates login";
            break;
        }
    }
    cout << endl;
    return 1;
}

int FrontUI::displayGenreQuestion() {
    string genre = "";
    while (true) {
        cout << "* Action\n * Adventure\n * Animation\n * Children\'s\n * Comedy\n";
        cout << "* Crime\n * Documentary\n * Drama\n * Fantasy\n * Film-Noir\n * Horror\n * Musical\n";
        cout << "* Mystery\n * Romance\n * Sci-Fi\n * Thriller\n * War\n * Western\n" << endl << endl;

        cout << "Input a preferred GENRE (from the list of options) or press enter to leave blank: ";
        getline(cin, genre);
        if (genre == "")
            break;
        else if (!validGenreString(genre))
            cout << "Invalid. Please try again." << endl << endl;
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
    string castMember;
    getline(cin, castMember);
    //pass string into movie list generator
    filter.queryMovieByCast(castMember);

    cout << endl << endl << "Enter \"-\" to go to previous question (genre): ";
    string goBack;
    getline(cin, goBack);
    cout << endl;
    if (goBack == "-")
        return -1;
    else 
        return 1;
}

int FrontUI::displayLanguageQuestion() {
    cout << "Input a preferred LANGUAGE or press enter to leave blank: ";
    string language;
    getline(cin, language);
    //pass string into movie list generator
    filter.queryMovieByLanguage(language);

    cout << endl << endl << "Enter \"-\" to go to previous question (cast member): ";
    string goBack;
    getline(cin, goBack);
    cout << endl;
    if (goBack == "-")
        return -1;
    else 
        return 1;
}

int FrontUI::displayDirectorQuestion() {
    cout << "Input a preferred DIRECTOR or press enter to leave blank: ";
    string director;
    getline(cin, director);
    //pass string into movie list generator
    filter.queryMovieByDirector(director);

    cout << endl << endl << "Enter \"-\" to go to previous question (language): ";
    string goBack;
    getline(cin, goBack);
    cout << endl;
    if (goBack == "-")
        return -1;
    else 
        return 1;
}

int FrontUI::displayMovieList() {
    cout << "RECOMMENDED MOVIES: " << endl << endl;
    //call function to output list of movies
    recMoviesList = filter.recommendedMovies();

    for (int i = 0; i < recMoviesList.size(); ++i) {
        cout << i << ". ";
        recMoviesList.at(i).output();
        cout << endl;
    }

    // while (true) {
    //     cout << "Sortint Options: " << endl 
    //     << "1. Latest to oldest" << endl 
    //     << "2. Alphabetical order" << endl << endl;

    //     cout << "To re-sort, select an option: "; 
    //     int sortOption;
    //     cin >> sortOption;
    //     if (sortOption != 1 || sortOption != 2)
    //         cout << "Invalid input. Please try again." << endl << endl;
    //     else if (no sort) {
    //         //break
    //     //}
    //     //else {
    //         cout << "RECOMMENDED MOVIES: " << endl << endl;
    //         //call function to output list of movies
    //     //}
    // }

    cout << "if you would like to restart, type in \"1\": ";
    int restart;
    cin >> restart;
    if (restart == 1)
        return 1;
    else 
        return 6;
}
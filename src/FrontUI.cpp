#include "../header/FrontUI.h"

#include <iostream>
#include <string>

using namespace std;

FrontUI::FrontUI() {}

void FrontUI::displayLoginMenu() {
    cout << "MOVIE RECOMMENDER" << endl << endl;

    while (true) {
        cout << "Username: ";
        string user;
        getline(cin, user);
        cin.ignore();

        cout << "Password: ";
        string pass;
        getline(cin, pass);

        //pass username and password into login class, return bool for authentication
        //if invalid
            //cout << "Invalid. Please try again."
        //else 
            //break;
    }
    cout << endl;
    handleQuestion();
}

void FrontUI::handleQuestion() {
    int result;
    int question = 1;
    while (question != 6) {     //change 6??
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
            question = result
        }
    }
}

int FrontUI::displayGenreQuestion() {
    while (true) {
        cout << "Input a preferred GENRE (list of options) or press enter to leave blank: ";
        string genre;
        getline(cin, genre);
        //if invalid
            //cout << "Invalid. Please try again." << endl << endl;
        //else
            //break;
    }
    //pass string into movie list generator
    cout << endl;
    return 1;
}

int FrontUI::displayCastMemberQuestion() {
    cout << "Input a preferred CAST MEMBER or press enter to leave blank: ";
    string castMember;
    getline(cin, castMember);
    //pass string into movie list generator
    
    cout << endl << endl << "Enter \"-\" to go to previous question (genre): ";
    string goBack;
    cin >> goBack;
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

    cout << endl << endl << "Enter \"-\" to go to previous question (genre): ";
    string goBack;
    cin >> goBack;
    cout << endl;
    if (goBack == "-")
        return -1;
    else 
        return 1;
}

int FrontUI::displayDirectorQuestion() {
    cout << "Input a preferred LANGUAGE or press enter to leave blank: ";
    string language;
    getline(cin, language);
    //pass string into movie list generator

    cout << endl << endl << "Enter \"-\" to go to previous question (genre): ";
    string goBack;
    cin >> goBack;
    cout << endl;
    if (goBack == "-")
        return -1;
    else 
        return 1;
}

int FrontUI::displayMovieList() {

    while (true) {
        cout "Sortint Options: " << endl 
        << "1. Most to least popular" << endl 
        << "2. Latest to oldest" << endl 
        << "3. Alphabetical order" << endl << endl;

        cout << "To re-sort, select an option: "; 
        int sortOption;
        cin >> sortOption
        //if invalid input
            //cout << "Invalid input. Please try again." << endl << endl;
        //else if (no sort) {
            //break
        //}
        //else {
            //cout << "RECOMMENDED MOVIES: " << endl << endl;
            //call function to output list of movies
        //}
    }

    cout << "RECOMMENDED MOVIES: " << endl << endl;
    //call function to output list of movies

    cout << "1. Restart (new list of movies)" << endl << "2. Logout" << endl "Select an option: ";
    int startOver;
    cin >> startOver;
    if (startOver == 1)
        
}
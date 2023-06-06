#include "../header/movie.h"
#include <iostream>

using namespace std;

Movie::Movie() {
    // Default constructor
    genre = "";
    castMember = "";
    director = "";
    language = "";
    movieID = 0;
    rating = 0;
    title = "";
}

Movie::Movie(int movieID, string title, string genre, string castMember, string director, string language, int rating) {
    // Parameterized constructor
    this->movieID = movieID;
    this->title = title;
    this->genre = genre;
    this->castMember = castMember;
    this->director = director;
    this->language = language;
    this->movieID = movieID;
    this->rating = rating;
}

string Movie::getGenre() const {
    return genre;
}

string Movie::getCastMember() const {
    return castMember;
}

string Movie::getDirector() const {
    return director;
}

string Movie::getLanguage() const {
    return language;
}

int Movie::getRating() const {
    return rating;
}

int Movie::getMovieID() const {
    return movieID;
}

void Movie::output() {
    // Print the details of the movie
    cout << title << endl;
    // cout << "Genre: " << genre << endl;
    // cout << "Cast Member: " << castMember << endl;
    // cout << "Director: " << director << endl;
    // cout << "Language: " << language << endl;
    // cout << "Movie ID: " << movieID << endl;
    // cout << "Rating: " << rating << "/100" << endl;

}


#include "../header/movie.h"
#include <iostream>

using namespace std;

Movie::Movie() {
    // Default constructor
    genre = "";
    castMember = "";
    director = "";
    language = "";
    data = 0;
    rating = 0;
    name = "";
}

Movie::Movie(string genre, string castMember, string director, string language, int data, int rating) {
    // Parameterized constructor
    this->genre = genre;
    this->castMember = castMember;
    this->director = director;
    this->language = language;
    this->data = data;
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

string Movie::getData() const {
    return data;
}

Movie Movie::output() {
    // Print the details of the movie
    cout << "Name: " << name << endl;
    cout << "Genre: " << genre << endl;
    cout << "Cast Member: " << castMember << endl;
    cout << "Director: " << director << endl;
    cout << "Language: " << language << endl;
    cout << "Data: " << data << endl;
    cout << "Rating: " << rating << "/100" << endl;
}


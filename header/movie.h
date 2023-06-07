#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
using namespace std;

struct Movie {
    private:
        int movieID;
        string title;
        string genre; 
        string castMember;
        string director;
        string language;
        int rating; //rating should be an int then we can print out of 100 or as a percent ex. cout 10 + "%"
        //string name;
    public:
        Movie();
        Movie(int movieID, string title, string genre, string castMember, string director, string language, int rating);
        void output(); 

        int getMovieID() const;
        string getTitle() const;
        string getGenre() const;
        string getCastMember() const;
        string getDirector() const;
        string getLanguage() const;
        int getRating() const;
};

#endif
#include <iostream>
using namespace std;
#ifndef MOVIE_H
#define MOVIE_H


class PlaylistNode {
    private:
        string genre; 
        string castMember;
        string director;
        string language;
        int data; // what data?
        int rating; //rating should be an int then we can print out of 100 or as a percent ex. cout 10 + "%"
        string name;
       
    public:
        Movie();
        Movie(string genre, string castMember, string director, string language, int data, int rating);
        Movie output(); 

        string getGenre() const;
        string getCastMember() const;
        string getDirector() const;
        string getLanguage() const;
        int getRating() const;
        string getData() const;

        
};
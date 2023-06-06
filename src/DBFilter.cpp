#include "../header/DBFilter.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

DBFilter::DBFilter() {
    manager.LoadData();
    allMovies = manager.getMovies();
}
void DBFilter::queryMovieByGenre(string genre) {
    //filling up MoviesByGenre vector
}

void DBFilter::queryMovieByCast(string castMember) {

}

void DBFilter::queryMovieByLanguage(string language) {

}

void DBFilter::queryMovieByDirector(string director) {

}

vector<Movie> DBFilter::recommendedMovies() {
    return this->recommendedMovies;
}
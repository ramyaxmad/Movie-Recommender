#include "../header/DBFilter.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

DBFilter::DBFilter() {
    recommendMovies.clear();
    manager.loadData();
    allMovies = manager.getMovies();
}
void DBFilter::queryMovieByGenre(string genre) {
    //filling up MoviesByGenre vector
    for (const auto& movie : allMovies) {
        string genreString = movie.getGenre();
        stringstream ss(genreString);
        string tempGenre;
        // Split the genre string using '|' as the delimiter
        while (getline(ss, tempGenre, '|')) {
            if (tempGenre == genre) {
                // Found a movie with the target genre
                MoviesByGenre.push_back(movie);
                break;  // No need to check further genres for this movie
            }
        }
    }
}

void DBFilter::queryMovieByCast(string castMember) {

}

void DBFilter::queryMovieByLanguage(string language) {

}

void DBFilter::queryMovieByDirector(string director) {
    
}

vector<Movie> DBFilter::recommendedMovies() {
    return this->recommendMovies;
}
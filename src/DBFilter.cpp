#include "../header/DBFilter.h"
#include "../header/DBManager.h"
#include "../header/movie.h"

DBFilter::DBFilter() {
    allMovies = manager.getMovies();
}

void DBFilter::queryMovieByGenre(string genre) {
    //making moviesByGenre
    MoviesByGenre.clear();
    recommendedMovies.clear();
    if (genre == ""){
        for (unsigned i = 0; i < 15; i++){
            MoviesByGenre.push_back(allMovies.at(rand() % allMovies.size()));
        }
        for(unsigned i = 0; i < 15; i++){
            recommendedMovies.push_back(MoviesByGenre.at(i));
        }
    }else{
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
        for(unsigned i = 0; i < 15; i++) {
            recommendedMovies.push_back(MoviesByGenre.at(rand() % MoviesByGenre.size()));
        }
    }
}

void DBFilter::queryMovieByCast(string cast) {
    MoviesByCast.clear(); // Clear the vector before populating
    recommendedMovies.clear();
    for (unsigned i = 0; i < 15; i++){
        MoviesByCast.push_back(allMovies.at(rand() % allMovies.size()));
    }
    for(unsigned i = 0; i < 15; i++) {
        recommendedMovies.push_back(MoviesByCast.at(rand() % MoviesByCast.size()));
    }
}

void DBFilter::queryMovieByLanguage(string language) {
     MoviesByLanguage.clear(); // Clear the vector before populating
    recommendedMovies.clear();
    for (unsigned i = 0; i < 15; i++){
        MoviesByLanguage.push_back(allMovies.at(rand() % allMovies.size()));
    }
    for(unsigned i = 0; i < 15; i++) {
        recommendedMovies.push_back(MoviesByLanguage.at(rand() % MoviesByLanguage.size()));
    }
}

void DBFilter::queryMovieByDirector(string director) {
    MoviesByDirector.clear();
    recommendedMovies.clear();
    for (unsigned i = 0; i < 15; i++) {
        MoviesByDirector.push_back(allMovies.at(rand() % allMovies.size()));
    }
    for (unsigned i = 0; i < 15; i++) {
        recommendedMovies.push_back(MoviesByDirector.at(rand() % MoviesByDirector.size()));
    }
}

vector<Movie> DBFilter::recommendedMoviesList(){
    return recommendedMovies; 
}
#include "DBFilter.h"
#include "DBManager.h"

void DBFilter::queryMovieByGenre(string genre) {
    for (unsigned i = 0; i < MoviesByGenre.size(); i++) {
        if (MoviesByGenre[i].getGenre() == genre) {
            recommendedMovies.push_back(MoviesByGenre[i]);
        }
    }
}

void DBFilter::queryMovieByCast(string cast) {
    for (unsigned i = 0; i < MoviesByCast.size(); i++) {
        if (MoviesByCast[i].getLanguage() == cast) {
            recommendedMovies.push_back(MoviesByCast[i]);
        }
    }
}

void DBFilter::queryMovieByLanguage(string language) {
    for (unsigned i = 0; i < MoviesByLanguage.size(); i++) {
        if (MoviesByLanguage[i].getLanguage() == language) {
            recommendedMovies.push_back(MoviesByLanguage[i]);
        }
    }
}

void DBFilter::queryMovieByDirector(string director) {
    for (unsigned i = 0; i < MoviesByDirector.size(); i++) {
        if (MoviesByDirector[i].getDirector() == director) {
            recommendedMovies.push_back(MoviesByDirector[i]);
        }
    }
}





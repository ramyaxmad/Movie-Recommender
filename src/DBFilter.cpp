#include "DBFilter.h"
#include "DBManager.h"


DbManager obj = new DBManager();
Vector<Movie> movieList = Obj.getMovies();



DBFilter::DBFilter() {
    manager.LoadData();
    allMovies = manager.getMovies();
    
}

void DBFilter::queryMovieByGenre(string genre) {
    //making moviesByGenre
    for (const auto& movie : allMovies) {
        string genreString = movie.getGenre();
        stringstream ss(genreString);
        string tempGenre;
        // Split the genre string using '|' as the delimiter
        while (getline(ss, tempGenre, '|')) {
            if (tempGenre == genre) {
                // Found a movie with the target genre
                moviesByGenre.push_back(movie);
                break;  // No need to check further genres for this movie
            }
        }
    }


    // Perform a binary search to find the first and last index of movies with the same genre
    int firstIndex = -1;
    int lastIndex = -1;

    int low = 0;
    int high = MoviesByGenre.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (MoviesByGenre[mid].getGenre() == genre) {
            // Found a movie with the target genre
            firstIndex = mid;
            high = mid - 1;  // Continue searching towards the left for the first index
        } else if (MoviesByGenre[mid].getGenre() < genre) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    low = 0;
    high = MoviesByGenre.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (MoviesByGenre[mid].getGenre() == genre) {
            // Found a movie with the target genre
            lastIndex = mid;
            low = mid + 1;  // Continue searching towards the right for the last index
        } else if (MoviesByGenre[mid].getGenre() < genre) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Clear the recommendedMovies vector before adding the movies with the same genre
    recommendedMovies.clear();

    // Add the movies with the same genre to the recommendedMovies vector in consecutive order
    for (int i = firstIndex; i <= lastIndex; i++) {
        recommendedMovies.push_back(MoviesByGenre[i]);
    }
}
    
    // for (unsigned i = 0; i < MoviesByGenre.size(); i++) {
    //     if (MoviesByGenre[i].getGenre() == genre) {
    //         recommendedMovies.push_back(MoviesByGenre[i]);
    //     }
    // }
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





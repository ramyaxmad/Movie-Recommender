#include "../header/DBFilter.h"
#include "../header/DBManager.h"


    // DbManager obj = new DBManager();
    // Vector<Movie> movieList = Obj.getMovies();



DBFilter::DBFilter() {
    manager.LoadData();
    allMovies = manager.getMovies();
    
}

void DBFilter::queryMovieByGenre(string genre) {
    //making moviesByGenre
    
    if ( genre == ""){
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
    }
    for(unsigned i = 0; i < 15; i++){
        recommendedMovies.push_back(MoviesByGenre.at(rand() % MoviesByGenre.size()));
    }
}

void DBFilter::queryMovieByCast(string cast) {
    for (unsigned i = 0; i < allMovies.size(); i++){
        MoviesByCast.push_back(allMovies.at(rand() % allMovies.size()));
    }
    
}

void DBFilter::queryMovieByLanguage(string language) {
     for (unsigned i = 0; i < allMovies.size(); i++){
        MoviesByLanguage.push_back(allMovies.at(rand() % allMovies.size()));
    }
}

void DBFilter::queryMovieByDirector(string director) {
     for (unsigned i = 0; i < allMovies.size(); i++){
        MoviesByDirector.push_back(allMovies.at(rand() % allMovies.size()));
    }
}

vector<Movie> DBFilter::recommendedMoviesList(){
    return recommendedMovies; 
}




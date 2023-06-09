#include "../header/DBFilter.h"
#include <iostream>

// Helper function to check if two movie vectors contain the same movies
bool compareMovieVectors(const vector<Movie>& movies1, const vector<Movie>& movies2) {
    if (movies1.size() != movies2.size()) {
        return false;
    }
    for (unsigned i = 0; i < movies1.size(); i++) {
        if (movies1[i].getName() != movies2[i].getName()) {
            return false;
        }
    }
    return true;
}

// Test case for querying movies by genre
void testQueryMovieByGenre() {
    DBFilter dbFilter;
    vector<Movie> expectedMovies = {
        Movie("Action", "John Doe", "Michael Bay", "English", 2010, 80),
        Movie("Action", "Jane Smith", "James Cameron", "English", 2009, 90),
        // Add more expected movies here
    };

    dbFilter.queryMovieByGenre("Action");
    vector<Movie> resultMovies = dbFilter.getRecommendedMovies();

    if (compareMovieVectors(expectedMovies, resultMovies)) {
        cout << "Test Passed: Query movies by genre" << endl;
    } else {
        cout << "Test Failed: Query movies by genre" << endl;
    }
}

// Test case for querying movies by director
void testQueryMovieByDirector() {
    DBFilter dbFilter;
    vector<Movie> expectedMovies = {
        Movie("Action", "John Doe", "Michael Bay", "English", 2010, 80),
        Movie("Romance", "Jane Smith", "Michael Bay", "English", 2005, 70),
        // Add more expected movies here
    };

    dbFilter.queryMovieByDirector("Michael Bay");
    vector<Movie> resultMovies = dbFilter.getRecommendedMovies();

    if (compareMovieVectors(expectedMovies, resultMovies)) {
        cout << "Test Passed: Query movies by director" << endl;
    } else {
        cout << "Test Failed: Query movies by director" << endl;
    }
}

    


int main() {
    testQueryMovieByGenre();
    testQueryMovieByDirector();

    return 0;
}

#include "../header/SortBy.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<Movie> SortBy::SortByMostRecent(DBFilter obj){
    vector<Movie> recommendedMovies = obj.recommendedMoviesList();
    int n = recommendedMovies.size();
    bool swapped;
    string yearOne;
    string yearTwo;

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            // Compare the first genre of adjacent movies
            int start1 = recommendedMovies[j].getTitle().find("(");
            int end1 = recommendedMovies[j].getTitle().find(")");
            yearOne = recommendedMovies[j].getTitle().substr(start1 + 1, end1 - start1 - 1);
            int start2 = recommendedMovies[j+1].getTitle().find("(");
            int end2 = recommendedMovies[j+1].getTitle().find(")");
            yearTwo = recommendedMovies[j+1].getTitle().substr(start2 + 1, end2 - start2 - 1);
            if (yearTwo > yearOne) {
                // Swap the movies if they are not in alphabetical order
                swap(recommendedMovies[j], recommendedMovies[j + 1]);
                swapped = true;
            }
        }
        // If no two movies were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
    return recommendedMovies;
}

vector<Movie> SortBy::SortByMostAlphabetical(DBFilter obj){
    vector<Movie> recommendedMovies = obj.recommendedMoviesList();
    int n = recommendedMovies.size();
    bool swapped;
    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            // Compare the first genre of adjacent movies
            if (recommendedMovies[j].getTitle()[0] > recommendedMovies[j + 1].getTitle()[0]) {
                // Swap the movies if they are not in alphabetical order
                swap(recommendedMovies[j], recommendedMovies[j + 1]);
                swapped = true;
            }
        }
        // If no two movies were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
    return recommendedMovies;
}
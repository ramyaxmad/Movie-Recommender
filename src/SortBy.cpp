#include "../header/SortBy.h"
#include <iostream>

using namespace std;

void sortBy::SortByMostPopular(){
    int n = MoviesByGenre.size();
    int random = rand() % recommendedMovies.size();
    bool swapped;
        for (int i = 0; i < n - 1; i++) {
            swap(MoviesByGenre[i], MoviesByGenre[n]);
                swapped = true;
            // If no two movies were swapped in the inner loop, the array is already sorted
            if (!swapped) {
            break;
            }
        }
}

void sortBy::SortByMostRecent(){
    int n = recommendedMovies.size();
    bool swapped;
    int ss(dateString);
    int tempS;
    int yearOne;
    int yearTwo;

    // Find the indexes of the parentheses
    size_t start = movie.find("(");
    size_t end = movie.find(")");

    // Extract the date
    string date = movie.substr(start + 1, end - start - 1);
    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            // Compare the first genre of adjacent movies
            size_t start = recommendedMovies[j].find("(");
            size_t end = recommendedMovies[j].find(")");
            yearOne = recommendedMovies[j].substr(start + 1, end - start - 1);
            size_t start = recommendedMovies[j+1].find("(");
            size_t end = recommendedMovies[j+1].find(")");
            yearTwo = recommendedMovies[j+1].substr(start + 1, end - start - 1);
            if (yearTwo > yearOne) {
                // Swap the movies if they are not in alphabetical order
                swap(MoviesByGenre[j], MoviesByGenre[j + 1]);
                swapped = true;
            }
        }
        // If no two movies were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

void sortBy::SortByMostAlphabetical(){
    int n = recommendedMovies.size();
    bool swapped;

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            // Compare the first genre of adjacent movies
            if (recommendedMovies[j].getGenres()[0] > recommendedMovies[j + 1].getGenres()[0]) {
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
}
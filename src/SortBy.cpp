#include "../header/SortBy.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void SortBy::SortByMostRecent(){
    int n = recommendedMovies.size();
    bool swapped;
    int yearOne;
    int yearTwo;

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            // Compare the first genre of adjacent movies
            int start1 = recommendedMovies[j].getTitle().find("(");
            int end1 = recommendedMovies[j].getTitle().find(")");
            yearOne = stoi(recommendedMovies[j].getTitle().substr(start1 + 1, end1 - start1 - 1));
            int start2 = recommendedMovies[j+1].getTitle().find("(");
            int end2 = recommendedMovies[j+1].getTitle().find(")");
            yearTwo =stoi(recommendedMovies[j+1].getTitle().substr(start2 + 1, end2 - start2 - 1));
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
}

void SortBy::SortByMostAlphabetical(){
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
}
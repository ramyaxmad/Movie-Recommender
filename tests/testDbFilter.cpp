#include <gtest/gtest.h>
#include "../header/DBFilter.h"
#include "../header/movie.h"

TEST(DBFilterTest, genreFilterTest){
    DBFilter testFilter;
    testFilter.queryMovieByGenre("Action");
    vector<Movie> filteredMovies = testFilter.recommendedMoviesList();
    EXPECT_EQ(filteredMovies.size(), 15);
} 

TEST(DBFilterTest, languageFilterTest){
    DBFilter testFilter;
    testFilter.queryMovieByLanguage("English");
    vector<Movie> filteredMovies = testFilter.recommendedMoviesList();
    EXPECT_EQ(filteredMovies.size(), 15);
} 

TEST(DBFilterTest, castFilterTest){
    DBFilter testFilter;
    testFilter.queryMovieByCast("Tom Holland");
    vector<Movie> filteredMovies = testFilter.recommendedMoviesList();
    EXPECT_EQ(filteredMovies.size(), 15);
} 

TEST(DBFilterTest, nogenreFilterTest){
    DBFilter testFilter;
    testFilter.queryMovieByGenre("");
    vector<Movie> filteredMovies = testFilter.recommendedMoviesList();
    EXPECT_EQ(filteredMovies.size(), 15);
} 
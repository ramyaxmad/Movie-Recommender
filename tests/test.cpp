#include "gtest/gtest.h"
#include "../header/movie.h"
#include "../header/DBManager.h"
#include "../header/SortBy.h"
#include "../header/DBFilter.h"
#include "../header/loginAuth.h"


TEST(LoadDataTest1, DBManagerTests){ //tests that data is properly stored
    DBManager testDB;
    vector<Movie> testMovies = testDB.getMovies();
    EXPECT_NE(testMovies.size(), 0);
}
TEST(LoadDataTest2, DBManagerTests){ //tests front of vector
    DBManager testDB;
    vector<Movie> testMovies = testDB.getMovies();
    EXPECT_EQ(testMovies.at(0).getMovieID(), 1);
}
TEST(LoadDataTest3, DBManagerTests){ //tests end of vector
    DBManager testDB;
    vector<Movie> testMovies = testDB.getMovies();
    EXPECT_EQ(testMovies.at(testMovies.size() - 1).getTitle(), "Women of Devil's Island (1962)");
}

TEST(SortByTest1, SortByTests1) {
    SortBy testSort;
    DBFilter testFilter = DBFilter();
    EXPECT_EQ(testSort.SortByMostRecent(testFilter).size(), 0);
}
TEST(SortByTest1, SortByTests2) {
    SortBy testSort;
    DBFilter testFilter = DBFilter();
    EXPECT_EQ(testSort.SortByMostAlphabetical(testFilter).size(), 0);
}
TEST(SortByTest1, SortByTests3) {
    SortBy testSort;
    DBFilter testFilter = DBFilter();
    EXPECT_NE(testSort.SortByMostRecent(testFilter).size(), 1);
}

TEST(loginTest, validLoginTest) {
    loginAuthentication *testLogin = new loginAuthentication();
    EXPECT_FALSE(testLogin->validLogin());
}
TEST(loginTest, validLoginTest2) {
    loginAuthentication *testLogin = new loginAuthentication();
    testLogin->createLogin("Username", "Password");
    EXPECT_FALSE(testLogin->validLogin());
}


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
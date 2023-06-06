#include "gtest/gtest.h"
#include "../header/movie.h"
#include "../header/DBManager.h"

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


//write tests
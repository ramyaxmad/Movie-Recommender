#include "gtest/gtest.h"
#include "../header/movie.h"
#include "../header/recMovies.h"

TEST(recMoviesTest, constructorTest){
    RecMovies *testMovies = new RecMovies();
    EXPECT_EQ(testMovies->getSize(), 0);
}

//write tests
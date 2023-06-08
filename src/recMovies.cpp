#include "../header/recMovies.h"
#include <iostream>

using namespace std;

RecMovies::RecMovies(){
    size = 0;
    capacity = 0;
}

int RecMovies::getCapacity(){
    return this->capacity;
}

int RecMovies::getSize(){
    return this->size;
}
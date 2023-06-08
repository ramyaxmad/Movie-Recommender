#ifndef SORTBY_H
#define SORTBY_H

#include "DBFilter.h"
#include <iostream>
#include <fstream>

using namespace std;

class sortBy :public DBFilter{
    public:
        SortByMostPopular();
        SortByMostRecent();
        SortByMostAlphabetical();
};

#endif
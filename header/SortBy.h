#ifndef SORTBY_H
#define SORTBY_H

#include "DBFilter.h"
#include <iostream>
#include <fstream>

using namespace std;

class SortBy :public DBFilter{
    public:
        void SortByMostRecent();
        void SortByMostAlphabetical();
};

#endif
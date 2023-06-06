<<<<<<< HEAD
#include "header/FrontUI.h"

#include <iostream>
#include <string>

int main (int argc, char **argv) {
    while (true) {
        FrontUI start;
        start.handleQuestions();

        cout << "If you would like to logout, type in \"logout\": ";
        string logout;
        getline(cin, logout);

        if (logout != "logout")
            break;
    }
    return 0;
}
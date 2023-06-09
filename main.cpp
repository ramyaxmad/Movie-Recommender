#include "header/FrontUI.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) {
        FrontUI start;
        start.handleQuestion();

        cout << "If you would like to logout, type in \"logout\": ";
        string logout;
        getline(cin, logout);

        if (logout != "logout")
            break;
    }
    return 0;
}
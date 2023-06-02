#include "../header/loginAuth.h"
#include <fstream>

using namespace std;

loginAuthentication::loginAuthentication(string pass, string user) {
    password = pass;
    username = user;
    ofstream inFile;
    inFile.open("../lib/login.txt");

    if !(inFile.is_open()) {
        cout << "Error reading file." << endl;
        return 1;
    }

    inFile << user << endl;
    inFile << pass << endl;

    inFile.close()

}

bool loginAuthentication::validLogin() {
    ifstream inFile;
    string input;
    string input2;
    bool val;

    inFile.open("../lib/login.txt");

    if !(inFile.is_open()) {
        cout << "Error reading file." << endl;
        return 1;
    }

    while (getline(inFile, input)) {
        if (input == username) {
            val = true;
        }
        else if (input == password) {
            val = true;
        }
        else {
            val = false;
        }
    }
    inFile.close();

    return val;
}

void loginAuthentication::readFiles() {
    ifstream inFile;
    string input;
    string input2;
    inFile.open("../lib/login.txt");

    if (!inFile.is_open) {
        cout << "Error reading file." << endl
        return 1;
    }

    while (getline(inFile, input)) {
        getline(inFile, input2);
        cout << "Username: " << input << endl;
        cout << "Password: " << input2 << endl;
    }

    inFile.close();
}
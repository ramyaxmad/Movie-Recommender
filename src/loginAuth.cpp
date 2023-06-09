#include "../header/loginAuth.h"
#include <fstream>

using namespace std;

loginAuthentication::loginAuthentication() {
    password = "";
    username = "";
}

loginAuthentication::loginAuthentication(string user, string pass) {
    password = pass; 
    username = user;
}

void loginAuthentication::createLogin () {
    ofstream inFile;
    inFile.open("/home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/lib/login.txt");

    if (!inFile.is_open()) {
        cout << "Error reading file." << endl;
        return;
    }

    inFile << username << endl;
    inFile << password << endl;

    inFile.close();
}

void loginAuthentication::createLogin (string user, string pass) {
    ofstream inFile;

    username = user;
    password = pass;

    inFile.open("/home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/lib/login.txt");

    if (!inFile.is_open()) {
        cout << "Error reading file." << endl;
        return;
    }

    inFile << password << endl;
    inFile << username << endl;

    inFile.close();
}


bool loginAuthentication::validLogin() {
    ifstream inFile;
    string input;
    string input2;
    bool val;

    inFile.open("/home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/lib/login.txt");

    if (!inFile.is_open()) {
        cout << "Error reading file." << endl;
        return 1;
    }

    getline(inFile, input);
    getline(inFile, input2);

    int compare = input.compare(username);
    int compare2 = input2.compare(password);

    inFile.close();

    if ((compare && compare2) == 0) {
        val = true;
    }
    else {
        val = false;
    }


    /*
    cout << "Username: " << username << endl << "Password: " << password << endl;
    cout << "Input: " << input << endl << "Input 2: " << input2 << endl;
    cout << "Compare: " << compare << "Compare 2: " << compare2 << endl;
    */

    return val;
}

void loginAuthentication::readFiles() {
    ifstream inFile;
    string input;
    string input2;
    inFile.open("/home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/lib/login.txt");

    if (!inFile.is_open()) {
        cout << "Error reading file." << endl;
        return;
    }

    while (getline(inFile, input)) {
        getline(inFile, input2);
        cout << "Username: " << input << endl;
        cout << "Password: " << input2 << endl;
    }

    inFile.close();
}
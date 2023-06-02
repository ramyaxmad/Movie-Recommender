#ifndef LOGIN_AUTHENTICATION_H
#define LOGIN_AUTHENTICATION_H

#include <iostream>
using namespace std;

class loginAuthentication {
    private:
        string password;
        string username;
    public:
        loginAuthentication(string, string);
        bool validLogin();
        void readFiles();

};

#endif
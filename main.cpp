#include "header/loginAuth.h"
#include "gtest/gtest.h"

int main () {
    string user;
    string pass;
    
    cout << "Enter a username: " ;
    cin >> user;
    cout << "Enter a password: ";
    cin >> pass;
    
    loginAuthentication login = loginAuthentication(pass, user);


    login.readFiles();

    return 0;
}
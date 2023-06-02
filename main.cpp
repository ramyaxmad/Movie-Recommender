#include "header/loginAuth.h"

int main () {
    string user;
    string pass;

    cout << "Enter a username: " ;
    cin >> user;
    cout << "Enter a password: ";
    cin >> pass;

    loginAuthentication login = loginAuthentication(pass, user);

    return 0;
}
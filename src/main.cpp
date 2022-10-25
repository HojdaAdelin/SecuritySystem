#include <iostream>
#include "../src/system/login.h"
#include "../src/system/register.h"

using namespace std;

int main(){

    int option;

    cout << "1. Log in";
    cout << "\n2. Register" << endl;

    cin >> option;

    switch (option)
    {
    case 1:
        login();
        break;
    case 2:
        Register();
        break;
    default:
        system("pause");
        break;
    }

    return 0;
}
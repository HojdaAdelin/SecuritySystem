#include <iostream>
#include "login.h"
#include "register.h"
#include "fstream"
void loged();

using namespace std;

void login(){

    int regi;

    cout << "[1] Log in" << endl;
    cout << "[2] No accound? Register now" << endl;
    cout << "\n[9] Exit" << endl;
    cin >> regi;

    if (regi == 1) {
        system("cls");
        loged();
    } else if (regi == 2) {
        system("cls");
        Register();
    } else if (regi == 9){
        system("cls");
        main();
    }
}

void loged(){
    
    string username, usernameRead, password, passwordRead;
    

    cout << "Enter your username: "; cin >> username;
    cout << "\nEnter you password: "; cin >> password;

    ifstream log(username + ".data");

    getline(log, usernameRead);
    getline(log, passwordRead);

    log.close();

    if (usernameRead == username && passwordRead == password) {
        cout << "\nYou are succesfully loged in!" << endl;
    } else{
        cout << "\nWrong username or password" << endl;
    }

    system("pause");

}
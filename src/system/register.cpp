#include <iostream>
#include "register.h"
#include "fstream"
#include "login.h"

void accound();
using namespace std;

void Register(){

    int regf;

    cout << "[1] Create a new accound";
    cout << "\n[9] Exit" << endl;
    cin >> regf;
    switch (regf)
    {
    case 1:
        system("cls");
        accound();
        
    case 9:
        system("cls");
        main();
        
    
    }

}

void accound() {

    int aws;
    string username;
    char password;

    cout << "Enter a username: "; cin >> username;
    cout << endl;
    cout << "Enter a password: "; cin >> password;



    ofstream reg(username + ".data");

    reg << username << endl;
    reg << password << endl;

    reg.close();

    
    cout << "\nYou are succesfuly registed" << endl;
    cout << "9. Exit" << endl;
    cin >> aws;

    if (aws == 9) {
        system("cls");
        main();
    } 
}
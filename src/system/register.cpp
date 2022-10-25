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
    
    if (regf == 1) {
        system("cls");
        accound();

    }   else if (regf == 9) {
        system("cls");
        main();
    }
        
    

}

void accound() {

  string username, password;
  int aws;

  cout << "Enter a username: " << endl; cin >> username;
  cout << endl;
  cout << "Enter a password: " << endl; cin >> password;

  ofstream reg(username + ".data");

  reg << username << endl;
  reg << password << endl;

  reg.close();
  cout << endl;
  cout << "You are succesfuly registed" << endl;
  cout << "9. Exit" << endl;
  cin >> aws;

  if (aws == 9) {
    system("cls");
    main();
  } 
}
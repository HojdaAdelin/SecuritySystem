#include <iostream>
#include <fstream>

using namespace std;

void LogIN();
void Register();

int main() {

  int aws;

  cout << "1. LogIn\n2. Register" << endl; cin >> aws;

  switch (aws) {
    case 1:
      system("cls");
      LogIN();
    case 2:
      system("cls");
      Register();
  }

}

void LogIN() {
  string username, password, passwordRead, usernameRead;

  cout << "Enter your username: " << endl; cin >> username;
  cout << endl;
  cout << "Enter your password: " << endl; cin >> password;
  cout << endl;

  ifstream log(username + ".cfg");

  getline(log, usernameRead);
  getline(log, passwordRead);

  log.close();

  if(usernameRead == username && passwordRead == password){
    cout << "You are succesfuly loged in" << endl;
    system("pause");
  } else {
    cout << "Wrong username or password" << endl;
    system("pause");
  }

}

void Register() {

  string username, password;
  int aws;

  cout << "Enter a username: " << endl; cin >> username;
  cout << endl;
  cout << "Enter a password: " << endl; cin >> password;

  ofstream reg(username + ".cfg");

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

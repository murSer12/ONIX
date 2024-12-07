#include <iostream>
#include "../include/user.h"

using namespace std;

int User::createUser() {
  if(user_num < max_user){
    User* user;
    cout << "\n";
    string login;
    cout << "Write new user login : ";
    cin >> login;
    cout << "\n";
    string password;
    cout << "Write new user password : ";
    cin >> password;
    cout << "\n\n";
    user->id++;
    user->name = login;
    user->
    ++user_num;
  }
  else {
    cout << "Cannot create User Because So many Users";
  }
}
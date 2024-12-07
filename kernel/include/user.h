#ifndef _USER_H

#define MAX_USER 4;

int max_user = MAX_USER;
int user_num = 0;

class User {
private:
  int id;
  string name;
  string password;
  vector <User*> user;
public:
  int createUser();
  int deleteUser(int id);
  int loginUser();
};
#endif
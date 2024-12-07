#ifndef _SHELL_H

class Command {
protected:
  vector <string> commands = {"ls" , "user" , "crU"};
};

class Shell : public Command{
public:
  int checkCommand(string& command , string& arguments);
  int ls();
  
};

#endif
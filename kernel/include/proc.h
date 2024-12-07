#ifndef _PROC_H

#define MAX_PROC 4096;
#define PROCESS 0;

int proc_num = PROCESS;
int proc_max = MAX_PROC

class Proccess {
protected:
  int id;
  string name;
  vector <Proccess*> proccesses;
public:
  int createProccess(string proccess_name);
  int exitProcess(string proccess_name);
};

#endif
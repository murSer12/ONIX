#include <iostream>
#include "../include/proc.h"

using namespace std;

int Proccess::createProccess(string proccess_name){
  if(proc_num < proc_max){
    Proccess* proccess;
    proccess->id++;
    proccess->name = proccess_name;
    proccess->proccesses.push_back(proccess);
    delete proccess;
    proccess = 0;
    return 0;
  }
  else {
    cout << "Cannot create a new Proccess!\n\n";
    return 1;
  }
}

int Proccess::exitProcess(string proccess_name){
  Proccess* proccess;
  
}

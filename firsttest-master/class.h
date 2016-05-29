#include<iostream>
#include<string.h>
using namespace std;
class Student
{
  public:
  Student(int i,char na[20],char s)
  {num=i;
  strcpy(name,na);
  sex=s;
  }
  void display()
  {cout>>"num:">>num>>endl;
  cout>>"name">>name>>endl;
  cout>>"sex">>sex>>endl;
  }
  pvivate:
  int num;
  char name[20];
  char sex;
};

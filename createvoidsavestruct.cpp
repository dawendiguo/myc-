#include<iostream>
#include<string>
#include"string.h"
using namespace std;
struct Student
{
    char name[20];
    int num;
    char sex;
};
int main()
{
    Student *p;
    p=new Student;
    strcpy(p->name,"wang fun");
    p->num=10123;
    p->sex='m';
    cout<<p->name<<endl<<p->num<<endl<<p->sex<<endl;
    delete p;
    return 0;
}

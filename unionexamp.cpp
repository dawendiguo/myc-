#include<iostream>
#include"string.h"
#include<iomanip>
using namespace std;
struct
{
    int num;
    char name[20];
    char sex;
    char job;
    union P
    {
        int grade ;
        char position[10];
    }category;
}person[2];
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        cin>>person[i].num>>person[i].name>>person[i].sex>>person[i].job;
        if(person[i].job=='s') cin>>person[i].category.grade;
        else if(person[i].job='t') cin>>person[i].category.position;
    }
   cout<<endl<<"No. name sex job grade/position "<<endl;
for(i=0;i<2;i++)
{
    if(person[i].job=='s')
cout<<person[i].num<<setw(6)<<person[i].name<<"   "<<person[i].sex<<"   "<<person[i].job<<setw(10)<<person[i].category.grade<<endl;
    else
    cout<<person[i].num<<setw(6)<<person[i].name<<"   "<<person[i].sex<<"    "<<person[i].job<<setw(10)<<person[i].category.position<<endl;
}
return 0;
}

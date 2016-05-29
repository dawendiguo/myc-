#include<iostream>
#include"class.h"
using namespace std;
int main()
{Student stud[3]={
	Student(1001,18,70),
	Student(1002,19,78),
	Student(1005,20,98)};
int n;
cout<<"Please input the number of Student:";
cin>>n;
for(int i=0;i<n;i++)
	stud[i].total();
cout<<"the average score of"<<n<<" student is"<<Student::average()<<endl;
return 0;
}

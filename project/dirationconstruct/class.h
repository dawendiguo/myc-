#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
	Student(int n,char nam[20],char s)
	{num=n;
	strcpy(name,nam);
	sex=s;
	}
	~Student(){}
	protected:
	int num;
	char name[20];
	char sex;
};

class Student1:public Student
{public:
	Student1(int n,char nam[20],char s,int a, char ad[40]):Student(n,nam,s){age=a;
		strcpy(addr,ad);
	}
	void show();
	~Student1(){}
	private:
	int age;
		char addr[40];
};

#include<iostream>
#include<string.h>
using namespace std;
class Student
{public:
	Student(int n,char nam[20])
	{num=n;
		strcpy(name,nam);
	}
	void display();
	protected:
	int num;
	char name[20];
};

class Student1:public Student
{
	public:
		Student1(int n,char nam[20],int n1,char nam1[20],int a,char ad[40]):Student(n,nam),monitor(n1,nam1)
	{age=a;
		strcpy(addr,ad);
	}
		void show();
		void show_monitor();
	private:
		Student monitor;
		int age;
		char addr[40];
};

#include<iostream>
#include<string.h>
using namespace std;
class Teacher
{public:
	Teacher(char nam[20],int a,char t[20]);
	void display();
	protected:
	char name[20];
	int age;
	char title[20];
};

class Student
{	
	public:
		Student(char nam[20],char s,float sco);
		void display1();
	protected:
		char name1[20];
		char sex;
		float score;
};

class Graduate:public Teacher,public Student
{	
	public:
		Graduate(char nam[20],int a,char s,char t[20],float sco,float w):Teacher(nam,a,t),Student(nam,s,sco),wage(w){}
		void show();
	private:
		float wage;
};

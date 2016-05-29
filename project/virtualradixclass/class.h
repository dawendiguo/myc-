#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	public:
		Person(char nam[20],char s,int a);
	protected:
		char name[20];
		char sex;
		int age;
};

class Teacher:virtual public Person
{
	public:
		Teacher(char nam[20],char s,int a,char t[20]):Person(nam,s,a){strcpy(title,t);}
	protected:
		char title[20];
};

class Student:virtual public Person
{
	public:
		Student(char nam[20],char s,int a,float sco):Person(nam,s,a)	{score=sco;}
	protected:
		float score;
};

class Guaduate:public Teacher,public Student
{
	public:
		Guaduate(char nam[20],char s,int a,char t[20],float sco,float w):Person(nam,s,a),Teacher(nam,s,a,t),Student(nam,s,a,sco),wage(w){}
		void show();
	private:
		float wage;
};

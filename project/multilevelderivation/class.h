#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		Student(int n,char nam[20]);
		void display();
	protected:
		int num;
		char name[20];
};

class Student1:public Student
{
	public:
		Student1(int n,char nam[20],int a):Student(n,nam){age=a;}
		void show();
	private:
		int age;
};

class Student2:public Student1
{	
	public:
		Student2(int n,char nam[20],int a,int s):Student1(n,nam,a)
	{score=s;}
		void show_all();
	private:
		int score;
};

#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
		Student(char nam[20],int n,float sco);
		void display();
	private:
		int num;
		char name[20];
		float score;
};

class Graduate:public Student
{
	public:
		Graduate(char nam[20],int n,float sco,float p):Student(nam,n,sco),pay(p){}
		void display();
	private:
		float pay;
};

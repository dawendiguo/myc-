#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
	Student(int n,char nam[20],float s);
virtual	void display();
	protected:
	int num;
	char name[20];
	float score;
};

class Gradute:public Student
{
	public:
	Gradute(int num,char nam[20],float sco,float pa);
	void display();
	private:
	float pay;
};




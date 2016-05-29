#include<iostream>
using namespace std;
class Student
{
	public:
		void display();
	protected:
		int num;
		char name[20];
		char sex;
};

class Student1:protected Student
{
	public:
		void get_value();
		void display1();
	private:
		int age;
		char addr[40];
};

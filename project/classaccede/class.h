#include<iostream>
using namespace std;
class Student
{
	public:
		void get_value();
		void display();
	private:
		int num;
		char name[20];
		char sex;
};

class Student1 :public Student
{
	public:
		void get_value1();
		void display1();
	private:
		int age;
		char addr[30];
};

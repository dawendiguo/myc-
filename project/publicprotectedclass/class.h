#include<iostream>
using namespace std;
class Student
{public:
	void display();
	void get_value();
	protected:
	int num;
	char name[20];
	char sex;
};

class Student1:public Student
{public:
	void display1();
	void get_value1();
	private:
	int age;
	char addr[40];
};

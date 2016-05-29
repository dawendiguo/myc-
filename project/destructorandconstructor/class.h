#include<iostream>
#include<string>
using namespace std;
class Student
{public:
	Student(int n,string nam,char s)
	{num=n;
		name=nam;
		sex=s;
		cout<<"Constructor called."<<endl;
	}
	~Student()
	{cout<<"Destructor called."<<endl;
	}
	void display()
	{
		cout<<"num= "<<num<<endl;
		cout<<"name: "<<name<<endl;
		cout<<"sex: "<<sex<<endl<<endl;
	}
	private:
	int num;
	string name;
	char sex;
};

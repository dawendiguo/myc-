#include"class.h"
Student::Student(int n,char nam[20])
{	num=n;
	strcpy(name,nam);
}

void Student::display()
{
	cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
}

void Student1::show()
{
	display();
	cout<<"age:"<<age<<endl;
}

void Student2::show_all()
{	
	show();
	cout<<"score:"<<score<<endl;
}


#include"class.h"
Student::Student(char nam[20],int n,float sco)
{
	strcpy(name,nam);
	num=n;
	score=sco;
}

void Student::display()
{
	cout<<"name:"<<name<<endl;
	cout<<"num:"<<num<<endl;
	cout<<"score:"<<score<<endl;
}

void Graduate::display()
{
	Student::display();
	cout<<"pay:"<<pay<<endl;
}

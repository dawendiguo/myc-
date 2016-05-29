#include"class.h"
Teacher::Teacher(char nam[20],int a,char t[20])
{
	strcpy(name,nam);
	age=a;
	strcpy(title,t);
}

void Teacher::display()
{
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"title:"<<title<<endl;
}

Student::Student(char nam[20],char a,float sco)
{
	strcpy(name1,nam);
	sex=a;
	score=sco;
}

void Student::display1()
{
	cout<<"name:"<<name1<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"score:"<<score<<endl;
}

void Graduate::show()
{
	cout<<"name:"<<name<<endl;
	cout<<"age;"<<age<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"score:"<<score<<endl;
	cout<<"title:"<<title<<endl;
	cout<<"wgges:"<<wage<<endl;
}

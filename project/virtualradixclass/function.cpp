#include"class.h"
Person :: Person(char nam[20],char s,int a)
{
	strcpy(name,nam);
	sex=s;
	age=a;
}

void Guaduate::show()
{
	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"title:"<<title<<endl;
	cout<<"score:"<<score<<endl;
	cout<<"wages:"<<wage<<endl;
}


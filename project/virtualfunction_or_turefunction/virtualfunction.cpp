#include"class.h"
Student::Student(int nu,char nam[20],float sc)
{
	num=nu;
	strcpy(name,nam);
	score=sc;
}

void Student::display()
{
	cout<<"num:"<<num<<"\nname:"<<name<<"\nscore:"<<score<<"\n\n";
}

void Gradute::display()
{cout<<"num:"<<num<<"\nname:"<<name<<"\nscore:"<<score<<"\npay:"<<pay<<endl;
}

Gradute::Gradute(int a,char nam[20],float s,float p):Student(a,nam,s),pay(p){}


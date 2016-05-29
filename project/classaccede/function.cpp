#include"class.h"

void Student::get_value()
{cin>>num>>name>>sex;}

void Student::display()
{
	cout<<"num:"<<num<<endl;
	cout<<"name: "<<name<<endl;
	cout<<"sex: "<<sex<<endl;
}

void Student1::display1()
{
	cout<<"age: "<<age<<endl;
	cout<<"address: "<<addr<<endl;
}

void Student1::get_value1()
{cin>>age>>addr;
}

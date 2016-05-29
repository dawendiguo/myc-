#include"class.h"
void Student::display()
{cout<<"num: "<<num<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
}

void Student1::display1()
{cout<<"num:"<<num<<endl;
cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"address:"<<addr<<endl;
}

void Student1::get_value()
{
	cin>>num>>name>>sex>>age>>addr;
}

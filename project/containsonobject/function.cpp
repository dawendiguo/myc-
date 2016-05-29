#include"class.h"
void Student::display()
{cout<<"num:"<<num<<endl;
	cout<<"name:"<<name<<endl;
}

void Student1::show()
{cout<<"This student is:"<<endl;
	display();
	cout<<"age:"<<age<<endl;
	cout<<"address:"<<addr<<endl<<endl;
}

void Student1::show_monitor()
{
	cout<<endl<<"Clean monitor is:"<<endl;
	monitor.display();
}

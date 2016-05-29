#include<iostream>
#include"class.h"
using namespace std;
int main()
{Time time1(34,59),time2;
	cout<<"time:";
	time1.display();
	++time1;
	cout<<"++time1:";
	time1.display();
	time2=time1++;
	cout<<"time1++:";
	time1.display();
	cout<<"time2:";
	time2.display();
	return 0;
}

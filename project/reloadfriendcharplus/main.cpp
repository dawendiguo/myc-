#include<iostream>
#include"class.h"
using namespace std;
int main()
{Complex c1(3,4),c2(5,-10),c3;
	c3=c1+c2;
	cout<<"c1=";c1.display();
	cout<<"c2=";c2.display();
	cout<<"c1+c2=";c3.display();
	return 0;
}

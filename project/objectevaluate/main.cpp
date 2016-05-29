#include<iostream>
#include"class.h"
using namespace std;
int main()
{Box box1(15,30,25),box2;
	cout<<"The volume of box1 is:"<<box1.volume()<<endl;
	box2=box1;
	cout<<"The volume of box2 is:"<<box2.volume()<<endl;
	return 0;
}

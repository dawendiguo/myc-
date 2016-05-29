#include<iostream>
#include"class.h"
using namespace std;
int main()
{Box box1;
	cout<<"The volume box1 is: "<<box1.volume()<<endl;
	Box box2(15,30,25);
	cout<<"The volume box2 is: "<<box2.volume()<<endl;
	return 0;
}

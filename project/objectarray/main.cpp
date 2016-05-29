#include<iostream>
#include"class.h"
using namespace std;
int main()
{
	Box a[3]={
		Box(10,12,15),
		Box(15,18,20),
		Box(16,20,26)
	};
	cout<<"volume of a[0] is "<<a[0].volume()<<endl;
	cout<<"volume of a[1] is "<<a[1].volume()<<endl;
	cout<<"volume of a[2] is "<<a[2].volume()<<endl;
}

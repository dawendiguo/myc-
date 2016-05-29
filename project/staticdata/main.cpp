#include<iostream>
#include"class.h"
using namespace std;
int main()
{Box a(15,20),b(20,30);
	cout<<a.height<<endl;
	cout<<b.height<<endl;
	cout<<a.volume()<<endl;
	b.height=30;
	cout<<a.volume()<<endl;
	return 0;
}

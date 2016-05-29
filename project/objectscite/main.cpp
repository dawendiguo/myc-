#include<iostream>
#include"class.h"
using namespace std;
void fun(Time &t)
{t.hour=18;
}
int main()
{Time t1(10,13,56);
	fun(t1);
	cout<<t1.hour<<endl;
	cout<<t1.minute<<endl;
	return 0;
}

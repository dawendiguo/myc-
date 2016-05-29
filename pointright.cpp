#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a=123.123456789,b=3.1415926,c=3214.67;
	cout<<setiosflags(ios::fixed)<<setiosflags(ios::right)<<setprecision(3);
	cout<<setw(10)<<a<<endl;
	cout<<setw(10)<<b<<endl;
	cout<<setw(10)<<c<<endl;
	return 0;
}


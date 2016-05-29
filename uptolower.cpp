#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Please input a char :";
	cin>>c;
	c=(c>'A'&&c<'Z')?(c+32):c;
	cout<<c<<endl;
	return 0;
}


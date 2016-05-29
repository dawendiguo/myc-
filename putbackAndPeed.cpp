#include<iostream>
using namespace std;
int main()
{
	char c[20];
	int ch;
	cout<<"Please input a sentence:"<<endl;
	cin.getline(c,15,'/');
	cout<<"The first part is:"<<c<<endl;
	ch = cin.peek();
	cout<<"The next character(ACS|| code) is:"<<ch<<endl;
	cin.putback(c[0]);
	cin.getline(c,15,'/');
	cout<<"The second part is:"<<c<<endl;
	return 0;
}

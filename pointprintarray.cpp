#include<iostream>
using namespace std;
int main()
{int a[10];
	int *p;
	int i;
	p=a;
	for(i=0;i<10;i++)
		cin>>*(p+i);
	cout<<endl;
	for(i=0;i<10;i++)
		cout<<*(p+i)<<" ";
	cout<<endl;
	return 0;
}

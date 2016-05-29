#include<iostream>
using namespace std;
int main()
{void swap(int &,int &);
	int a,b;
	cin>>a>>b;
	swap(a,b);
	cout<<"a=" <<a<<" b="<<b<<endl;
	return 0;
}

void swap(int &i,int &j)
{int temp;
	temp=i;
	i=j;
	j=temp;
}

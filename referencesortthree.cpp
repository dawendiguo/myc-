#include<iostream>
using namespace std;
int main()
{void sort(int &,int &,int &);
	int a,b,c;
	int a1,b1,c1;
	cout<<"Please input three number :";
	cin>>a>>b>>c;
	a1=a;b1=b;c1=c;
	sort(a1,b1,c1);
	cout<<"sorted order is "<<a1<< " "<<b1<< " " <<c1<<endl;
	return 0;
}

void sort(int &i,int &j,int &k)
{void change(int &,int &);
	if(i>j) change(i,j);
	if(i>k) change(i,k);
	if(j>k) change(j,k);
}

void change(int &i,int &y)
{int temp;
	temp = i;
	i=y;
	y=temp;
}

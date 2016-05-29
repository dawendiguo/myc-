#include<iostream>
using namespace std;
int main()
{int max(int x,int y);
	int (*p)(int ,int );
	int a,b,m;
	p=max;
	cin>>a>>b;
	m=p(a,b);
	cout<<"max= "<<m<<endl;
	return 0;
}

int max(int x,int y)
{int m;
	m=(x>y)?x:y;
}

#include<iostream>
using namespace std;
int main()
{void exchang(int *,int *,int *);
	int a,b,c,*p1,*p2,*p3;
	cin>>a>>b>>c;
	p1=&a;p2=&b;p3=&c;
	exchang(p1,p2,p3);
	cout<<a<<" "<<b<< " "<<c<<endl;
	return 0;
}
void exchang(int *pt1,int *pt2,int *pt3)
{void swap (int *,int *);
	if(*pt1<*pt2) swap(pt1,pt2);
	if(*pt1<*pt3) swap(pt1,pt3);
	if(*pt2<*pt3) swap(pt2,pt3);
}

void swap(int *p1,int *p2)
{int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}


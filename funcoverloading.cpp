#include<iostream>
using namespace std;
int main()
{int max(int x,int y);
double max(double x,double y);
float max(float x,float y);
int i1,i2;
cin>>i1>>i2;
cout<<"bigger is :"<<max(i1,i2)<<endl;
double e1,e2;
cin>>e1>>e2;
cout<<"double bigger is:"<<max(e1,e2)<<endl;
float a1,a2;
cin>>a1>>a2;
cout<<"float bigger is :"<< max(a1,a2)<<endl;
return 0;
}
int max(int x,int y)
{
	if(x>y)
	return x;
	else 
	return y;
}
double max(double x, double y)
{
	if(x>y)
	return x;
	else 
	return y;
}
float max(float x,float y)
{
	if(x>y)
	return x;
	else 
	return y;
}

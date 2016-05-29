#include<iostream>
using namespace std;
int main()
{
float add(float a,float b);
float a,b;
cout<<"Please input two number: ";
cin>>a>>b;
cout<<"The two number add is:"<<add(a,b)<<endl;
return 0;
}

float add(float x,float y)
{float c;
c=x+y;
return c;
}

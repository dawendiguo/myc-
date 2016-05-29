#include<iostream>
using namespace std;
int main()
{int max(int x,int y);
int max(int x,int y,int z);
int a,b,c;
cin>>a>>b>>c;
cout <<a<<" and "<<b<<" the bigger is;"<<max(a,b)<<endl;
cout <<a<<" and "<<b<<" and "<<c<<" bigger is :"<<max(a,b,c)<<endl;
return 0;
}
int max(int x,int y)
{if(x>y)
return x;
else 
return y;
}
int max(int x,int y,int z)
{if(x>y&&x>z)
return x;
else if(y>x&&y>z)
return y;
else
return z;
}


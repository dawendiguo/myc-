#include<iostream>
using namespace std;
int max(int x,int y)
{int z;
if(x>y) z=x;
else z=y;
return z;
}

int main()
{int x,y;
cout<<"Please input two number:";
cin>>x>>y;
cout<<"The max number is :"<<max(x,y)<<endl;
return 0;
}

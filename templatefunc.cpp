#include<iostream>
using namespace std;
template<typename T>
T max(T a,T b,T c)
{if(a>b&&a>c)
return a;
else if(b>a&&b>c)
return b;
else 
return c;
}
int main()
{int x,y,z;
cin>>x>>y>>z;
cout<<x<<"and "<<y<<"and"<<z<<"the bigest is:"<<max(x,y,z)<<endl;
cout<<"12.1 and 3.14 and 56.7 the bigest is: "<<max(12.1,3.14,56.7)<<endl;
cout<<"123123123123 and 2323232323443 and 374634637467346 the bigest is: " <<max(123123123123,2323232323443,374634637467346)<<endl;
return 0;
}

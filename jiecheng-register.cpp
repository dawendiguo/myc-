#include<iostream>
using namespace std;
int fac(int n)
{
    register int i,f=1;
    for(i=1;i<=n;i++) f=f*i;
    return f;
}

int main()
{
    int s;
    cin>>s;
    cout<<s<<"!="<<fac(s)<<endl;
    return 0;
}

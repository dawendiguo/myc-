#include<iostream>
#include"externfunc2.cpp"
using namespace std;
int main()
{
    extern int max(int ,int );
    int a,b;
    cin>>a>>b;
    cout<<max(a,b)<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main()
{long jiechen(int i);
    int i;
    long y;
    cout <<"Please input a number :";
    cin>>i;
    y=jiechen(i);
    cout<<i<<"!="<<y<<endl;
    return 0;
}

long jiechen(int i)
{
    long s;
    if(i==1||i==0) s=1;
    else
    {
        s=jiechen(i-1)*i;
    }
    return s;
}

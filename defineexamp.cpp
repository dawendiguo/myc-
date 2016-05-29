#include<iostream>
using namespace std;
#define RUN
int main()
{
    int x=1,y=2,z=3;
    #ifdef RUN
    cout<<"x="<<x<<",y="<<y<<",z="<<z;
    #endif // RUN
    cout<<"x*y*z="<<x*y*z<<endl;
    return 0;
}

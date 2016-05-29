#include<iostream>
#include"class.h"
using namespace std;
int main()
{
    Compare<int>cmp1(3,7);
    cout<<cmp1.max()<<"is the Mximum :"<<endl;
    cout<<cmp1.min()<<"is the smaller."<<endl<<endl;
    Compare<float>cmp2(12.23,434.22);
    cout<<cmp2.max()<<"is the bigger one."<<endl;
    cout<<cmp2.min()<<"is the small one."<<endl<<endl;
   Compare<char>cmp3('a','B');
   cout<<cmp3.max()<<" is the bigger."<<endl;
   cout<<cmp3.min()<<" is the small one."<<endl;
    return 0;
}

#include<iostream>
using namespace std;
struct Date
{int day;
int month;
int year;
};
struct Okd
{int num;
Date ttd;
};
int main()
{
    Okd xx;
    xx={34,22,44,12};
    cout<<xx.ttd.month;
    return 0;
}

#include<iostream>
#include"class.h"
using namespace std;
Time::Time(int h,int m,int s)
{hour=h;
	minute=m;
	sec=s;
}
void Time::get_time()
{cout<<hour<<":"<<minute<<":"<<sec<<endl;
}


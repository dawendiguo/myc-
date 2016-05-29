#include<iostream>
#include"class.h"
using namespace std;
Time::Time(int h,int m,int s)
{hour=h;
	minute=m;
	sec=s;
}

void Time::display(Date &d)
{cout<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}

Date::Date(int m,int d,int y)
{month=m;
	day=d;
	year=y;
}

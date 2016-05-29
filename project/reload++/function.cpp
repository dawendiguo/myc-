#include"class.h"
#include<iostream>
using namespace std;
Time Time::operator++()
{if(++sec>=60)
	{sec=0;
		++minute;
	}
	return *this;
}

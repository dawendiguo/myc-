#include"class.h"
Time Time::operator++()
{if(++sec>=60)
	{sec=0;
		++minute;}
	return *this;
}

Time Time::operator++(int)
{Time temp(*this);
	sec++;
	if(sec>=60)
	{sec=0;
		++minute;}
	return temp;
}

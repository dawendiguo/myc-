#include<iostream>
using namespace std;
class Time
{public:
	Time(){minute=0;sec=0;}
	Time(int m,int s):minute(m),sec(s){}
	Time operator++();
	void display(){cout<<minute<<":"<<sec<<endl;}
	private:
	int minute;
	int sec;
};

#include<iostream>
#include"class.h"
using namespace std;
Box::Box(int h,int w,int len)
{height=h;
	width=w;
	length=len;
}

int Box::volume()
{return (height*length*width);
}

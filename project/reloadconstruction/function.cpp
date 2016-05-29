#include<iostream>
#include"class.h"
using namespace std;
Box::Box()
{height=10;
	width=10;
	length=10;
}
int Box::volume()
{return (height*width*length);
}


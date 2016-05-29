#include<iostream>
#include"class.h"
using namespace std;
Complex Complex::operator+(Complex &c2)
{Complex c;
	c.real=real+c2.real;
	c.imag=imag+c2.imag;
	return c;
}
void Complex::display()
{cout<<"("<<real<<","<<imag<<"i)"<<endl;
}

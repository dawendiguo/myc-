#include<iostream>
#include"class.h"
using namespace std;

ostream& operator <<(ostream& output,Complex &c)
{output<<"("<<c.real<<"+"<<c.imag<<"i)"<<endl;
	return output;
}

istream& operator >>(istream& input,Complex &c)
{
	cout<<"input real part amd imaginary patt of complex number:";
	input>>c.real>>c.imag;
	return input;
}

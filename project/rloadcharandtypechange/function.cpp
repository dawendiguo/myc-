#include<iostream>
#include"class.h"
using namespace std;
Complex operator +(Complex c1,Complex c2)
{return Complex(c1.real+c2.real,c1.imag+c2.imag);}

void Complex::display()
{cout<<"("<<real<<","<<imag<<"i)"<<endl;
}

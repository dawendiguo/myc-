#include<iostream>
using namespace std;
class Complex
{
	public:
		Complex(){real=0;imag=0;}
		Complex(double r,double i){real=r;imag=i;}
		Complex operator +(Complex &c2);
		friend ostream& operator <<(ostream&,Complex&);
	private:
		double real;
		double imag;
};

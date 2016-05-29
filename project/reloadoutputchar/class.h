#include<iostream>
using namespace std;
class Complex
{public:
	friend ostream& operator <<(ostream&,Complex&);
	friend istream& operator >>(istream&,Complex&);
	private:
	double real;
	double imag;
};

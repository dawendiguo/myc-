class Complex
{public:
	Complex(){real=0;imag=0;}
	Complex(double r,double i){real=r;imag=i;}
	Complex operator+(Complex &c2);
	void display();
	private:
	double real;
	double imag;
};

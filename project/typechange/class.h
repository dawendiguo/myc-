class Complex
{
	public:
		Complex(){real=0;imag=0;}
		Complex(double r,double i){real=r;imag=i;}
		operator double(){return real;}
	private:
		double real;
		double imag;
};

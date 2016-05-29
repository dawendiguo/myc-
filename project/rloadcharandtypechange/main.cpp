#include"class.h"
int main()
{
	Complex c1(3,4),c2(5,-10),c3,c4;
	c4=c2+4.6;
	c3=c1+c2;
	c3.display();
	c4.display();
	return 0;
}

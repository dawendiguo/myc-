#include"class.h"
void Point::setPoint(float a,float b)
{
	x=a;
	y=b;

}

ostream & operator<<(ostream &output,const Point &p)
{
	output<<"["<<p.x<<","<<p.y<<"]"<<endl;
	return output;
}

void Circle::setRadius(float r)
{radius=r;
}

float Circle::getRadius()const{return radius;}

float Circle::area()const
{return 3.1415926*radius*radius;}

ostream & operator<<(ostream &output,const Circle &c)
{
	output<<"Center=["<<c.x<<","<<c.y<<"],r="<<c.radius<<",area="<<c.area()<<endl;
	return output;
}

void Cylinder::setHeight(float h)
{height=h;
}

float Cylinder::getHeight()const
{return height;
}

float Cylinder::area()const
{return 2*Circle::area()+2*3.1415926*radius*height;}

float Cylinder::volume()const
{return Circle::area()*height;}

ostream & operator<<(ostream &output,const Cylinder &cy)
{
	output<<"Center=["<<cy.x<<","<<cy.y<<"],r="<<cy.radius<<",h="<<cy.height<<"\\narea="<<cy.area()<<",volume="<<cy.volume()<<endl;
	return output;
}

Cylinder::Cylinder(float a,float b,float r,float h):Circle(a,b,r),height(h){}

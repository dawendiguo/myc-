#include<iostream>
using namespace std;
class Point
{
	public:
		Point(float a,float b){x=a;y=b;}
		void setPoint(float,float);
		float getX() const{return x;}
		float getY() const{return y;}
		friend ostream & operator<<(ostream &,const Point &);
	protected:
		float x,y;
};

class Circle:public Point
{
	public:
		Circle(float a,float b,float r):Point(a,b),radius(r){}
		void setRadius(float);
		float getRadius() const;
		float area() const;
		friend ostream &operator<<(ostream &,const Circle &);
	protected:
		float radius;
};

class Cylinder:public Circle
{
	public:
		Cylinder(float a,float b,float r,float h);
		void setHeight(float);
		float getHeight() const;
		float area() const;
		float volume() const;
		friend ostream&operator<<(ostream&,const Cylinder &);
	protected:
		float height;
};

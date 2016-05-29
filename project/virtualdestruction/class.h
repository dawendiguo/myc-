#include<iostream>
using namespace std;
class Point {
public :
	Point(){}
	virtual 	~Point();
};

class Circle: public Point
{
	public:
	Circle(){}
 	~Circle();
private:
	int radius;
};



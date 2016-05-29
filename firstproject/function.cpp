#include"class.h"
Box::Box(int h,int w,int len)
{
    height=h;
    weith=w;
    length=len;
}

int Box::volume()
{
    return (height*weith*length);
}

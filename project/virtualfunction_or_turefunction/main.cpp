/*************************************************************************
	> File Name: main.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2015年12月08日 星期二 22时59分52秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include"class.h"
int main()
{
Student stud1(1001,"Li",87.5);
Gradute grad1(2001,"Wang",98.5,563.2);
Student *pt=&stud1;
pt->display();
pt=&grad1;
pt->display();
return 0;
}

#include"class.h"
int main()
{
	Student stud1("li",10010,87.5);
	Graduate grad1("Wang",2001,98.5,563.7);
	Student *pt=&stud1;
	pt->display();
	pt=&grad1;
	pt->display();
}

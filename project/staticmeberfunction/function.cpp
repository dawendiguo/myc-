#include"class.h"
void Student::total()
{sum+=score;
	count++;
}

float Student::average()
{return (sum/count);
}

float Student::sum=0;
int Student::count=0;

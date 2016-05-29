#include<iostream>
using namespace std;
struct Student 
{int num;
	char name[20];
	float score[2];
}stu={123,"dawendiguo",34,99};
int main()
{void print(Student &);
	print(stu);
	return 0;
}

void print(Student &b)
{cout<<b.num<<" "<< b.name<<" "<<b.score[0]<<" "<<b.score[1]<<endl;
}

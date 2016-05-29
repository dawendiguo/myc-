#include<iostream>
#include<string.h>
#include<string>
struct Student
{int num;
//	string name;
	char name[20];
	float score[3];
};
using namespace std;
int main()
{void print(Student s);
	Student stu;
	stu.num=12345;
//	stu.name="Li Fang";
	strcpy(stu.name,"li Fang");
	stu.score[0]=76.5;
	stu.score[1]=89;
	stu.score[2]=78.5;
	print(stu);
	cout<<stu.name<<endl;
	return 0;
}

void print(Student s)
{cout<<s.num<< " "<< s.name<< " " << s.score[1]<< " " <<  s.score[0]<< " " <<s.score[2]<<endl;
}

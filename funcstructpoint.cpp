#include<iostream>
#include<string>
using namespace std;
struct Student
{int num;
	char name[20];
	float score[3];
}stu={12345,"Li Fang",67.5,89,78.5};
int main()
{void print(Student *);
	Student *p=&stu;
	print(p);
	return 0;
}

void print(Student *s)
{cout<<s->num<<" " <<s->name<<" "<<s->score[0]<<" "<<s->score[1]<<" "<<s->score[2]<<endl;
}

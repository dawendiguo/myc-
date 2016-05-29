#include<iostream>
using namespace std;

class Student
{
private:
int num;
int   score;
public:
void setdate()
{
	cin>>num;
	cin>>score;
}
	void display()
	{
	cout<<"num="<<num<<"\n";
	cout<<"score = "<<score<<"\n";
	};
};
Student stud1,stud2;
int main()
{
	stud1.setdate();
	stud2.setdate();
	stud1.display();
	stud2.display();
	return 0;
}

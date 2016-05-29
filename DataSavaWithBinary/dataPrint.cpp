#include<fstream>
#include<iostream>
using namespace std;
struct Student
{
	char name[20];
	int num;
	int age;
	char sex;
};

int main()
{
	Student stud[3];
	ifstream infile("stud.txt",ios::binary);
	if(!infile)
		cerr<<"open stud.txt error!"<<endl;
	for(int i=0;i<3;i++)
		infile.read((char *)&stud[i],sizeof(stud[i]));
		infile.close();
		for(int i=0;i<3;i++){
			cout<<"NO."<<i+1<<endl;
			cout<<"name:"<<stud[i].name<<endl;
			cout<<"num:"<<stud[i].num<<endl;
			cout<<"age:"<<stud[i].age<<endl;
			cout<<"sex:"<<stud[i].sex<<endl<<endl;
		}
		return 0;
}
	

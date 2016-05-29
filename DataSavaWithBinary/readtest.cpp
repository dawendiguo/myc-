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
	infile.read((char *)&stud[0],sizeof(stud));
	infile.close();
	cout<<stud<<endl;
	return 0;
}

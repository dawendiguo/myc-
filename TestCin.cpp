#include<iostream>
using namespace std;
int main()
{
	float grade;
	cout<<"enter grade:";
	while (cin >> grade){
	if ( grade >= 85 ) cout<<grade<<" is GOOD"<<endl;
	if ( grade < 60 ) cout<<grade<<" is fail!"<<endl;
	cout<<"enter grade: ";
	}
	cout<< " The endl. " <<endl;
	return 0;
}

#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	int a[10];
	ofstream outfile("file.txt",std::ios::out);
	if(!outfile){
		cerr<<"open error!"<<endl;
	}
	cout<<"enter 10 integer numbers:"<<endl;
	for(int i=0;i<10;i++){
		cin>>a[i];
		outfile<<a[i]<<" ";}
	outfile.close();
	return 0;
}

#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream input("input.txt",ios::in);
	int a[10],max,order;
	if(!input){
		cerr<<"open file error!"<<endl;
	}
	for(int i=0;i<10;i++){
		input>>a[i];
		cout<<a[i]<<" ";}
	cout<<endl;
	max=a[0];
	order=0;
	for(int i=0;i<10;i++){
		if(a[i]>max){
			max=a[i];
			order = i;
		}
	}
	cout<<"max= "<<max<<endl;
	cout<<"order = "<<order<<endl;
	input.close();
	return 0;
}


#include<fstream>
#include<iostream>
using namespace std;
void sava_to_file()
{
	int flag=0;
	ifstream inputfile("input.txt",ios::in);
	if(!inputfile){
		cerr<<"open input.txt error!"<<endl;
	}
	ofstream outfile ("char.txt");
	if(!outfile){
		cerr<<"Open char.txt error!"<<endl;
	}
	char c;
	while(inputfile.get(c)!=0){
		if(c>=65&&c<=90||c>=97&&c<=122)
		{outfile.put(c);
			cout<<c;
		flag=0;}
	
		else if(c=='\n'&&flag!=1){
			flag = 1;
			outfile.put(c);
			cout<<c;
		}
	}
		cout<<endl;
		outfile.close();
}

void get_from_file()
{
	char ch;
	ifstream infile("char.txt",ios::in);
	if(!infile){
		cerr<<"open char.txt error"<<endl;
	}
	ofstream outfile("outputchar.txt");
	if(!outfile){
		cerr<<"open outputchar.txt error!"<<endl;
	}
	while (infile.get(ch)){
		if(ch>=97&&ch<=122)
			ch-=32;
		outfile.put(ch);
		cout<<ch;
	}
	cout<<endl;
	infile.close();
	outfile.close();
}

int main()
{
sava_to_file();
	get_from_file();
	return 0;
}


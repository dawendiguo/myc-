#include"class.h"
int main()
{
	Student stud[5]={"Li",1001,85,"Fun",1002,97.5,"Wang",1004,54,"Tan",1006,76.5,"Ling",1010,96};
	Student stud1[5];
	fstream iofile("stud.txt",ios::in|ios::out|ios::binary);
	if(!iofile)
		cerr<<"open error!"<<endl;
	for(int i=0;i<5;i++)
	{
		iofile.write((char *)&stud[i],sizeof(stud[0]));
	}
	for(int i = 0;i<5;i+=2){
		iofile.seekg(i*sizeof(stud[i]),ios::beg);
		iofile.read((char *)&stud1[i/2],sizeof(stud1[0]));
		cout<<stud1[i/2].num<<"  "<<stud1[i/2].name<<"  "<<stud1[i/2].score<<endl;
	}
	cout<<endl;
	stud[2].num=1012;
	strcpy(stud[2].name,"Wu");
	stud[2].score=60;
	iofile.seekp(2*sizeof(stud[0]),ios::beg);
	iofile.write((char *)&stud[2],sizeof(stud[2]));
	iofile.seekg(0,ios::beg);
	for(int i=0;i<5;i++){
		iofile.read((char *)&stud[0],sizeof(stud[0]));
		cout<<stud[i].num<<"  "<<stud[i].name<<"  "<<stud[i].score<<endl;
	}
	iofile.close();
	return 0;
}



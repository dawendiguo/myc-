#include<iostream>
using namespace std;
int main()
{void outprint(int (*p)[4]);
	int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	outprint(a);
	return 0;
}

void outprint(int (*p)[4])
{int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			cout<<*(*(p+i)+j)<<" ";
	cout<<endl;
}

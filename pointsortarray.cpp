#include<iostream>
using namespace std;
int main()
{void select_sort(int *p,int i);
	int a[10],i;
	cout<<"please input the originl array: "<<endl;
	for(i=0;i<10;i++)
		cin>>a[i];
	cout<<endl;
	select_sort(a,10);
	cout<<"the sorted array is:"<<endl;
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}

void select_sort(int *p,int n)
{int i,j,k,t;
	for(i=0;i<n;i++)
	{k=i;
		for(j=i+1;j<n;j++)
			if(*(p+j)<*(p+k)) k=j;
		t=*(p+k); *(p+k)=*(p+i); *(p+i)=t;
	}
}

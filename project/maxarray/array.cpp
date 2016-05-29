#include<iostream>
#include"array.h"
using namespace std;
void Array_max::set_value()
{int i;
	for(i=0;i<10;i++)
		cin>>array[i];
}
void  Array_max::max_value()
{int i;
	max=array[0];
	for(i=0;i<10;i++)
	if(array[i]>max)  max=array[i];
}
void Array_max::show()
{int i;
	for(i=0;i<10;i++)
		cout<<array[i]<<" ";
}
void Array_max::max_show()
{cout<<"max= "<<max<<endl;
}

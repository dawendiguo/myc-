#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{char c;
while((c=getchar())!='\n')
{if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{c=c-4;
	if(c<'a'&&c>='a'-4||c<'A')  c=c+26;
	}
cout<<c;
}
cout<<endl;
return 0;
}

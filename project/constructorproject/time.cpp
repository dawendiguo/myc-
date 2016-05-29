#include<iostream>
#include"time.h"
using namespace std;
void Time::set_time()
{cin>>hour>>minute>>sec;
}
void Time::show_time()
{cout<<"hour= "<<hour<<"minute= "<<minute<<"sec= "<<sec<<endl;
}

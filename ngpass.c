#include<stdio.h>
void main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66},{77,22,88,66}};
	float *search(float (*point)[4]);
	float *p;
	int i,j;
	for(i=0;i<4;i++)
		{for(j=0;j<4;j++)
			printf("%.0f ",score[i][j]);
		printf("\n");}
	for(i=0;i<4;i++)
	(p=search(score+i));
		if(p== *(score+i))
		{printf("NO.%d score:",i);
		for(j=0;j<4;j++)
			printf("%5.1f",*(p+j));
		printf("\n");
		}
		else 
		printf("error not find \n");
}

float *search(float (*point)[4])
{int i;
	float *pt;
	pt=*point;
	for(i=0;i<4;i++)
		if(*(*point+i)<60)   
			pt=*point;
	return(pt);
}



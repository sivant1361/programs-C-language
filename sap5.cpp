
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	int a,b,c,sum;
	float avg;
	char ch;
	printf("********************************************\n\n");
	printf("ENTER THE MARKS:\n");
	printf("PHYSICS:");
	scanf("%d",&a);
	if(a<=0)
	{
		printf("Enter the mark greater than zero:");
		scanf("%d",&a);
	}
	printf("CHEMISTRY:");
	scanf("%d",&b);	
	if(b<=0)
	{
		printf("Enter the mark greater than zero:");
		scanf("%d",&b);
	}
	printf("MATHS:");
	scanf("%d",&c);
	if(c<=0)
	{
		printf("Enter the mark greater than zero:");
		scanf("%d",&c);
	}
	printf("\nThe marks are:\nPHYSICS=%d\nCHEMISTRY=%d\nMATHS=%d\n",a,b,c);
	sum=a+b+c;
	avg=sum/3;
	printf("\nSUM=%d\nAVG=%0.2f\n",sum,avg);
	if(avg>75)
	printf("GRADE A");
	if(avg==75)
	printf("GRADE B");
	if(avg<75)
	printf("GRADE C");
	printf("\n********************************************");
	return 0;
}

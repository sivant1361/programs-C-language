#include<stdio.h>
int small(int,int);

void main()
{
	int a,b;
	printf("Enter any two  numbers:\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	int s=small(a,b);
	printf("The smallest of two number is %d",s);
}

int small(int a,int b)
{

	if(a<b)
	return a;
	else 
	return b;
}

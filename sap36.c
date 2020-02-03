#include<stdio.h>
int small();

void main()
{
	int s=small();
	printf("The smallest of two number is %d",s);
}

int small()
{
	int a,b;
	printf("Enter any two  numbers:\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	if(a<b)
	return a;
	else 
	return b;
}

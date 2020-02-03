#include<stdio.h>
int small(int a,int b);

void main()
{
	int a,b,s;
	printf("Enter any two  numbers:\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	s=small(a,b);
	printf("The smallest of two number is %d",s);
}

int small(int a,int b)
{
	if(a<b)
	return a;
	else 
	return b;
}

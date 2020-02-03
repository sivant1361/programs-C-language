#include<stdio.h>
void sum(int,int);

int main()
{
	int a,b;
	printf("Enter any two  numbers:\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	sum(a,b);
	return 0;
}

void sum(int a,int b)
{
	int sum=a+b;
	printf("Sum=%d",sum);
}

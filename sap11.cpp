#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%5!=0)
	{
		printf("The number is not divisible by 5 and 11!!!");
	}
	else if(n%11==0)
	{
		printf("The number is divisible by 5 and 11!!!");
	}
	else
	{
		printf("The number is not divisible by 5 and 11!!!");
	}
}

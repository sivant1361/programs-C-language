#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a number:\n");
	scanf("%d%d",&a,&b);
	if(a>b||b>a)
	{
		printf("The biggest number is %d");
	}
	return 0;
}

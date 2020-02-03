#include<stdio.h>

int main()
{
	int a[10];
	int i;
	printf("Enter the values:\n");
	for(i=0;i<10;i++)
	{
		printf("a%d=",i);
		scanf("%d",&a[i]);
	}
	printf("The values are:\n");
	for(i=0;i<10;i++)
	{
		printf("a%d=%d\n",i,a[i]);
	}
	return 0;
}

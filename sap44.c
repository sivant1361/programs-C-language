#include<stdio.h>

int main()
{
	int a[5];
	int i,sum=0,avg;
	printf("Enter the values:\n");
	for(i=0;i<5;i++)
	{
		printf("a%d=",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=sum/5;
	printf("Sum=%d\nAverage=%d",sum,avg);
	return 0;
}

#include<stdio.h>
int sum_mark(int a[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}
int main()
{
	int mark[20],n,i,sum;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&mark[i]);
	}
	sum=sum_mark(mark,n);
	printf("The sum of all the marks is %d.",sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int a[20],n,i,*p;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nDisplaying the elements using pointer:\n");
	p=a;
	for(i=0;i<n;i++)
	printf("%d\n",*p++);
	return 0;
}

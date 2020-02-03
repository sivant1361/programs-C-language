#include<stdio.h>
int main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The elements are :\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}

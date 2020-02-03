#include<stdio.h>

int main()
{
	//declaring the variables.
	
	int a[20],*p[20],i,n;
	
	//getting the number of elements.
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	//getting the elements and storing their addressess in a pointer array.
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d:",i+1);
		scanf("%d",&a[i]);
		p[i]=&a[i];
	}
	
	//displaying the elememnts using pointer array.
	
	printf("The elements are the following:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*p[i]);
	}
	
	return 0;
}

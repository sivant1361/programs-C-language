#include<stdio.h>
#include<stdlib.h>
int main()
{
	//delaring the variables.
	
	int n,i,sum=0,*a;
	
	//getting the number of numbers.
	
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	//dynamically allocating the space.
	
	a=(int *)calloc(n,sizeof(int));
	
	//getting the elements and finding the sum.
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	//displaying the elements.
	
	printf("The elements are:\n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	
	//displaying the value.
	
	printf("Sum=%d",sum);
	free(a);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
	//declaration of elements.
	
	int n,*a,i,sum=0;
	
	//getting no. of elements.
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	//dynamicalling allocating the space for the elements.
	
	a=(int *)malloc(n*sizeof(int));
	
	//getting the values for the array and finding the sum.
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		sum+=*(a+i);
	}
	
	//printing the value of sum.
	
	printf("Sum=%d",sum);
	return 0;
}

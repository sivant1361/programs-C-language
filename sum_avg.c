#include<stdio.h>
#include<stdlib.h>
int main()
{
	//delaring the variables.
	
	int n,i,*a,avg,sum=0;
	
	//getting number of inputs.
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	//dynamically allocating the space for the pointer.
	
	a=(int *)malloc(sizeof(int));
	
	//getting the elements and finding the sum.
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	//finding the average.
	
	avg=sum/n;
	
	//displaying the value of average.
	
	printf("The average is %d.",avg);
	free(a);
	return 0;
}



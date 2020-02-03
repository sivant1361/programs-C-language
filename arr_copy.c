#include<stdio.h>
#include<stdlib.h>
int main()
{
	//declaratin of variables.
	
	int *a,*b,n,i;
	
	//makeup begins:)
	
	printf("***************************************\n\n");
	
	//getting the number of elements.
	
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	//allocating the memory dynamically for both a and b.
	
	a=b=(int*)malloc(n*sizeof(int));
	
	//getting the input for array a and copying them into array b.
	
	printf("\nEnter the of elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d=",i+1);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	
	//printing the elements of array a.
	
	printf("\nArray 1 = ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	
	//printing the elements of array b.
	
	printf("\nArray 2 = ");
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
	
	// makeup ends :)
	
	printf("\n\n***************************************");
	return 0;
}

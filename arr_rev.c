#include<stdio.h>
int main()
{
	//declaration of variables.
	
	int a[20],*ptr,n,i,j,temp;
	
	//getting the number of elements in the array.
	
	printf("Enter no. of elements:");
	scanf("%d",&n);
	
	//getting the elements for the array.
	
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		printf("Element %d=",i+1);
		scanf("%d",&a[i]);
	}
	
	//intialising the base address of the array to the pointer variable.
	
	ptr=a;
	
	//swapping the first elements of the array to the last elements,inorder to reverse the array.
	 
	for(j=n-1;j>=n/2;j--)
	{
	temp=*ptr;
	*ptr=a[j];
	a[j]=temp;
	ptr++;
	}
	
	//displaying the reversed array.
	
	printf("\nThe array in reverse order is:\n");
	for(i=0,j=n;i<n;i++,j--)
	printf("Element %d=%d\n",j,a[i]);
	return 0;
}

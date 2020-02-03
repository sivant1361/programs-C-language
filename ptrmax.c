#include<stdio.h>

int main()
{
	//initialising pointers and variables.
	
	int a,b,*aptr,*bptr;
	
	//getting the value of a and b.
	
	printf("Enter the value:\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	
	//assigning the addressess of the variables to the pointers.
	
	aptr=&a;
	bptr=&b;
	
	//finding the greatest of two numbers using pointers.
	
	if(*aptr<*bptr)
	printf("b is greater!!!");
	else
	printf("a is greater!!!");
	
	return 0;
}

#include<stdio.h>

int main()
{
	//declaring a variable of integer type and pointer type.

	int a,*ptr;
	
	//getting the value of a.
	
	printf("Enter a number:");
	scanf("%d",&a);
	
	//refering the address of a to pointer ptr.
	
	ptr=&a;
	
	//printing value and address of a.
	
	printf("\nThe value of num=%d\n",a);
	printf("The address of a=%u\n",&a);
	
	//printing the value and address of a using pointer ptr.
	
	printf("\nThe value stored in ptr=%d\n",*ptr);
	printf("The address pointed by ptr=%u\n",ptr);
	
	//finding whether the number is odd or even using pointer ptr.
	
	if(*ptr%2==0)
	printf("\nThe number is even!!!");
	else 
	printf("\nThe number is odd!!!");
	
	return 0;
}

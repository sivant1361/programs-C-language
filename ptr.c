#include<stdio.h>
#include<string.h>
int main()
{
	int a=13,*ptr;
	ptr=&a;
	float b=13.61;
	printf("*********************************************\n\n");
	printf("The value of a=%d\n",a);
	printf("The base address of a=%u\n",&a);
	printf("The value of ptr=%u\n",ptr);
	printf("The value stored in the pointer:%d\n",*ptr);
	printf("The value of b=%0.2f\n",b);
	printf("The address of b=%u\n",&b);
	printf("\n*********************************************");
	return 0;
}


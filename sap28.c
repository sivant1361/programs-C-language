#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=1,fac=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	do
	{
	fac*=i++;
	}while(i<=n);
	printf("Factorial of %d is %d.",n,fac);
	return 0;
}

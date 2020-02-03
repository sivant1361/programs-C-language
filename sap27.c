#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,fac=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fac*=i;
	printf("Factorial of %d is %d.",n,fac);
	return 0;
}

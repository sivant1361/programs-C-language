#include<stdio.h>

int main()
{
	int fac=1,i,n;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n)
	fac*=i++;
	printf("The factorial of %d is %d",n,fac);
}

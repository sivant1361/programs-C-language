#include<stdio.h>
int fac(int n)
{
if(n==0)
return 1;
else
return n*fac(n-1);
}

int main()
{
	int n,f;
	printf("Enter a number:");
	scanf("%d",&n);
	f=fac(n);
	printf("Factorial of %d is %d.",n,f);
	return 0;
}

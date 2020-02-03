#include<stdio.h>
int main()
{
	int n,prod=1;
	printf("Enter a number:");
	scanf("%d",&n);
	do
	{
		prod=prod*(n%10);
		n=n/10;
	}while(n!=0);
	printf("Product=%d",prod);
	return 0;
}

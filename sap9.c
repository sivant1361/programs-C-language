#include<stdio.h>

int main()
{
	int sum=0,n;
	printf("Enter a 4 digit number:");
	scanf("%d",&n);
	sum=n%10;
	n=n/10;
	sum=sum+n%10;
	n=n/10;
	sum=sum+n%10;
	n=n/10;
	sum+=n;
	printf("The sum=%d",sum);
	return 0;
}

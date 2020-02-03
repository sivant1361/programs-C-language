#include<stdio.h>
int main()
{
	int n,rev=0,t;
	printf("Enter a number:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		rev=rev*10+(n%10);
		n=n/10;
	}
	if(t==rev)
	printf("The number is pallindrome");
	else
	printf("The number not is pallindrome");
	return 0;
}

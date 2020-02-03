#include<stdio.h>
void sum(int a,int b)
{
	int s=a+b;
	printf("Sum=%d",s);
}
int main()
{
	int a,b;
	printf("Enter any two nos.:");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return 0;
}

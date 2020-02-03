#include<stdio.h>
int main()
{
	int a,b,*x,*y,sum;
	printf("Enter the elements:\n");
	scanf("%d%d",&a,&b);
	x=&a;
	y=&b;
	sum=*x+*y;
	printf("Sum=%d",sum);
	return 0;
}

#include<stdio.h>
#define sum(x,y) (x+y)
int main()
{
	int a,b;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&a,&b);
	int s=sum(a,b);
	printf("Sum=%d",s);
	return 0;
}	

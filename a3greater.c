#include<stdio.h>
void greater(int *a,int *b)
{
	if(*a>*b)
	printf("%d is greater than %d",*a,*b);
	else
	printf("%d is greater than %d",*b,*a);
}

int main()
{
	int a,b;
	printf("Enter the elements:\n");
	scanf("%d%d",&a,&b);
	greater(&a,&b);
	return 0;
}

#include<stdio.h>
int main()
{
	int c=40;
	int *cptr=&c;
	printf("The value of c=%d\n",*cptr);
	printf("The address of c=%u",cptr);
	return 0;
}

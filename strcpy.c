#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30];
	printf("Enter the string:");
	gets(a);
	printf("String two before coping:");
	puts(b);
	strcpy(b,a);
	printf("The copied string is %s.",b);
	return 0;
}

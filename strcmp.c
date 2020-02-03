#include<stdio.h>
#include<string.h>

int main()
{
	char a[20],b[20];
	printf("Enter string 1:");
	gets(a);
	b=a;
	if(strcmp(a,b)==0)
	{
		printf("The strings are equal!!!");
	}
	else
	{
		printf("The strings are not equal!!!");
	}
	return 0;
}

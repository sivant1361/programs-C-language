#include<stdio.h>
#include<string.h>
int main()
{
	char name[50];
	int len;
	printf("Enter a name:");
	gets(name);
	len=strlen(name);
	printf("Hello %s of string length %d.",name,len);
	strrev(name);
	printf("\nThe reverse is %s.",name);
	return 0;
}

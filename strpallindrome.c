#include<stdio.h>
#include<string.h>

int main()
{
	char a[20],b[20];
	printf("Enter a string:");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	printf("The string is  pallindrome!!!");
	else 
	printf("The string is not a pallindrome!!!");
	return 0;
}

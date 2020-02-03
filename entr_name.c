#include<stdio.h>
#include<stdlib.h>
#define pi 3.14125

void main()
{
	char name[20];
	printf("***********************************\n\n");
	printf("Enter your name:");
	scanf("%s",&name);
	printf("Your name is ");
	puts(name);
	printf("PI=%lf",pi);
	printf("\n\n***********************************");
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,sum,prod,mod,sub;
	float div;
	printf("********************************************\n\n");
	printf("Enter any 3 nos:\n");
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter value of c:");
	scanf("%d",&c);
	sum=a+b+c;
	prod=a*b*c;
	sub=b-a;
	div=b/a;
	mod=b%a;
	printf("\nSUM=%d\nDIFFERENCE(a&b)=%d\nPRODUCT=%d\nDIVISION(a&b)=%0.2f\nMODULUS(a&b)=%d\n",sum,sub,prod,div,mod);
	printf("\n********************************************");
	return 0;
}

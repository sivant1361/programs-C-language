#include<stdio.h>
void ero(int n);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	ero(n);
	return 0;
}
void ero(int n)
{
	if(n%2==0)
	printf("%d is even.",n);
	else
	printf("%d id odd.",n);
}

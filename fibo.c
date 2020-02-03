#include<stdio.h>
int fibo(int,int,int);
int main()
{
	int n,f;
	printf("Enter no.of terms:");
	scanf("%d",&n);
	fibo(1,1,n-3);
	return 0;
}

int fibo(int n1,int n2,int n)
{	
int n3;

n3=n1+n2;
n1=n2;
n2=n3;
if(n<0)
return 1;
else if(n!=0)
{
fibo(n1,n2,n-1);
}
else
printf("The value is %d",n3);
}

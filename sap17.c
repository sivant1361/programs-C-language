#include<stdio.h>
int main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum+=i++;
	}
	printf("Sum=%d",sum);
	return 0;
}

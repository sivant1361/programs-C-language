#include<stdio.h>
int main()
{
	int i=3,j=2,n,flag;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("%d\n",i);
	}
	return 0;
}

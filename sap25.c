#include<stdio.h>
int main()
{
	int i=2,n,j,flag;
	printf("Enter the number:");
	scanf("%d",&n);
	while(i<=n)
	{
		flag=0;
		j=2;
		while(j<i/2)
		{
			if(i%j==0)
			{
				flag=1;
			}
			j++;
		}
		if(flag==0)
		printf("%d\n",i);
		i++;
	}
	return 0;
}

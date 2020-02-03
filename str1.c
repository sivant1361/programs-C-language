#include<stdio.h>

struct std
{
	char name[40];
	int uid;
	char gender[10];
	float mark;
};

int main()
{
	struct std s[3]; 
	int i;
	float avg;
	for(i=1;i<=3;i++)
	{
	printf("Enter details of student %d:\n",i);
	printf("Enter name:");
	scanf("%s",&s[i-1].name);
	printf("Enter UID:");
	scanf("%d",&s[i-1].uid);
	printf("Enter gender:");
	scanf("%s",&s[i-1].gender);
	printf("Enter mark:");
	scanf("%f",&s[i-1].mark);
	printf("\n");
	}
	
	avg=(s[0].mark+s[1].mark+s[2].mark)/3;
	printf("Average=%0.2f",avg);
	
	if(s[0].mark>s[1].mark)
	{
		if(s[0].mark>s[2].mark)
		{
		printf("\nName:%s\n",s[0].name);
		printf("UID:%d\n",s[0].uid);
		printf("Gender:%s\n",s[0].gender);	
		}
	}
	else if(s[1].mark>s[2].mark)
	{
		printf("\nName:%s\n",s[1].name);
		printf("UID:%d\n",s[1].uid);
		printf("Gender:%s\n",s[1].gender);	
	}
	else
	{
		printf("\nName:%s\n",s[2].name);
		printf("UID:%d\n",s[2].uid);
		printf("Gender:%s\n",s[2].gender);	
	}
	return 0;
}

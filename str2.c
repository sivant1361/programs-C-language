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
	struct std s[20],temp; 
	int i,j,n;
	float avg;
	printf("Enter no. of students:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
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
	for(i=0;i<n;i++)
	for(j=0;j<n-i;j++)
	if(s[i].mark>s[j].mark)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
		printf("\nName:%s\n",s[0].name);
		printf("UID:%d\n",s[0].uid);
		printf("Gender:%s\n",s[0].gender);	
		return 0;
}

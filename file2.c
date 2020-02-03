#include<stdlib.h>
#include<stdio.h>
int main()
{
	char fn[]="file2.txt";
	FILE *f	;
	f=fopen(fn,"a");
	if(f==NULL)
	{
		printf("The file doesn't exist!!!");
	}
	char ch[50],ch1[50];
	printf("Enter the string:");
	gets(ch);
	fprintf(f,"%s\n",ch);
	fclose(f);
	f=fopen(fn,"r");
	while(fgets(ch1,50,f)!=NULL)
	{
		printf("%s",ch1);
	}
	fclose(f);
	return 0;
}

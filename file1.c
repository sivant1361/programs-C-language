#include<stdio.h>
#include<stdlib.h>
int main()
{
	char fn[]="file1.txt",ch[50],ch1[50];
	FILE *f	;
	f=fopen(fn,"w");
	if(f==NULL)
	{
		printf("The file doesn't exist!!!");
	}
	printf("Enter a string 1:\n");
	gets(ch);
	printf("Enter a string 2:\n");
	gets(ch1);
	fprintf(f,"%s\n%s",ch,ch1);
	fclose(f);
	return 0;
}

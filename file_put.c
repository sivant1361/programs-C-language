#include<stdio.h>
int main()
{
	FILE *f;
	f=fopen("file4.txt","a");
	if(f==NULL)
	printf("File not found!!!\n");
	else
	{
		char c;
		printf("Enter the string:\n");
		while((c=getchar())!=EOF)
		{
			fputc(c,f);
		}
	}
	fclose(f);
}

#include<stdio.h>
int main()
{
	FILE *f;
	char ch[50],ch1[50],c;
	int k=0;
	f=fopen("file5.txt","w");
	if(f==NULL)
	{
		printf("File not found!!!");
	}
	else
	{
		printf("Enter a string 1:\n");
		gets(ch);
		printf("Enter a string 2:\n");
		gets(ch1);
		fprintf(f,"%s\n%s",ch,ch1);
		fclose(f);
		f=fopen("file5.txt","r");

		while(!feof(f))
		{
			c=fgetc(f);
			if(c!=' ')
			if(c!='\n')
			{
				k++;
			}
		}
		printf("Number of characters is %d.",k-1);
		fclose(f);
	}
	return 0;
}


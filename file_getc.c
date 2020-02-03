#include<stdio.h>
int main()
{
	FILE *f;
	char c;
	f=fopen("file5.txt","r");
	while(!feof(f))
	{
		c=fgetc(f);
		printf("%c",c);
	}
	fclose(f);
	return 0;
}

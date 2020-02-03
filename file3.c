#include<stdio.h>
#include<stdlib.h>
int main()
{
	char fn[]="file2.txt";
	FILE *f	;
	f=fopen(fn,"r");
	if(f==NULL)
	{
		printf("The file doesn't exist!!!");
	}
	return 0;
}

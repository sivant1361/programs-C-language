#include<stdio.h>
int main()
{
	int num;
	char ch;
	menu:printf("Enter a number:");
	scanf("%d",&num);
	if(num>0)
	printf("Positive!!!\n");
	else if(num==0)
	printf("Zero!!!\n");
	else
	printf("Negative!!!\n");
	choice:printf("Do you want to continue(y/n)???");
	scanf("%s",&ch);
	if(ch=='y'||ch=='Y')
	goto menu;
	else if(ch=='n'||ch=='N')
	printf("\nGood bye!!!");
	else
	{
		printf("Enter correct value!!!\n");
		goto choice;
	}
	return 0;
}

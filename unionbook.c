#include<stdio.h>

union book
{
	char title[20];
	char author[30];
	int pages;
	int mrp;
};

int main()
{
	union book b[20],temp;
	int i,n;
	printf("Enter no. of books:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the details of book %d:\n",i);
		printf("Title:");
		scanf("%s",&b[i-1].title);
		printf("Author:");
		scanf("%s",&b[i-1].author);
		printf("Pages:");
		scanf("%d",&b[i-1].pages);
		printf("MRP:");
		scanf("%d",&b[i-1].mrp);
		printf("\n");
	}
	temp=b[0];
	for(i=0;i<n;i++)
	if(b[i].mrp>temp.mrp)
	{
		temp=b[i];
	}
	printf("Details of the book with highest MRP:\n");
	printf("Title:%s\n",temp.title);
	printf("Author:%s\n",temp.author);
	printf("Pages:%d\n",temp.pages);
	printf("MRP:%d",temp.mrp);	
	return 0;
}

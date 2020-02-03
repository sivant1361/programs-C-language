#include<stdio.h>

struct book
{
	char title[20];
	char author[30];
	int pages;
	int mrp;
};

int main()
{
	struct book b[20],temp;
	int i,n;
	printf("Enter no. of books:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the details of book %d:\n",i+1);
		printf("Title:");
		scanf("%s",&b[i].title);
		printf("Author:");
		scanf("%s",&b[i].author);
		printf("Pages:");
		scanf("%d",&b[i].pages);
		printf("MRP:");
		scanf("%d",&b[i].mrp);
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

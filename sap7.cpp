#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r;
	float area;
	printf("Enter the radius:");
	scanf("%d",&r);
	area=(22*r*r)/7;
	printf("The area of the circle is %0.2f.",area);
	return 0;
}

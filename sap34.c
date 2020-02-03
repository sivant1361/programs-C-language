#include<stdio.h>
float diff()
{
	float a,b,dif;
	printf("Enter amy two  numbers:\n");
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	dif=b-a;
	return dif;
}
void main()
{
	float difv=diff();
	printf("Difference(b-a)=%0.2f",difv);
}

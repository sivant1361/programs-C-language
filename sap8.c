#include<stdio.h>
#include<stdlib.h>

void main()
{
	float c,f;
	printf("Enter the temperature in celcius:");
	scanf("%f",&c);
	f=((9*c)/5)+32;
	printf("The temperatue in fahrenheit is %0.2f",f);
	return 0;
}

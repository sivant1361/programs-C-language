#include<stdio.h>

void main()
{
	void message();
	printf("Calling function!!!\n");
	message();
	printf("Called the function!!!\n");
}
 void message()
 {
 	printf("A message for you:\n");
 }

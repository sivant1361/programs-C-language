#include<stdio.h>
union bankacc
{
	char name[20];
	int actno;
	float bal;
	int s;
};
struct bankacco
{
	char name[20];
	int actno;
	float bal;
	int a;
};
int main()
{
	union bankacc a;
	struct bankacco b;
	printf("The size of union=%d\nThe size of structure=%d",sizeof(a),sizeof(b));
	return 0;
}

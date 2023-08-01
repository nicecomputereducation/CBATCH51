#include<stdio.h>
void subfunc(int,int);
int main()
{
	int a=10,b=20;
	subfunc(a,b);
	printf("a:%i\n",a);
	printf("b:%i",b);
	return 0;
}
void subfunc(int x,int y)
{
	x=x+5;
	y=y+5;
}

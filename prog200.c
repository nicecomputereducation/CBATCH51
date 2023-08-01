#include<stdio.h>
int a=10;
void subfunc();
int main()
{
	printf("%i\n",a);
	subfunc();
	printf("%i",a);
	return 0;
}
void subfunc()
{
	a=a+5;	
}

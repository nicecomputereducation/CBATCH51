#include<stdio.h>
void subfunc();
int main()
{
	int a=10;
	subfunc();
	return 0;
}
void subfunc()
{
	printf("%i",a);
}

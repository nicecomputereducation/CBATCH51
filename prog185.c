#include<stdio.h>
void rectangle(int,int);
int main()
{
	int len,bre;
	printf("Enter 2 sides of rectangle\n");
	scanf("%i%i",&len,&bre);
	rectangle(len,bre);
	return 0;
}
void rectangle(int l,int b)
{
	printf("Area %i\n",l*b);
	printf("Perimeter %i",2*(l+b));
}

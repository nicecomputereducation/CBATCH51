#include<stdio.h>
void circle(int);
int main()
{
	int rad;
	printf("Radius:");
	scanf("%i",&rad);
	circle(rad);
	return 0;
}
void circle(int r)
{
	printf("Area %f\n",3.14*r*r);
	printf("Circumference %f",2*3.14*r);
}

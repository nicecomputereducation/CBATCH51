#include<stdio.h>
#include<math.h>
int main()
{
	int b,e,r;
	printf("Base:");
	scanf("%i",&b);
	printf("Exponent:");
	scanf("%i",&e);
	r=pow(b,e);
	printf("Result %i",r);
	return 0;
}

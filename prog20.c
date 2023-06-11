#include<stdio.h>
int main()
{
	int cmr,pmr,nu;
	float bill;
	printf("Current month meter reading:");
	scanf("%i",&cmr);
	printf("Previous month meter reading:");
	scanf("%i",&pmr);
	nu=cmr-pmr;
	bill=nu*7.50;
	printf("Number of units consumed %i\n",nu);
	printf("Total bill @7.50 %f",bill);
	return 0;
}

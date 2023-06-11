#include<stdio.h>
int main()
{
	int sal,sales;
	float comm,allow,inc;
	printf("Salary:");
	scanf("%i",&sal);
	printf("Sales:");
	scanf("%i",&sales);
	comm=sales*5.0/100;
	allow=sales*3.0/100;
	inc=sal+comm+allow;
	printf("\nPay slip\n----------------------------\n");
	printf("Salary %i\n",sal);
	printf("Commission @5%% %.2f\n",comm);
	printf("Allowence @3%% %.2f\n",allow);
	printf("Total income %.2f",inc);
	return 0;
}

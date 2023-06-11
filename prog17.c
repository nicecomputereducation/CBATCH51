#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	hra=sal*12.0/100;
	da=sal*15.0/100;
	gross=sal+hra+da;
	printf("\npay slip\n--------------------------------\n");
	printf("Salary %i\n",sal);
	printf("House Rent allowence %f\n",hra);
	printf("Dearness allowence %f\n",da);
	printf("Gross salary %f",gross);
	return 0;
}

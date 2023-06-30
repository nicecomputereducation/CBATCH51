#include<stdio.h>
int main()
{
	int sal;
	float hra,da,gross;
	printf("Salary:");
	scanf("%i",&sal);
	if(sal>100000)
	{
		hra=sal*21.0/100;
		da=sal*23.0/100;	
	}
	else if(sal>=50001)
	{
		hra=sal*19.0/100;
		da=sal*21.0/100;		
	}
	else if(sal>=25001)
	{
		hra=sal*17.0/100;
		da=sal*20.0/100;		
	}
	else if(sal>=10001)
	{
		hra=sal*15.0/100;
		da=sal*17.0/100;		
	}
	else
	{
		hra=sal*12.0/100;
		da=sal*13.0/100;		
	}
	gross=sal+hra+da;
	printf("\nPayslip\n------------------------\n");
	printf("Salary %i\n",sal);
	printf("House Rent allowence %f\n",hra);
	printf("Dearness allowence %f\n",da);
	printf("Gross salary %f",gross);
	return 0;
}

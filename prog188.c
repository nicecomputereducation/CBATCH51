#include<stdio.h>
int factorial(int);
int main()
{
	int n,f;
	printf("Enter any natural number:");
	scanf("%i",&n);
	f=factorial(n);
	printf("Factorial %i",f);
	return 0;
}
int factorial(int num)
{
	int i,fact;
	for(fact=i=1;i<=num;i++)
		fact=fact*i;
	return fact;	
}

#include<stdio.h>
int factorial(int);
int main()
{
	int n,sum,temp;
	printf("Enter any natural number:");
	scanf("%i",&n);
	temp=n;
	for(sum=0;n!=0;n=n/10)
		sum=sum+factorial(n%10);
	if(temp==sum)
		printf("Strong number");
	else
		printf("Not a strong number");
	return 0;
}
int factorial(int num)
{
	int i,fact;
	for(fact=i=1;i<=num;i++)
		fact=fact*i;
	return fact;	
}

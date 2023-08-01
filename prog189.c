#include<stdio.h>
int digits_sum(int);
int main()
{
	int n;
	printf("Enter any natural number:");
	scanf("%i",&n);
	printf("Sum of digits %i",digits_sum(n));
	return 0;
}
int digits_sum(int num)
{
	int sum;
	for(sum=0;num!=0;num=num/10)
		sum=sum+num%10;
	return sum;
}

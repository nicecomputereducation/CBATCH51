#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%i",&num);
	if(num==0)
		printf("zero");
	if(num>0)
		printf("positive number");
	if(num<0)
		printf("Negative number");
	return 0;
}

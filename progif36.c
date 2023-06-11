#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number from 0 to 6:");
	scanf("%i",&n);
	if(n==0)
		printf("Sunday");
	if(n==1)
		printf("Monday");
	if(n==2)
		printf("Tuesday");
	if(n==3)
		printf("Wednesday");
	if(n==4)
		printf("Thursaday");
	if(n==5)
		printf("Friday");
	if(n==6)
		printf("Saturday");
	if(n<0)
		printf("Invalid input");
	if(n>6)	
		printf("Invalid input");
	return 0;
}

#include<stdio.h>
int main()
{
	int n,sum,temp;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	temp=n;
	for(sum=0;n!=0;n=n/10)
			sum=sum+(n%10)*(n%10)*(n%10);
			
	if(sum==temp)
		printf("Armstrong number");
	else
		printf("Not an Armstrong number");
		
	return 0;
}

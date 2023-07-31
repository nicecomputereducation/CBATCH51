#include<stdio.h>
int main()
{
	int i,n,sum;
	printf("Enter any natural number");
	scanf("%i",&n);
	for(sum=0,i=1;i<n;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(n==sum)
		printf("perfect number");
	else
		printf("Not a perfect number");
	return 0;
}

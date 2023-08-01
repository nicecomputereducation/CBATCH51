#include<stdio.h>
int main()
{
	int n,i,x;
	printf("Enter any natural number:");
	scanf("%i",&n);
	x=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			x=0;
			break;
		}
	}
	if(x && n>1)
		printf("Prime number");
	else
		printf("Not a prime number");
	return 0;
}

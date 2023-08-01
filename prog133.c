#include<stdio.h>
int main()
{
	int i,n,temp,sum,fact;
	printf("Enter any natural number");
	scanf("%i",&n);
	temp=n;
	for(sum=0;n!=0;n=n/10)
	{
		for(fact=1,i=1;i<=n%10;i++)
			fact=fact*i;
		sum=sum+fact;
	}
	if(temp==sum)
		printf("Strong number");
	else
		printf("Not a strong number");
	return 0;
}

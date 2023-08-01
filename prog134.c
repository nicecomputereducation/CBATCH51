#include<stdio.h>
int main()
{
	int i,n,temp,sum,fact,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{
		temp=n;
		for(sum=0;temp!=0;temp=temp/10)
		{
			for(fact=1,i=1;i<=temp%10;i++)
				fact=fact*i;
			sum=sum+fact;
		}
		if(n==sum)
			printf("%i\n",n);
		
	}
	
	return 0;
}

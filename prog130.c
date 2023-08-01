#include<stdio.h>
int main()
{
	int i,n,sum,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{
		sum=0;
		for(i=1;i<n;i++)
		{
			if(n%i==0)
				sum=sum+i;
		}
		if(sum==n)
			printf("%i\n",n);
	}
	
	
	return 0;
}

#include<stdio.h>
int main()
{
	int i,n,temp,sum,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{
		temp=n;
		for(sum=0;temp!=0;temp=temp/10)
			sum=sum+(temp%10)*(temp%10)*(temp%10);
		if(sum==n)
			printf("%i\n",n);
	}

	return 0;
}

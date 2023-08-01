#include<stdio.h>
int main()
{
	int n,i,count,limit;
	printf("Enter the limit:");
	scanf("%i",&limit);
	for(n=1;n<=limit;n++)
	{
		count=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
				count=count+1;
		}
		
		if(count==2)
			printf("%i\n",n);
	}
	return 0;
}

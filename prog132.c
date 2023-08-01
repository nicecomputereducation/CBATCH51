#include<stdio.h>
int main()
{
	int i,n,temp,rev,limit;
	
	printf("Enter the limit:");
	scanf("%i",&limit);
	
	for(n=1;n<=limit;n++)
	{
		temp=n;
		for(rev=0;temp!=0;temp=temp/10)
			rev=rev*10+temp%10;
		if(rev==n)
			printf("%i\n",n);
	}

	return 0;
}

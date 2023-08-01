#include<stdio.h>
int main()
{
	int i,n,count;
	printf("Enter any natural number");
	scanf("%i",&n);
	for(count=0,i=1;i<=n;i++)
	{
		if(n%i==0)
			count=count+1;
	}
	printf("Number of factors %i",count);
	return 0;
}

#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	i=1;
	while(i<=n)
	{
		if(n%i==0)
			printf("%i\n",i);
		i=i+1;	
	}
	
	return 0;
}

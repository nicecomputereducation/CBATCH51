#include<stdio.h>
int main()
{
	int i,n,a,b,c;
	
	printf("How many terms:");
	scanf("%i",&n);
	
	a=0;
	b=1;
	c=0;
	for(i=1;i<=n;i++)
	{
		printf("%i\t",c);
		a=b;
		b=c;
		c=a+b;
	}
	
	return 0;
}

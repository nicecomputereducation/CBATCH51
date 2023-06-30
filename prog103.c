#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	for(i=n;i>=1;i--)
	{
		if(i%2!=0)
			printf("%i\n",i);
	}
	
	return 0;
}

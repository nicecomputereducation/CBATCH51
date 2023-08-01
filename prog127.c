#include<stdio.h>
int main()
{
	int i,j;
	
	for(j=5;j>=1;j--)
	{
		for(i=1;i<=j;i++)
			printf("  *  ");
		printf("\n\n");
	}
	
	for(j=2;j<=5;j++)
	{
		for(i=1;i<=j;i++)
			printf("  *  ");
		printf("\n\n");
	}
	return 0;
}

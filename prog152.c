#include<stdio.h>
int main()
{
	int a[50],sum,n,i;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	sum=0;
	for(i=0;i<n;i++)
		sum=sum+a[i];
		
	printf("Sum of all the elements %i",sum);
	return 0;
}

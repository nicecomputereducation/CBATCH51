#include<stdio.h>
int main()
{
	int a[50],n,i;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("elements in reverse order\n");
	for(i=n-1;i>=0;i--)
		printf("%i\t",a[i]);

	return 0;
}

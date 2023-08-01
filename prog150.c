#include<stdio.h>
int main()
{
	int a[50],n,i;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("The given elements are\n");
	for(i=0;i<n;i++)
		printf("%i\n",a[i]);

	return 0;
}

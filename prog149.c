#include<stdio.h>
int main()
{
	int a[5],i;
	
	printf("Enter 5 elements\n");
	for(i=0;i<5;i++)
		scanf("%i",&a[i]);
	
	printf("Elements in the array\n");
	for(i=0;i<5;i++)
		printf("%i\n",a[i]);
	
	return 0;
}

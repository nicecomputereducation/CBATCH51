#include<stdio.h>
int main()
{
	int a[50],n,i,pos;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	printf("Position to modify:");
	scanf("%i",&pos);
	
	if(pos<1 || pos>n)
		printf("Invalid position");
	else
	{
		pos--;
		
		printf("New element:");
		scanf("%i",&a[pos]);
		
		printf("Result array\n");
		for(i=0;i<n;i++)
			printf("%i\t",a[i]);
	}
	return 0;
}

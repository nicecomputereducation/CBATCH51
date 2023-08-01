#include<stdio.h>
int main()
{
	int a[50],n,i,find,repl;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Find what:");
	scanf("%i",&find);
	
	printf("Replace with:");
	scanf("%i",&repl);
	
	
	for(i=0;i<n;i++)
	{
		if(a[i]==find)
			a[i]=repl;
	}

	printf("Result array\n");
	for(i=0;i<n;i++)
		printf("%i\t",a[i]);
		
	return 0;
}

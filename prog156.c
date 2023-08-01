#include<stdio.h>
int main()
{
	int a[50],n,i,find,count;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Find what:");
	scanf("%i",&find);
	
	count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==find)
			count++;
	}

	if(count)
		printf("%i times existed",count);
	else
		printf("Not existed");
		
	return 0;
}

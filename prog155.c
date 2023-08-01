#include<stdio.h>
int main()
{
	int a[50],n,i,find,flag;
	
	printf("How many elements:");
	scanf("%i",&n);
	
	printf("Enter elements\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	
	printf("Find what:");
	scanf("%i",&find);
	
	flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==find)
		{
			flag=1;
			break;	
		}
		
	}

	if(flag)
		printf("existed");
	else
		printf("Not existed");
		
	return 0;
}

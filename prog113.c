#include<stdio.h>
int main()
{
	int n,min,max;
	printf("Enter any natural number:");
	scanf("%i",&n);
	for(min=max=n%10;n!=0;n=n/10)
	{
		if(n%10>max)
			max=n%10;
		if(n%10<min)
			min=n%10;
	}
	printf("The minimum digit %i\n",min);
	printf("The maximum digit %i",max);
	return 0;
}

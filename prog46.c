#include<stdio.h>
int main()
{
	int pp,sp;
	printf("Purchase price:");
	scanf("%i",&pp);
	printf("Selling price:");
	scanf("%i",&sp);
	if(pp==sp)
		printf("No loss no profit");
	else
	{
		if(sp>pp)
			printf("Profit of %i",sp-pp);
		else
			printf("Loss of %i",pp-sp);
	}
	return 0;
}

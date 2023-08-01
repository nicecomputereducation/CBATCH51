#include<stdio.h>
int main()
{
	int i,base,exp,res;
	printf("Base:");
	scanf("%i",&base);
	printf("Exponent:");
	scanf("%i",&exp);
	for(res=1,i=1;i<=exp;i++)
		res=res*base;
	printf("The result of expression %i",res);
	return 0;
}

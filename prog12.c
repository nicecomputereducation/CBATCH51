#include<stdio.h>
int main()
{
	int fir,sec,sm,sb,pro;
	float div;
	printf("First number:");
	scanf("%i",&fir);
	printf("Second number:");
	scanf("%i",&sec);
	sm=fir+sec;
	sb=fir-sec;
	pro=fir*sec;
	div=(float)fir/sec;
	printf("Addition %i\n",sm);
	printf("Subtraction %i\n",sb);
	printf("Product %i\n",pro);
	printf("Division %f",div);
	return 0;
}

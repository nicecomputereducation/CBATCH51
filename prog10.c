#include<stdio.h>
int main()
{
	int mat,phy,che,tot;
	float avg;
	mat=96;
	phy=92;
	che=96;
	tot=mat+phy+che;
	avg=tot/3.0;
	printf("Total %i\n",tot);
	printf("Average %f",avg);
	return 0;
}

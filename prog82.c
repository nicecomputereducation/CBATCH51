#include<stdio.h>
int main()
{
	int x;
	
	x=15;
	igate:
		printf("%i\n",x);
		x=x-1;
	if(x>=7)
		goto igate;
	
	return 0;
}

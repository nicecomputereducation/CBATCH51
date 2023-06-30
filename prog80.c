#include<stdio.h>
int main()
{
	int x;
	
	x=10;
	igate:
		printf("%i\n",x);
		x=x-1;
	if(x>=1)
		goto igate;
	
	return 0;
}

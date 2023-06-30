#include<stdio.h>
int main()
{
	int x=1;
	igate:
		printf("%i\n",x);
		x=x+1;
	if(x<=5)
		goto igate;
	return 0;
}

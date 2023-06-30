#include<stdio.h>
int main()
{
	int num,gr;
	printf("Enter any natural number:");
	scanf("%i",&num);
	gr=(num%9==0)?9:num%9;
	switch(gr)
	{
		case 1:
		case 9:
			printf("Lucky");
			break;
		case 5:
		case 7:
			printf("Good number");
			break;
		default:
			printf("Better change number")	;
	}
	return 0;
}

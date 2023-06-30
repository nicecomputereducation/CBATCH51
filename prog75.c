#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%i",&num);
	switch(num%2)
	{
		case 0:
			printf("Even");
			break;
		case 1:
			printf("Odd");
	}
	return 0;
}

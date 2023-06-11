#include<stdio.h>
int main()
{
	int a,b;
	printf("First number:");
	scanf("%i",&a);
	printf("Second number:");
	scanf("%i",&b);
	if(a==b)
		printf("Equals");
	if(a<b)
		printf("Smallest number %i",a);
	if(b<a)
		printf("Smallest number %i",b);
	return 0;
}

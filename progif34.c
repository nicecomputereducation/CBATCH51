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
	if(a>b)
		printf("Biggest number %i",a);
	if(b>a)
		printf("Biggest number %i",b);
	return 0;
}

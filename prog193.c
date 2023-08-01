#include<stdio.h>
void display(int[],int);
int main()
{
	int x[]={10,20,30,40,50,11,22};
	display(x,7);
	return 0;
}
void display(int a[],int n)
{
	int i;
	printf("The given array\n");
	for(i=0;i<n;i++)
		printf("%5i",a[i]);
}

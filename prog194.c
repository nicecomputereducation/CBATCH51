#include<stdio.h>
int arraysum(int[],int);
int main()
{
	int a[50],n,i,sum;
	printf("How many elements:");
	scanf("%i",&n);
	printf("Enter elements..\n");
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
	sum=arraysum(a,n);
	printf("Sum of all the elements %i",sum);
	return 0;
}
int arraysum(int x[],int n)
{
	int i,s;
	for(s=0,i=0;i<n;i++)
		s=s+x[i];
	return s;
}

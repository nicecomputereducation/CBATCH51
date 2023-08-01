#include<stdio.h>
int main()
{
	int a[50],b[50],i,j,n,m;
	
	printf("size of 1st array:");
	scanf("%i",&n);
	
	printf("size of 2nd array:");
	scanf("%i",&m);
	
	printf("Enter %i elements\n",n);
	for(i=0;i<n;i++)
		scanf("%i",&a[i]);
		
	printf("Enter %i elements\n",m);
	for(i=0;i<m;i++)
		scanf("%i",&b[i]);
		
	for(i=n,j=0;j<m;i++,j++)
		a[i]=b[j];
		
	printf("Elements of first array\n")	;
	for(i=0;i<n+m;i++)
		printf("%i\t",a[i]);
	
	return 0;
}

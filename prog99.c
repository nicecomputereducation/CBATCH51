prog99.c

  #include<stdio.h>
int main()
{
	int i,n;
	
	printf("Enter the limit:");
	scanf("%i",&n);
	
	for(i=1;i<=n;i=i+1)
		printf("%i\n",i);
	
	return 0;
}

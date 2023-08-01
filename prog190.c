#include<stdio.h>
int reverse(int);
int main()
{
	int n;
	printf("Enter any integer:");
	scanf("%i",&n);
	if(n==reverse(n))
		printf("Palindrome number");
	else
		printf("Not a palindrome number");
	return 0;
}
int reverse(int num)
{
	int rev;
	for(rev=0;num!=0;num=num/10)
		rev=rev*10+num%10;
	return rev;
}

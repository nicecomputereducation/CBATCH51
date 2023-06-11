#include<stdio.h>
int main()
{
	int ch;
	printf("1.permanent\n2.temporary\nEnter your choice [1..2]");
	scanf("%i",&ch);
	if(ch==1)
	{
		printf("Mr.Narayana\n");
		printf("Kukkala gunta\n");
		printf("Kavali");
	}
	if(ch==2)
	{
		printf("Mr.Narayana\n");
		printf("c/o igate solutions\n");
		printf("Kavali");
	}
	if(ch<1)
		printf("Invalid choice");
	if(ch>2)
		printf("Invalid choice");
	
	return 0;
}

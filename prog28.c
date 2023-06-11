#include<stdio.h>
int main()
{
	int amt,fh=0,th=0,h=0,fif=0,tw=0,tn=0,fiv=0,to=0,on=0;
	
	printf("Amount:");
	scanf("%i",&amt);
	
	fh=amt/500;
	amt=amt%500;
	
	th=amt/200;
	amt=amt%200;
	
	h=amt/100;
	amt=amt%100;
	
	fif=amt/50;
	amt=amt%50;
	
	tw=amt/20;
	amt=amt%20;
	
	tn=amt/10;
	amt=amt%10;
	
	fiv=amt/5;
	amt=amt%5;
	
	to=amt/2;
	amt=amt%2;
	
	on=amt/1;
	
	printf("500X%i\n",fh);
	printf("200X%i\n",th);
	printf("100X%i\n",h);
	printf("50X%i\n",fif);
	printf("20X%i\n",tw);
	printf("10X%i\n",tn);
	printf("5X%i\n",fiv);
	printf("2X%i\n",to);
	printf("1x%i",on);
	return 0;
}

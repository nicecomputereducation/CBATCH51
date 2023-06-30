#include<stdio.h>
int main()
{
	float bmi,hei,wei;
	printf("Your height in feets:");
	scanf("%f",&hei);
	hei=hei*0.3048;
	printf("Weight in kgs:");
	scanf("%f",&wei);
	bmi=wei/(hei*hei);
	printf("Your body mass index %f\n",bmi);
	if(bmi>=30)
		printf("Obesity");
	else if(bmi>=25)
		printf("Over weight");
	else if(bmi>=18.5)
		printf("Normal weight");
	else
		printf("eat sleep and repeat");
	return 0;
}

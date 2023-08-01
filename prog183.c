#include<stdio.h>
int volume(int,int,int);
int main()
{
	int bre,wid,hei,vol;
	printf("Enter 3 sides of a box\n");
	scanf("%i%i%i",&bre,&wid,&hei);
	vol=volume(bre,wid,hei);
	printf("Volume of box %i",vol);
	return 0;
}
int volume(int x,int y,int z)
{
	return x*y*z;
}

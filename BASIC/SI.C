#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r,t,SI;
	clrscr();
	printf("Enter the Principal Amount:");
	scanf("%f",&p);
	printf("\nEnter the rate of interest:");
	scanf("%f",&r);
	printf("\nEnter the time period:");
	scanf("%f",&t);
	SI=(p*r*t)/100;
	printf("\nSimple interest is:%.2f",SI);
	getch();
}


#include <stdio.h>
#include <conio.h>
void main()
{
	float a;
	clrscr();
	printf ("Enter the temperature in Celsius:");
	scanf("%f",&a);
	if (a<0)
	printf ("Freezing Temperature.");
	else if (a>=0 && a<10)
	printf ("Very Cold.");
	else if (a>=10 && a<20)
	printf ("Cold.");
	else if (a>=20 && a<30)
	printf ("Normal.");
	else if (a>=30 && a<40)
	printf ("Hot.");
	else if (a>=40 && a<50)
	printf ("Very Hot.");
	else
	printf ("Extreme.");
	getch();
}
#include <stdio.h>
#include <conio.h>
void main()
{
	float x,g;
	clrscr();
	printf("Input Salary:");
	scanf("%f",&x);
	if(x<15000.0)
	{
	g=(10.0/100.0*x)+(25.0/100.0*x)+x;
	printf("Gross Salary=%.2f",g);
	}
	else
	{
	g=x+500.0+(0.5*x);
	printf("Gross Salary=%.2f",g);
	}
	getch();
}
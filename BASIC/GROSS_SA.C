#include<stdio.h>
#include<conio.h>
void main()
{
	float b,d,h,tax,gross;
	clrscr();
	printf("Enter Value of Basic Salary:");
	scanf("%f", &b);
	printf("Enter Value of DA:");
	scanf("%f", &d);
	printf("Enter Value of HRA:");
	scanf("%f", &h);
	printf("Enter Value of Tax:");
	scanf("%f", &h);
	gross=b+d+h-tax;
	printf("Gross Salary is= %.2f",gross);
	getch();
}

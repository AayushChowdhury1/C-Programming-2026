#include <stdio.h>
#include <conio.h>
void main()
{
	float a,b,d,r;
	clrscr();
	printf("Enter the value of a:");
	scanf("%f",&a);
	printf("Enter the value of b:");
	scanf("%f",&b);
	d=a/b;
	printf("The Quotient is: %.2f",d);
	getch();
}

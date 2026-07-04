#include <stdio.h>
#include <conio.h>
void main()
{
	float r, c, a;
	clrscr();
	printf("Enter the value of radius:");
	scanf("%f",&r);
	c=2 * 3.14 * r;
	a= r*r*3.14;
	printf("The Circumference is: %.2f",c);
	printf("\nThe Area is: %.2f",a);
	getch();
}
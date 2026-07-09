#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	clrscr();
	printf ("Enter 1st number:");
	scanf ("%d",&a);
	printf ("Enter 2nd number:");
	scanf ("%d",&b);
	if (a>b)
	printf ("%d is greater",a);
	else if (a<b)
	printf ("%d is greater",b);
	else
	printf ("Both numbers %d,%d are equal",a,b);
	getch();
}
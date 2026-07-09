#include <math.h>
#include <stdio.h>
#include <conio.h>
void main()
{
	int a,s;
	clrscr();
	printf ("Enter 1st number:");
	scanf ("%d",&a);
	s=sqrt(a);
	if (s*s==a)
	printf ("%d is a perfect square number",a);
	else
	printf ("%d isn't a perfect square number",a);
	getch();
}
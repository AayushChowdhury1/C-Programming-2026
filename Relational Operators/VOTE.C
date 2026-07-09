#include <stdio.h>
#include <conio.h>
void main()
{
	int a;
	clrscr();
	printf ("Enter age:");
	scanf ("%d",&a);
	if (a>=18)
	printf ("Eligible to Vote");
	else
	printf ("Ineligible to Vote");
	getch();
}
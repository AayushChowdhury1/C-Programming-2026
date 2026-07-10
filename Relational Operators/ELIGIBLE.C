#include <stdio.h>
#include <conio.h>
void main()
{
	int m,p,c, tot1, tot2;
	clrscr();
	printf ("Enter the marks in Maths:");
	scanf("%d",&m);
	printf ("Enter the marks in Physics:");
	scanf("%d",&p);
	printf ("Enter the marks in Chemistry:");
	scanf("%d",&c);
	tot1=m+p+c;
	tot2=m+p;
	if (tot1>=190 || tot2>= 140)
	printf ("Eligible for the course.");
	else
	printf ("Not Eligible.");
	getch();
}
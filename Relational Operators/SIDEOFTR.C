#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter 1st Side of a Triangle:");
	scanf("%d",&a);
	printf("Enter 2nd Side of a Triangle:");
	scanf("%d",&b);
	printf("Enter 3rd Side of a Triangle:");
	scanf("%d",&c);
	if((a+b)>c)
	printf("Triangle can be formed");
	else
	printf ("Traingle can not be formed.");
	getch();
}
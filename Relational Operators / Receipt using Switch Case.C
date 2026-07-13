#include <stdio.h>
#include <conio.h>
void main()
{
	float w, charge=0;
	char ch;
	clrscr();
	printf("Enter weight in kg:");
	scanf("%f",&w);
	printf("Enter L for local and N for non local:");
	ch=getche();
	switch(ch)
	{
	case 'L':
	if (w>10)
	charge= 30*w;
	else if (w>5)
	charge=25*w;
	else if (w>0)
	charge=20*w;
	else
	{
	printf("\nWeight can not be negative.");
	}
	printf("\nTotal Charge=Rs.%.2f",charge);
	break;
	case 'N':
	if (w>10)
	charge=40*w;
	else if (w>5)
	charge=35*w;
	else if (w>0)
	charge=30*w;
	else
	{
	printf("\nWeight can not be negative.");
	}
	printf("\nNet Charge:Rs. %.2f",charge);
	break;
	default:
	printf("\nLocal or Non Local can't be determined.");
	break;
	}
	getch();
}

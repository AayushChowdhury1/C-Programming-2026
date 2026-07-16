#include <stdio.h>
#include <conio.h>
void main()
{
	int x, final;
	clrscr();
	printf("No. of Days after dead line:");
	scanf("%d",&x);
	if (x<=5)
	final=x*2;
	else if (x<=15)
	final= 5*2+(x-5)*5;
	else if (x>15)
	final=5*2+10*5+(x-15)*8;
	printf("\nFine is=%.2f",final);
	getch();
}
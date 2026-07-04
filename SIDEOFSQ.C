#include <stdio.h>
#include <conio.h>
void main()
{
	int side, p, a;
	clrscr();
	printf("Enter the value of side:");
	scanf("%d",&side);
	p=4*side;
	a=side*side;
	printf("The Perimeter is: %d",p);
	printf("\nThe Area is: %d",a);
	getch();
}
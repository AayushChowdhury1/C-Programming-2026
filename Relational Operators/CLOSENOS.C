#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&a);
	printf("Enter another Number:");
	scanf("%d",&b);
	if(a-b==0.001)
	printf("Close");
	else
	printf ("Not Close.");
	getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter the value of an integer:");
	scanf("%d", &n);
	if (n>0)
	printf("Positive.");
	else
	printf("Negative.");
	getch();
}

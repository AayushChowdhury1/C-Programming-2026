#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter the value of Integer:");
	scanf("%d", &n);
	if (n%2==0)
	printf("Even");
	else
	printf("Odd");
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter Value of 1st Integer:");
	scanf("%d", &a);
	printf("Enter Value of 2nd Integer:");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Value of a and b after swapping are: a= %d, b= %d",a,b);
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,t;
	clrscr();
	printf("Enter Value of 1st Integer:");
	scanf("%d", &a);
	printf("Enter Value of 2nd Integer:");
	scanf("%d", &b);
	t=a;
	a=b;
	b=t;
	printf("Value of a and b after swapping are: a= %d, b= %d",a,b);
	getch();
}

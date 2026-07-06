#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,d,r;
	clrscr();
	printf("Enter Value of 1st Integer:");
	scanf("%d", &a);
	printf("Enter Value of 2nd Integer:");
	scanf("%d", &b);
	d=a/b;
	r=a%b;
	printf("Quotient is:%d",d);
	printf("\nRemainder is:%d",r);
	getch();
}

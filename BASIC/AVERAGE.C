#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,avg;
	clrscr();
	printf("Enter Value of 1st Integer:");
	scanf("%d", &a);
	printf("Enter Value of 2nd Integer:");
	scanf("%d", &b);
	printf("Enter Value of 3rd Integer:");
	scanf("%d", &c);
	avg=(a+b+c)/3;
	printf("Average of 3 Integers is= %d",avg);
	getch();
}

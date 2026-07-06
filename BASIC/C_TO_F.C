#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("Enter Value in Celsius:");
	scanf("%f",&c);
	f=((c*9)/5)+32;
	printf("Value in Fahrenheit is:%.2f",f);
	getch();
}

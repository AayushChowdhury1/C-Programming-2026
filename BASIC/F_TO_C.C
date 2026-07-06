#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	clrscr();
	printf("Enter Value in Fahrenheit:");
	scanf("%f",&f);
	c=((f-32)/9)*5;
	printf("Value in Celsius is:%.2f",c);
	getch();
}

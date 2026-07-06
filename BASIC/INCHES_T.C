#include<stdio.h>
#include<conio.h>
void main()
{
	float i,f;
	clrscr();
	printf("Enter Value in Inches:");
	scanf("%f", &i);
	f=i/12;
	printf("Value in foot is:%.2f",f);
	getch();
}

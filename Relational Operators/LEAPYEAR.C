#include <stdio.h>
#include <conio.h>
void main()
{
	int x;
	clrscr();
	printf("Enter Year:");
	scanf("%d",&x);
	if(x%400==0)
	printf("Leap Year.");
	else if(x%100==0)
	printf("Non Leap Year.");
	else if(x%4==0)
	printf("Leap Year.");
	else
	printf ("Non Leap Year.");
	getch();
}
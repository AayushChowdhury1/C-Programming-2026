#include <stdio.h>
#include <conio.h>
void main()
{
	float p;
	clrscr();
	printf("Enter Percentage:");
	scanf("%f",&p);
	if(p>=60)
	printf("1st Division.");
	else if(p>45 && p<60)
	printf("2nd Division.");
	else if(p>30 && p<45)
	printf("3rd Division.");
	else
	printf ("Unsuccessful.");
	getch();
}
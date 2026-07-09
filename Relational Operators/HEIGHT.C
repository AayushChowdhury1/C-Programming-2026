#include <stdio.h>
#include <conio.h>
void main()
{
	int h;
	clrscr();
	printf ("Enter height in centimeters:");
	scanf ("%d",&h);
	if (h>=160){
	printf ("Tall");}
	else if (h<=150){
	printf ("Short");}
	else
	printf ("Average");
	getch();
}
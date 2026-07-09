#include <stdio.h>
#include <conio.h>
void main()
{
	int x,y;
	clrscr();
	printf ("Enter co-ordinate along x axis:");
	scanf ("%d",&x);
	printf ("Enter co-ordinate along y axis:");
	scanf ("%d",&y);
	if (x>0 && y>0){
	printf ("(%d,%d) lies in 1st Quadrant"),x,y;}
	else if (x<0 && y>0){
	printf ("(%d,%d) lies in 2nd Quadrant"),x,y;}
	else if (x<0 && y<0){
	printf ("(%d,%d) lies in 3rd Quadrant"),x,y;}
	else if (x>0 && y<0){
	printf ("(%d,%d) lies in 4th Quadrant"),x,y;}
	else
	printf ("Origin");
	getch();
}
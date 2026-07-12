#include <stdio.h>
#include <conio.h>
void main()
{
	char ch;
	clrscr();
	printf("Enter The First Character of an Indian Metro City:");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'd':
	case 'D':
	printf("Delhi.");
	break;
	case 'K':
	case 'k':
	printf("Kolkata.");
	break;
	case 'M':
	case 'm':
	printf("Mumbai.");
	break;
	case 'C':
	case 'c':
	printf ("Chennai");
	break;
	default:
	printf ("Invalid.");
	}
	getch();
}

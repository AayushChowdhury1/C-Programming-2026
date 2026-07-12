#include <stdio.h>
#include <conio.h>
void main()
{
	int ch;
	clrscr();
	printf("Enter a Value Between 1 to 3:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("One.");
	break;
	case 2:
	printf("Two.");
	break;
	case 3:
	printf("Three.");
	break;
	default:
	printf ("Invalid.");
	break;
	}
	getch();
}

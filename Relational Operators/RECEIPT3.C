#include <stdio.h>
#include <conio.h>
void main()
{
	int n,x;
	clrscr();
	printf("Enter the Number of items bought:");
	scanf("%d",&x);
	if(x<10)
	n=x*120;
	else if (x>=10 && x<=99)
	n=x*100;
	else if(x>99)
	n=x*70;
	printf ("Total cost is:%d",n);
	getch();
}
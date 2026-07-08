#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter Day Number:");
	scanf("%d",&n);
	if (n==1)
	printf ("Sunday");
	if (n==2)
	printf ("Monday");
	if (n==3)
	printf("Tuesday");
	if (n==4)
	printf("Wednesday");
	if (n==5)
	printf("Thursday");
	if (n==6)
	printf("Friday");
	if (n==7)
	printf("Saturday");
	getch();
}

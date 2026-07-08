#include<stdio.h>
#include<conio.h>
void main()
{
	int n,d1,d2.s;
	clrscr();
	printf("Enter A Number:");
	scanf("%d",&n);
	d1=n/10;
	d2=n%10;
	s=(d1+d2)+(d1*d2);
	if (n==s)
	printf ("Special Number");
	else
	printf("Not Special but Unique");
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int s,h,m;
	clrscr();
	printf("Enter Time in Seconds:");
	scanf("%d", &s);
	m=s/60;
	s=s%60;
	h=m/60;
	m=m%60;
	printf("%d Hours, %d Minutes, %d Seonds",h,m,s);
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	float p,r;
	clrscr();
	printf("Enter printed price:");
	scanf("%f", &p);
	r=p;
	p= p-(p*0.9);
	p= p+(p*0.06);
	r=r-p;
	printf("Final Price= %.2f\n",r);
	getch();
}

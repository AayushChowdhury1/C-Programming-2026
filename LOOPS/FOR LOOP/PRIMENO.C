#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n,c=0;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
		if(n%i==0)
		c=+1;
		}
	if(c==2)
	printf("Prime.");
	else
	printf("Non Prime.");
	getch();
}

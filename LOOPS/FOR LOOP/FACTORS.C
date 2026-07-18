#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&n);
	printf ("Factors are:\t");
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	printf("%d\n\t\t",i);
	}
	getch();
}

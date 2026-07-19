#include <stdio.h>
#include <conio.h>
void main()
{
	int n,i,c=0;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if (n%i==0)
		c+=1;
	}
	if (c==2)
		printf("Prime No.");
	else if (c>2)
		printf("Composite No.");
	else
		printf("Neither Prime Nor Composite.");
	getch();
}
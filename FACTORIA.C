#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,j=1;
	clrscr();
	printf("Enter a number to find factorial :");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		j = j * i;
	}
	printf("Factorial = %d",j);
	getch();
}


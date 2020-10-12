#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(j=65;j<=69;j++)
		{
			//printf("%d ",j);
			printf("%c ",j);
		}
		printf("\n");
	}
	getch();
}

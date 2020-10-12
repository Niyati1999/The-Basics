#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			//k = i * j;
			printf("%d ",i*j);

		}

		printf("\n");
	}
	getch();
}

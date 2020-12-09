#include<stdio.h>
#include<conio.h>

void main()
{
	int marks[3][4],i,j;
	clrscr();
	printf("Enter 4 subject marks for 3 students:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&marks[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\n",marks[i][j]);
		}
	}
	getch();
}



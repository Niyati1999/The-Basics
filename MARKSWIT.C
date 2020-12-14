#include<stdio.h>
#include<conio.h>

void main()
{
	int m[3][4],i,j,total;
	clrscr();
	printf("Enter marks of 4 subjects for 3 students:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		total=0;
		for(j=0;j<4;j++)
		{
			total=total+m[i][j];
			printf("%d\t",m[i][j]);
		}
		printf("%d",total);
		printf("\n");
	}
	getch();
}


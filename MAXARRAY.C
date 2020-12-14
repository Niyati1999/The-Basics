#include<stdio.h>
#include<conio.h>

void main()
{
	int m[3][3],i,j,max;
	clrscr();
	printf("Enter values for 3*3 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		max=0;
		for(j=0;j<3;j++)
		{
			printf("%d\t",m[i][j]);
			if(m[i][j]>max)
			{
				max=m[i][j];
			}
		}
		printf("%d",max);
		printf("\n");
	}
	getch();
}

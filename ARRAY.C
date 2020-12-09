#include<stdio.h>
#include<conio.h>

void main()
{
	int marks[4],i;
	clrscr();
	printf("Enter marks for 4 students:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&marks[i]);

	}
	for(i=0;i<4;i++)
	{
		printf("%d\n",marks[i]);
	}
	getch();
}


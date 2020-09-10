#include<stdio.h>
#include<conio.h>

void main()
{
	int v,r;
	clrscr();
	printf("enter a value : ");
	scanf("%d",&v);
	if(v < 0)
	{
		printf("Negative \n");
	}
	else if(v == 0)
	{
		printf("Zero\n");
	}
	else
	{
		printf("Positive\n");
	}
	getch();
}

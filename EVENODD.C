#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	printf("enter a number = ");
	scanf("%d",&i);
	if(i == 0)
	{
		printf("Zero!!!\n");
	}
	else if(i%2 == 0)
	{
		printf("Even!!\n");
	}
	else
	{
		printf("odd!");
	}
	getch();
}

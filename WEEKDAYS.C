#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	printf("Enter number for the day = ");
	scanf("%d",&i);
	if(i == 1)
	{
		printf("%d - Sunday\n",i);
	}
	else if(i == 2)
	{
		printf("%d - Monday\n",i);
	}
	else if(i == 3)
	{
		printf("%d - Tuesday\n",i);
	}
	else if(i == 4)
	{
		printf("%d - Wednessday\n",i);
	}
	else if(i == 5)
	{
		printf("%d - Thursday\n",i);
	}
	else if(i == 6)
	{
		printf("%d - Friday\n",i);
	}
	else if(i == 7)
	{
		printf("%d - Saturday\n",i);
	}
	else
	{
		printf("Invalid Input\n");
	}
	getch();
}

